# Note we are using INTERFACE so that the library can be configured per-app
# with compile-time defines

add_library(libbas55 STATIC
src/arraydsc.c src/bmath.c src/cmd.c src/code.c src/codedvar.c
src/data.c src/data.c src/datalex.c src/dbg.c src/ecma55.c 
src/edit.c src/err.c src/getlin.c src/grammar.c src/ifun.c
src/lex.c src/line.c src/ngetopt.c src/parse.c src/str.c
src/util.c src/vm.c 
)

include_directories(
	.
    src
)

target_compile_definitions(libbas55 PRIVATE
	BAS55PICO=1
)

target_include_directories(libbas55 INTERFACE ${CMAKE_CURRENT_LIST_DIR})

