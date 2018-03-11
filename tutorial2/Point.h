#ifndef __POINT_H__
#define __POINT_H__

/* Simple structure for ctypes example */
typedef struct {
    int x;
    int y;
} Point;

#ifdef _MSC_VER

__declspec(dllexport) void __cdecl show_point(Point point);
__declspec(dllexport) void __cdecl move_point(Point point);
__declspec(dllexport) void __cdecl move_point_by_ref(Point *point);
__declspec(dllexport) Point __cdecl get_point(void);

#else

void show_point(Point point);
void move_point(Point point);
void move_point_by_ref(Point *point);
Point get_point(void);

#endif

#endif /* __POINT_H__ */
