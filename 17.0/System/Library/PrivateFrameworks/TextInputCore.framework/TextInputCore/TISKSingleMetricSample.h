@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *samples;

+ (id)makeMetric;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)size;
- (id)description;
- (void).cxx_destruct;
- (void)addSample:(id)a0;
- (void)merge:(id)a0;
- (BOOL)isEqual:(id)a0;
- (double)average;
- (id)initWithCoder:(id)a0;
- (BOOL)isEmpty;
- (double)variance;
- (double)sum;
- (id)generateDataForSR:(id)a0;

@end
