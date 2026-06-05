@echo off
echo Compiling Hotel Management System...

g++ -o hotel.exe ^
    src/main.cpp ^
    database/database.cpp ^
    src/Customer.cpp ^
    src/Room.cpp ^
    -Idatabase ^
    -Isrc ^
    -I"mariadb_connector/MariaDB/MariaDB Connector C/include" ^
    -L"mariadb_connector/MariaDB/MariaDB Connector C/lib" ^
    -lmariadb ^
    -Wl,--enable-stdcall-fixup

if %ERRORLEVEL% NEQ 0 (
    echo Compilation failed!
    exit /b %ERRORLEVEL%
)

echo Copying DLL dependencies...
copy /Y "mariadb_connector\MariaDB\MariaDB Connector C\lib\libmariadb.dll" . > NUL

echo Compilation and setup completed successfully!
echo Run hotel.exe to start the application.
