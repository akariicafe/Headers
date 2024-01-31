@class MXAverage;

@interface MXDisplayMetric : MXMetric

@property (readonly) MXAverage *averagePixelLuminance;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithAveragePictureLevel:(id)a0;

@end
