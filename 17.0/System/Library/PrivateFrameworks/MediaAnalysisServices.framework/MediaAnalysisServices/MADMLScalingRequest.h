@interface MADMLScalingRequest : MADRequest

@property (readonly, nonatomic) unsigned long long scaledImageWidth;
@property (readonly, nonatomic) unsigned long long scaledImageHeight;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithScaledImageWidth:(unsigned long long)a0 scaledImageHeight:(unsigned long long)a1;

@end
