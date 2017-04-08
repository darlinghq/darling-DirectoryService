project(DirectoryService)

add_compile_options(
	-nostdinc
)

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/include
)

#add_framework(DirectoryService
#	FAT
#	CURRENT_VERSION
#	VERSION "A"

#	SOURCES
#		empty.c

#	DEPENDENCIES
#		system
#)

install(FILES Server/DirectoryServiceAttributes.7 DESTINATION libexec/darling/usr/share/man/man7)

install(FILES
	Server/DirectoryService.8
	Server/dspluginhelperd.8

	DESTINATION libexec/darling/usr/share/man/man8
)
