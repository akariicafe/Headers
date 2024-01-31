@class MXHistogram;

@interface MXAppResponsivenessMetric : MXMetric

@property (readonly) MXHistogram *histogrammedApplicationHangTime;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithAppResponsivenessData:(id)a0;

@end
