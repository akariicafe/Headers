@class NSDictionary, NSNumber;

@interface HMINMSConfiguration : HMFObject

@property (readonly) NSDictionary *thresholdWithLabels;
@property (readonly) NSDictionary *metricWithLabels;
@property (readonly) NSNumber *thresholdDefault;
@property (readonly) NSNumber *metricDefault;

- (void).cxx_destruct;
- (long long)metricForLabel:(id)a0;
- (id)initWithThresholdWithLabels:(id)a0 metricWithLabels:(id)a1 thresholdDefault:(id)a2 metricDefault:(id)a3;
- (id)thresholdForLabel:(id)a0;

@end
