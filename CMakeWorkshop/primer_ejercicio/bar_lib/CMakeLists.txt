set(STATIC_LIB_SRCS
        "${CMAKE_CURRENT_LIST_DIR}/src/unity.cpp")

set(STATIC_LIB_HDRS
        "${CMAKE_CURRENT_LIST_DIR}/include/unity.h")

add_library(static_lib STATIC "${STATIC_LIB_SRCS}" "${STATIC_LIB_HDRS}")

target_include_directories(static_lib
	PUBLIC
		"${CMAKE_CURRENT_LIST_DIR}/include"
)

if(BOOL_LIE)
    target_compile_definitions(static_lib
    	PRIVATE
    		-DLIE
    )
ENDIF()
