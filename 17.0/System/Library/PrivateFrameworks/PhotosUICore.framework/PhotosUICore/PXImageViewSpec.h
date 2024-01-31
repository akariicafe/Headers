@class NSArray;

@interface PXImageViewSpec : PXViewSpec

@property (copy, nonatomic) NSArray *overlaySpecs;
@property (nonatomic) BOOL shouldEnableFocus;
@property (nonatomic) long long roundedCornersMode;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } floatingContentMotionRotation;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } floatingContentMotionTranslation;
@property (readonly, nonatomic) double floatingUnfocusedShadowOpacity;
@property (readonly, nonatomic) double floatingShadowOpacity;
@property (readonly, nonatomic) double floatingUnfocusedShadowRadius;
@property (readonly, nonatomic) double floatingShadowRadius;
@property (readonly, nonatomic) double floatingUnfocusedShadowVerticalOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } floatingUnfocusedShadowExpansion;
@property (readonly, nonatomic) double focusedSizeIncrease;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
