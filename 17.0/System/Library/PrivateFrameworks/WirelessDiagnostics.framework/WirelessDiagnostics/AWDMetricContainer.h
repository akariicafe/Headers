@class PBCodable;

@interface AWDMetricContainer : NSObject

@property (retain, nonatomic) PBCodable *metric;
@property (readonly, nonatomic) unsigned int metricId;

- (void).cxx_destruct;

@end
