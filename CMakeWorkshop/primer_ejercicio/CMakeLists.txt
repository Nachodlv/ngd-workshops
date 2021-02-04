cmake_minimum_required(VERSION 3.19)

project(CMAKE_WORKSHOP CXX)

if(WIN32)
	set(LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}")
	set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}")
endif()

# Add library directories
add_subdirectory(foo_lib)
add_subdirectory(bar_lib)

# Run python script to fix the consumer
set(MODIFIED_SRC "${CMAKE_CURRENT_LIST_DIR}/src/consumer_fixed.cpp")
set(PYTHON_SCRIPT "${CMAKE_CURRENT_LIST_DIR}/fix_validity.py")

add_custom_command(
	OUTPUT "${MODIFIED_SRC}"
	COMMAND python "${PYTHON_SCRIPT}"
	VERBATIM
)

set(BOOL_LIE OFF CACHE BOOL "This boolean will make the program to lie")

# Set the source files
set(SRCS
	"${MODIFIED_SRC}"
	"${CMAKE_CURRENT_LIST_DIR}/src/main.cpp"
)

# Set the header files
set(HDRS
	"${CMAKE_CURRENT_LIST_DIR}/include/consumer.h"
)

add_executable(my_executable "${SRCS}" "${HDRS}")

# Link the libraries with its names, NOT its directories
target_link_libraries(my_executable PRIVATE dynamic_lib static_lib)

target_include_directories(my_executable
	PUBLIC
		"${CMAKE_CURRENT_LIST_DIR}/include"
)
