@class NSString;

@interface HMMutableClientContext : HMClientContext

@property (retain, nonatomic) NSString *metricIdentifier;

+ (id)clientContextWithMetricIdentifier:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMetricIdentifier:(id)a0;

@end
