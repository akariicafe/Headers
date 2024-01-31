@class UIView, NSString, CCUICAPackageDescription, NSArray, UIImage, UIImageView, _UIFluidSliderInteractionUpdate, _UIFluidSliderInteraction, UIPanGestureRecognizer, CCUICAPackageView;
@protocol CCUIPunchOutCompensating, CCUIPunchOutRendering;

@interface CCUIBaseSliderView : UIControl <CCUIGroupRendering, CCUITouchContinuationProviding, CCUIContentModuleExpandedStateListener, CCUIContentModuleTopLevelGestureProvider> {
    UIImageView *_glyphImageView;
    CCUICAPackageView *_glyphPackageView;
    UIView<CCUIPunchOutRendering, CCUIPunchOutCompensating> *_activeGlyphView;
    UIView<CCUIPunchOutCompensating> *_compensatingGlyphView;
    struct CGSize { double width; double height; } _sizeForValidConfiguration;
    _UIFluidSliderInteractionUpdate *_lastInteractionUpdate;
    BOOL _shouldSendEditingControlEvents;
    BOOL _isReceivingIndirectInputUpdates;
    BOOL _expanded;
}

@property (readonly, nonatomic) _UIFluidSliderInteraction *interaction;
@property (readonly, nonatomic, getter=_panGestureRecognizer) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly, nonatomic) UIView *elasticBackgroundContentView;
@property (readonly, nonatomic) UIView *elasticContentBoundaryView;
@property (readonly, nonatomic) UIView *glyphContainerView;
@property (nonatomic) BOOL shouldProvideBuiltInFeedback;
@property (nonatomic) BOOL shouldScaleWithButtonInput;
@property (nonatomic) BOOL shouldRelaxVisibilityRequirementForButtonInput;
@property (readonly, nonatomic) BOOL shouldAlwaysEnableButtonElasticity;
@property (nonatomic) unsigned long long behaviorIdentifier;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView *elasticContentView;
@property (nonatomic) BOOL shouldIncludeVolumeButtonsInput;
@property (nonatomic) double elasticContentStretchAmount;
@property (readonly, nonatomic) BOOL shouldIntegralizeContentLayout;
@property (readonly, nonatomic) BOOL shouldIntegralizeValueLayout;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } glyphCenter;
@property (nonatomic) double glyphScale;
@property (readonly, nonatomic) float value;
@property (readonly, nonatomic) float presentationValue;
@property (readonly, nonatomic, getter=isEditingValue) BOOL editingValue;
@property (nonatomic) BOOL usesBuiltInBackgroundView;
@property (nonatomic) double continuousSliderCornerRadius;
@property (retain, nonatomic) UIImage *glyphImage;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (retain, nonatomic) NSString *glyphState;
@property (nonatomic, getter=isGlyphVisible) BOOL glyphVisible;
@property (nonatomic, getter=isValueVisible) BOOL valueVisible;
@property (nonatomic, getter=isInteractiveWhenUnexpanded) BOOL interactiveWhenUnexpanded;
@property (readonly, nonatomic, getter=isGroupRenderingRequired) BOOL groupRenderingRequired;
@property (readonly, nonatomic) NSArray *punchOutRenderingViews;
@property (readonly, nonatomic) NSArray *punchOutRootLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *topLevelBlockingGestureRecognizers;

- (void)layoutElasticContentViews;
- (id)_additionalTopLevelBlockingGestureRecognizers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_length;
- (void)setEnabled:(BOOL)a0;
- (void)_setGlyphState:(id)a0;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void)_updateInteractionEnabled;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)layoutSubviews;
- (void)contentModuleWillTransitionToExpandedContentMode:(BOOL)a0;
- (id)viewForTouchContinuation;
- (void)setValue:(float)a0;
- (void)_layoutElasticContentContainers;
- (void)_updateBackgroundViewAppearance;
- (void)_applyGlyphState:(id)a0 performConfiguration:(BOOL)a1;
- (void)_configureButtonInteraction;
- (void)_configurePanGestureRecognizer;
- (double)_effectiveStretchAmount;
- (void)_handleFluidSliderInteractionUpdate:(id)a0;
- (BOOL)_isInteractionStable;
- (void)_setActiveGlyphView:(id)a0;
- (id)createBackgroundView;

@end
