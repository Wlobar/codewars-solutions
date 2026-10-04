cmake_minimum_required(VERSION 3.10)
project(CodewarsSolutions)

# Szuka wszystkich plików .cpp wewnątrz folderu cpp i jego podfolderach (8-kyu, 7-kyu)
file(GLOB_RECURSE SOURCES "cpp/*.cpp")

# Dla każdego znalezionego pliku tworzy oddzielny program
foreach(source_file ${SOURCES})
    # Wyciąga samą nazwę pliku, bez ścieżki i bez rozszerzenia (np. "zadanie1")
    get_filename_component(target_name ${source_file} NAME_WE)
    
    # Tworzy aplikację wykonywalną dla danego pliku
    add_executable(${target_name} ${source_file})
endforeach()