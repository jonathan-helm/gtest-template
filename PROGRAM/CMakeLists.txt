project(PROGRAM)

set(HEADER_FILES
        PROGRAM.h
        )

set(SOURCE_FILES
        PROGRAM.c)

add_library(PROGRAM STATIC ${SOURCE_FILES} ${HEADER_FILES})
