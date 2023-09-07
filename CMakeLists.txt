# CMakeList.txt: icar 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
cmake_minimum_required (VERSION 3.8)

# 如果支持，请为 MSVC 编译器启用热重载。
if (POLICY CMP0141)
   cmake_policy(SET CMP0141 NEW)
   set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()




project ("icar")

# 将源代码添加到此项目的可执行文件。
file(GLOB SOURCES "src/*.cpp")   #文件夹里面所有的cpp文件
file(GLOB HEADERS "include/*.h") #文件夹里面所有的头文件
add_executable(icar ${SOURCES} ${HEADERS})

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/config/motion.json ${CMAKE_CURRENT_BINARY_DIR}/motion.json COPYONLY)

install(TARGETS ${PROJECT_NAME} 
        RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}
        LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}
        ARCHIVE DESTINATION ${CMAKE_INSTALL_PREFIX})

if(WIN32)
    set(OpenCV_DIR "F:/opencv/opencv/build")
endif()    
find_package(OpenCV REQUIRED)




if(OpenCV_FOUND)
    target_include_directories(icar PUBLIC ${OpenCV_INCLUDE_DIRS})
    target_link_libraries(icar ${OpenCV_LIBS})
endif()
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET icar PROPERTY CXX_STANDARD 20)
endif()





