@interface EBConditionalFormat : NSObject

+ (int)convertEDConditionalFmtOperatorEnumToXl:(int)a0;
+ (int)convertEDConditionalFmtTypeEnumToXl:(int)a0;
+ (int)convertXlConditionalFmtOperatorEnumToED:(int)a0;
+ (int)convertXlConditionalFmtTypeEnumToED:(int)a0;
+ (void)readXlConditionalFormat:(void *)a0 toEDConditionalFormatting:(id)a1 state:(id)a2;
+ (BOOL)validXlCf:(struct XlCf { void /* function */ **x0; struct XlHeader { unsigned int x0; short x1; unsigned char x2; } x1; int x2; int x3; short x4; short x5; struct XlDXf *x6; char *x7; char *x8; } *)a0;

@end
