@interface PPSMetricType : NSObject

@property (readonly) int category;
@property (readonly) unsigned long long value;

+ (id)absoluteMeasure;
+ (id)accumulatedNegativeMeasure;
+ (id)accumulatedPositiveMeasure;
+ (id)deltaMeasure;
+ (id)genericDimension;
+ (BOOL)isValidMetricType:(int)a0 value:(unsigned long long)a1;
+ (BOOL)isValidMetricTypeJSON:(id)a0;
+ (id)metricTypeWithJSONObject:(id)a0;
+ (id)metricTypeWithProto:(id)a0;
+ (id)stateDimension;

- (id)proto;
- (id)json;
- (id)initWithCategory:(int)a0 value:(unsigned long long)a1;

@end
