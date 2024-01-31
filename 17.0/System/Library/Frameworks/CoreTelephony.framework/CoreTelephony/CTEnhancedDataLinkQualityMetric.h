@interface CTEnhancedDataLinkQualityMetric : CTEnhancedLinkQualityMetric

@property (nonatomic) long long metricType;

+ (BOOL)supportsSecureCoding;

- (id)initWithType:(long long)a0 enhancedLinkQuality:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
