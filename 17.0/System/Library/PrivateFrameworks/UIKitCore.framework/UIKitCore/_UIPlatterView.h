@class _UIPortalView, _UIDragPreviewShadowProperties, _UIShapeView, UIView, _DUIPreview, NSValue;

@interface _UIPlatterView : UIView

@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) _UIShapeView *platterMaskView;
@property (readonly, nonatomic) _UIShapeView *portalMaskView;
@property (retain, nonatomic) _UIPortalView *portalView;
@property (readonly, nonatomic) UIView *portalWrapperView;
@property (readonly, nonatomic) UIView *shadowView;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } containerCounterScaleTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } containerCounterRotationTransform;
@property (readonly, copy, nonatomic) _DUIPreview *preview;
@property (weak, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIView *componentView;
@property (retain, nonatomic) _UIDragPreviewShadowProperties *shadowProperties;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } badgeLocation;
@property (nonatomic, getter=isLifted) BOOL lifted;
@property (nonatomic, getter=isBackgroundVisible) BOOL backgroundVisible;
@property (nonatomic, getter=isShadowVisible) BOOL shadowVisible;
@property (nonatomic) BOOL transformAppliedExternally;
@property (nonatomic) BOOL constrainSize;
@property (nonatomic) BOOL constrainSizeWhenNotLifted;
@property (nonatomic) struct CGSize { double width; double height; } overrideSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) double orientationRotation;
@property (nonatomic) BOOL appliesOriginalRotation;
@property (nonatomic) double stackRotation;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } appliedTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } additionalTransform;
@property (retain, nonatomic) NSValue *anchorPointValueToAdjustToOnMoveToWindow;
@property (nonatomic, getter=isFlipped) BOOL flipped;
@property (nonatomic) BOOL precisionMode;

- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })targetTransform;
- (double)scaleFactor;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_isEligibleForFocusOcclusion;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateTransform;
- (id)_applyMaskPath:(id)a0 toView:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_configureRadiosityShadowIfNeededWithSourceView:(id)a0;
- (BOOL)_hasRadiosityShadow;
- (void)_updateShadowViewState;
- (id)initWithDUIPreview:(id)a0;
- (id)initWithDUIPreview:(id)a0 imageComponent:(id)a1;
- (id)initWithDroppedItem:(id)a0;
- (struct CGPoint { double x0; double x1; })initialBadgeLocation;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })scaleTransform;
- (void)takeCounterTransformsToAddToContainer:(id)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })targetTransformIncludingAppliedTransform:(BOOL)a0;

@end
