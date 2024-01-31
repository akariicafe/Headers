@class PBCodable;

@interface WISMetricContainer : NSObject

@property (retain, nonatomic) PBCodable *metric;
@property (readonly, nonatomic) unsigned int metricId;

- (void).cxx_destruct;
- (id)initWithMetricId:(unsigned int)a0;

@end
