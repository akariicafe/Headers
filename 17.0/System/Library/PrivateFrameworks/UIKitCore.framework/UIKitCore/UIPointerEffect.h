@class NSValue, NSString, UITargetedPreview;

@interface UIPointerEffect : NSObject <NSCopying, UIHoverEffect>

@property (copy, nonatomic) UITargetedPreview *preview;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long constrainedAxes;
@property (readonly, nonatomic) NSValue *overrideSlipPoints;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } slipFactor;
@property (readonly, nonatomic) double maxSlip;
@property (readonly, nonatomic) double parallaxAmount;
@property (readonly, nonatomic) double scaleUpPoints;
@property (readonly, nonatomic) double defaultPointerCornerRadius;
@property (readonly, nonatomic) double scaleUpAnimationResponse;
@property (readonly, nonatomic) double scaleUpAnimationDampingRatio;
@property (readonly, nonatomic) double progressiveScaleUpAnimationResponse;
@property (readonly, nonatomic) double dampedAnimationResponse;
@property (readonly, nonatomic) double dampedAnimationDampingRatio;
@property (readonly, nonatomic) BOOL useSoftShadow;
@property (readonly, nonatomic) BOOL allowsSanitization;
@property (readonly, nonatomic) id /* block */ tintColorMatrixProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectWithPreview:(id)a0;

- (id)settings;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
