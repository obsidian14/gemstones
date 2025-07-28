add_library(core core.cpp)
target_compile_features(core PUBLIC cxx_std_20)
target_compile_options(
	core
	PUBLIC
	-Wall
	-Wextra
	-Werror
	-fno-exceptions
	-fno-rtti
)
add_executable(all_test all_test.cpp)
target_link_libraries(all_test core)
add_test(NAME all_test COMMAND all_test)
