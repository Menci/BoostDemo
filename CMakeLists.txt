cmake_minimum_required(VERSION 3.15)

project(project)

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/third_party/boost" EXCLUDE_FROM_ALL)

add_executable(my_program main.cc)
target_link_libraries(my_program
	Boost::format
	# Add Boost::what_you_need here
)
