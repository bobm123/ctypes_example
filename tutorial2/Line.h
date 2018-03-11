#ifndef __LINE_H__
#define __LINE_H__
#include "Point.h"

typedef struct {
    Point start;
    Point end;
} Line;

#ifdef _MSC_VER

__declspec(dllexport) Line __cdecl get_line(void);
__declspec(dllexport) void __cdecl show_line(Line line);
__declspec(dllexport) void __cdecl move_line_by_ref(Line *line);

#else

Line get_line(void);
void show_line(Line line);
void move_line_by_ref(Line *line);

#endif

#endif /* __LINE_H__ */
