@interface EBBorders : NSObject

+ (id)edBordersFromXlDXf:(struct XlDXf { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; struct XlDXfUserFmt *x6; struct XlDXfFont *x7; struct XlDXfAlign *x8; struct XlDXfBorders *x9; struct XlDXfPattern *x10; struct XlDXfProtect *x11; } *)a0 edResources:(id)a1;
+ (int)convertEDBorderEnumToXl:(int)a0;
+ (int)convertEDDiagonalEnumToXl:(int)a0;
+ (int)convertXlBorderEnumToED:(int)a0;
+ (int)convertXlDiagStyleEnumToED:(int)a0;
+ (id)edBordersFromXlXf:(struct XlXf { void /* function */ **x0; struct XlHeader { unsigned int x0; short x1; unsigned char x2; } x1; short x2; short x3; short x4; int x5; int x6; unsigned char x7; unsigned char x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; } *)a0 edResources:(id)a1;

@end
