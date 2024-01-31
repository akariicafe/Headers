@interface TSCHChartGridValue : NSObject

+ (id)dateValueWithNSDate:(id)a0;
+ (id)durationValueWithDouble:(double)a0;
+ (id)numberValueWithDouble:(double)a0;
+ (id)NSDateFromGridValue:(id)a0;
+ (id)NSDateConvertedFromGridValue:(id)a0;
+ (id)dateValueWithDouble:(double)a0;
+ (id)instanceWithArchive:(const void *)a0;
+ (void)saveGridValue:(id)a0 toArchive:(void *)a1;

- (id)initWithArchive:(const void *)a0;

@end
