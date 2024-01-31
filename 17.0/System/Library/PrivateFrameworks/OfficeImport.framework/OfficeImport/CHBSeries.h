@interface CHBSeries : NSObject

+ (id)readFrom:(void *)a0 state:(id)a1;
+ (Class)chdSeriesClassWithState:(id)a0;
+ (id)chdSeriesWithState:(id)a0;
+ (void)readXlChartSeriesFormat:(void *)a0 chdSeries:(id)a1 state:(id)a2;
+ (void)resolveSeriesStyle:(id)a0 state:(id)a1;

@end
