@interface EBContentFormat : NSObject

+ (id)edContentFormatFromXlDXfUserFmt:(struct XlDXfUserFmt { void /* function */ **x0; BOOL x1; short x2; struct XlString *x3; } *)a0 edResources:(id)a1;
+ (id)edContentFormatFromXlFormat:(struct XlFormat { void /* function */ **x0; struct XlHeader { unsigned int x0; short x1; unsigned char x2; } x1; struct XlString *x2; short x3; } *)a0 edResources:(id)a1;

@end
