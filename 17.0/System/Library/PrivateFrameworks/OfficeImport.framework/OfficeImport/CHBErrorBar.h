@interface CHBErrorBar : NSObject

+ (int)edErrorBarDirectionFrom:(int)a0;
+ (int)edErrorBarTypeFrom:(int)a0;
+ (id)readErrorBarGraphicProperties:(const struct XlChartSeriesFormat { void /* function */ **x0; struct XlChartLineStyle *x1; struct XlChartFillStyle *x2; struct XlChartMarkerStyle *x3; struct XlChartPicF *x4; char *x5; char *x6; unsigned int x7; unsigned int x8; int x9; unsigned short x10; unsigned short x11; unsigned short x12; int x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; } *)a0 forStyleIndex:(unsigned long long)a1 state:(id)a2;
+ (void)readFrom:(void *)a0 toSeries:(id)a1 state:(id)a2;
+ (int)xlErrorBarSourceFrom:(int)a0;
+ (int)xlErrorBarTypeFrom:(int)a0 direction:(int)a1;

@end
