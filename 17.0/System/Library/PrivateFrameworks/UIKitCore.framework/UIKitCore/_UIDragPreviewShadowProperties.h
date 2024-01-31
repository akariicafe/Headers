@class UIView;

@interface _UIDragPreviewShadowProperties : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIView *_localShadowView;
@property (nonatomic) long long shadowType;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } liftedTransform;
@property (nonatomic) double liftedAlpha;
@property (nonatomic) double radiosityBlurRadius;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
