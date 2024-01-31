@class UIImage;

@interface NTKUpNextCurvedMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) double angle;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } center;
@property (readonly, nonatomic) UIImage *maskImage;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRadius:(double)a0 angle:(double)a1 center:(struct CGPoint { double x0; double x1; })a2 maskImage:(id)a3;

@end
