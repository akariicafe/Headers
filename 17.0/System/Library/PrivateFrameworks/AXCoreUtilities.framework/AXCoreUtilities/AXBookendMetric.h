@interface AXBookendMetric : AXMetric <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)endMeasurement;
- (void)startMeasurement;

@end
