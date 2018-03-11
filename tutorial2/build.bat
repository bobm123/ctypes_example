cl.exe /LD Point.c /link /OUT:libpoint.dll
cl.exe /LD Line.c /link Point.obj /OUT:libline.dll
