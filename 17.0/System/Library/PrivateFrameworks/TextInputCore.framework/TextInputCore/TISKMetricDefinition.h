@class NSString;

@interface TISKMetricDefinition : NSObject

@property (readonly, nonatomic) NSString *metricName;
@property (readonly, nonatomic) int metricType;
@property (readonly, nonatomic) unsigned long long positionalSize;
@property (readonly, nonatomic) struct { double x0; } *metricDefinition;
@property (readonly, nonatomic) BOOL isPointMetric;

+ (id)_makeMetric:(id)a0 type:(int)a1;
+ (id)_makeMetric:(id)a0 type:(int)a1 metricDef:(struct { double x0; } *)a2;
+ (id)_makeMetric:(id)a0 type:(int)a1 metricDef:(struct { double x0; } *)a2 isPointMetric:(BOOL)a3;
+ (id)_makeMetric:(id)a0 type:(int)a1 metricDef:(struct { double x0; } *)a2 size:(unsigned long long)a3;
+ (id)_makeMetric:(id)a0 type:(int)a1 metricDef:(struct { double x0; } *)a2 size:(unsigned long long)a3 isPointMetric:(BOOL)a4;
+ (id)metricDefinitions;
+ (double)pointsToMM:(double)a0;

- (void).cxx_destruct;
- (id)init:(id)a0 type:(int)a1 metricDef:(struct { double x0; } *)a2 size:(unsigned long long)a3 isPointMetric:(BOOL)a4;

@end
