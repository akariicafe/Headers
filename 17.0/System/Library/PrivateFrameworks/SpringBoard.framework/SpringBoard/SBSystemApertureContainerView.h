@class NSUUID, NSString, SBSystemApertureSettings, UIView, _SBAdaptiveKeyLineBackdropView, _SBSystemApertureGainMapView, _UILumaTrackingBackdropView, NSMutableDictionary, UIViewController, SBSAContainerViewDescription, UIColor;
@protocol SBSystemApertureContainerViewDelegate, SAUIElementViewControlling, SBSystemApertureElementOrientationAuthority;

@interface SBSystemApertureContainerView : UIView <_UILumaTrackingBackdropViewDelegate, PTSettingsKeyObserver, SBSAInterfaceElementIdentifying, SBSystemApertureElementViewControllingContaining, SBSystemApertureGainMapBackedRendering, SBSystemApertureElementOrientationObserving, SBSystemApertureElementOrientationAuthority> {
    SBSystemApertureSettings *_settings;
    UIView *_contentClippingView;
    _UILumaTrackingBackdropView *_backgroundLumaSamplingBackdrop;
    UIView *_darkBkgKeyLineView;
    _SBAdaptiveKeyLineBackdropView *_lightBkgKeyLineView;
    UIView *_shadowView;
    UIView *_blobEnablingBlackFillView;
    _SBSystemApertureGainMapView *_gainMapView;
    UIView *_backgroundGroupingView;
    UIView *_subBackgroundGroupingView;
    UIView *_hitTestView;
    UIView *_scalingContentView;
    UIView *_rotatingContentView;
    long long _keyLineMode;
    long long _shadowStyle;
    long long _renderingBackgroundLuminanceLevel;
    UIColor *_keyLineTintColor;
    UIColor *_cachedValidatedKeyLineTintColor;
    NSMutableDictionary *_transitionIDsToReasons;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _gainMapLayerInsets;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _previousContentTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _activeContentRotationTransform;
    unsigned long long _rank;
    BOOL _needsShadowStyleUpdate;
}

@property (readonly, nonatomic) UIView *scalingContentView;
@property (nonatomic) unsigned long long rank;
@property (weak, nonatomic) id<SBSystemApertureContainerViewDelegate> delegate;
@property (nonatomic, getter=isContentClippingEnabled) BOOL contentClippingEnabled;
@property (readonly, copy, nonatomic) SBSAContainerViewDescription *containerViewDescription;
@property (nonatomic) long long shadowStyle;
@property (nonatomic) long long keyLineMode;
@property (copy, nonatomic) UIColor *keyLineTintColor;
@property (readonly, nonatomic) long long sampledBackgroundLuminanceLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSUUID *interfaceElementIdentifier;
@property (weak, nonatomic) UIViewController<SAUIElementViewControlling> *elementViewController;
@property (readonly, weak, nonatomic) UIViewController<SAUIElementViewControlling> *outgoingElementViewController;
@property (nonatomic) struct SBSystemApertureContainerRenderingConfiguration { long long x0; long long x1; } renderingConfiguration;
@property (weak, nonatomic) id<SBSystemApertureElementOrientationAuthority> elementOrientationAuthority;

+ (double)_defaultCornerRadiusForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inWindow:(id)a1;

- (void)willMoveToSuperview:(id)a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)_setContinuousCornerRadius:(double)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)backgroundLumaView:(id)a0 didTransitionToLevel:(unsigned long long)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setCornerRadius:(double)a0;
- (void)setNeedsLayout;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_applySettingsValues;
- (id)_generateAccessibilityIdentifier;
- (void)_invertColorsChanged:(id)a0;
- (BOOL)_isInRotationTransition;
- (void)_layoutHitTestViewWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setContentViewTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 elementViewControllerInterfaceOrientation:(long long)a1;
- (void)_updateContentViewTransformImmediately;
- (void)_updateKeyLineFilters;
- (void)_updateShadowStyleIfNeeded;
- (id)_validatedKeyLineTintColor;
- (long long)activeElementInterfaceOrientationForSystemApertureElementOrientationObserver:(id)a0;
- (void)addContentSubview:(id)a0;
- (void)elementOrientationDidChangeWithTransitionCoordinator:(id)a0;
- (id)initWithInterfaceElementIdentifier:(id)a0;
- (void)setID0CornerRadius:(double)a0;

@end
