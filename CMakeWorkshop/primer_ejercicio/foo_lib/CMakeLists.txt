SET(DYNAMIC_LIB_SRCS
	"${CMAKE_CURRENT_LIST_DIR}/src/magic.cpp"
)

SET(DYNAMIC_LIB_HDRS
	"${CMAKE_CURRENT_LIST_DIR}/include/magic.h"
)

add_library(dynamic_lib SHARED "${DYNAMIC_LIB_SRCS}" "${DYNAMIC_LIB_HDRS}")

target_include_directories(dynamic_lib
	PUBLIC
		"${CMAKE_CURRENT_LIST_DIR}/include"
)

# Define FOO_COMPILING macro
target_compile_definitions(dynamic_lib
	PRIVATE
		-DFOO_COMPILING
)
