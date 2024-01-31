@interface EBDifferentialStyle : NSObject

+ (id)edDifferentialStyleFromXlDXf:(struct XlDXf { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; struct XlDXfUserFmt *x6; struct XlDXfFont *x7; struct XlDXfAlign *x8; struct XlDXfBorders *x9; struct XlDXfPattern *x10; struct XlDXfProtect *x11; } *)a0 edResources:(id)a1;
+ (unsigned char)xlDXfBordersFlagsFromEDDifferentialStyle:(id)a0;
+ (unsigned char)xlDXfPatternFlagsFromEDDifferentialStyle:(id)a0;

@end
