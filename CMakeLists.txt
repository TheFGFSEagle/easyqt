cmake_minimum_required(VERSION 3.1.0)

project(easyqt
	VERSION 1.0.0
	LANGUAGES CXX
	DESCRIPTION "Small wrapper around Qt5 to make working with it easier"
)
include(GNUInstallDirs)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(BUILD_SHARED_LIBS ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
	set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets UiTools REQUIRED)
add_subdirectory(3rdparty)
add_subdirectory(src)

CONFIGURE_FILE(
	"${CMAKE_CURRENT_SOURCE_DIR}/CMakeModules/cmake_uninstall.cmake.in"
	"${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
	IMMEDIATE @ONLY
)
ADD_CUSTOM_TARGET(
	uninstall
	"${CMAKE_COMMAND}" -P "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
)

configure_file(easyqt.pc.in easyqt.pc @ONLY)
install(
	FILES ${CMAKE_BINARY_DIR}/easyqt.pc
	DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig
)
install(
	DIRECTORY include/
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/easyqt
)

