@class NSString;

@interface HMClientContext : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSString *metricIdentifier;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMetricIdentifier:(id)a0;

@end
