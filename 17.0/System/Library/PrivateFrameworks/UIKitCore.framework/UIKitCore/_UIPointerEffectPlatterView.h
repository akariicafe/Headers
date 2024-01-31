@class NSMutableArray, _UIPortalView, UITargetedPreview, UIPointerShape, _UIPointerEffectTintView, UIView, _UILumaTrackingBackdropView;

@interface _UIPointerEffectPlatterView : UIView

@property (retain, nonatomic) UIView *contentSourceView;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) _UIPortalView *contentPortalView;
@property (retain, nonatomic) _UIPointerEffectTintView *tintView;
@property (retain, nonatomic) _UILumaTrackingBackdropView *lumaTrackingView;
@property (retain, nonatomic) UIView *specularOverlayView;
@property (retain, nonatomic) NSMutableArray *accessoryPortals;
@property (copy, nonatomic) UITargetedPreview *targetedPreview;
@property (nonatomic) double shadowAlpha;
@property (nonatomic, getter=isTintDisabled) BOOL tintDisabled;
@property (nonatomic) long long tintMode;
@property (nonatomic) double tintViewScale;
@property (retain, nonatomic) UIPointerShape *tintViewShape;
@property (retain, nonatomic) UIView *specularHighlight;
@property (nonatomic) unsigned long long specularOptions;
@property (nonatomic) BOOL useSoftShadow;
@property (nonatomic) BOOL geometryFrozen;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (copy, nonatomic) id /* block */ tintColorMatrixProvider;

- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isEligibleForFocusOcclusion;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutTintView;
- (BOOL)_ignoreRemoveAllAnimations;
- (void)_installAccessoryView:(id)a0;
- (id)_newLumaTrackingViewForTintView:(id)a0;
- (id)_newShadowView;
- (id)_newTintView;
- (id)_specularOverlayWithHighlightPortal:(id)a0 options:(unsigned long long)a1;
- (void)_updateContentMask;
- (id)initWithTargetedPreview:(id)a0;

@end
