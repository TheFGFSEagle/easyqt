add_library(easyqt
	application.cxx
	command.cxx
	commands.cxx
	logging.cxx
	menubar.cxx
	uiloader.cxx
	utils.cxx
)
add_library(easyqt::easyqt ALIAS easyqt)
target_link_libraries(
	easyqt
	Qt5::Widgets
	Qt5::UiTools
	pugixml::pugixml
	singleton++
)

target_include_directories(
	easyqt
	PUBLIC
		${PROJECT_SOURCE_DIR}/include/easyqt/
		"$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/>"
		singleton++
		Qt5::Widgets
		Qt5::UiTools
		pugixml::pugixml
)
set_target_properties(easyqt PROPERTIES
	VERSION ${PROJECT_VERSION}
	SOVERSION 1
)

install(
	TARGETS easyqt
	ARCHIVE  DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY  DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME  DESTINATION ${CMAKE_INSTALL_BINDIR}
)
install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/easyqt)

