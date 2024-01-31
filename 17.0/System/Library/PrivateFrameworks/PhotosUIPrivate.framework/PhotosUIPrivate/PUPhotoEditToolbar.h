@class CAGradientLayer, NSArray, NSString, UILongPressGestureRecognizer, UIView, PUPhotoEditViewControllerSpec, UIButton;
@protocol PUPhotoEditToolbarDelegate;

@interface PUPhotoEditToolbar : UIView <PUPhotoEditLayoutStaticAdaptable> {
    UIView *_gradientBackgroundView;
    CAGradientLayer *_gradientLayer;
    NSArray *_basicViewsConstraints;
    NSArray *_mainActionButtonConstraints;
    NSArray *_secondaryActionButtonConstraints;
    NSArray *_toolButtonsConstraints;
    NSArray *_toolButtonLayoutGuides;
    UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer;
}

@property (retain, nonatomic) UIView *mainToolbarContainer;
@property (nonatomic) BOOL useLargeShortSideHeight;
@property (nonatomic) BOOL useiPhonePrimaryPortraitHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentPadding;
@property (readonly, copy, nonatomic) NSArray *toolButtons;
@property (readonly, nonatomic) long long buttonSpacing;
@property (readonly, nonatomic) UIButton *mainActionButton;
@property (readonly, nonatomic) UIButton *secondaryActionButton;
@property (readonly, nonatomic) UIView *stretchableView;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) double longSideMargin;
@property (nonatomic) double topActionButtonPadding;
@property (readonly, nonatomic) double shortSideSize;
@property (weak, nonatomic) id<PUPhotoEditToolbarDelegate> delegate;
@property (retain, nonatomic) PUPhotoEditViewControllerSpec *photoEditSpec;
@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBackgroundStyle:(long long)a0 animated:(BOOL)a1;
- (void)willMoveToWindow:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)_updateBackgroundAnimated:(BOOL)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_addCenterConstraintsWithMetrics:(id)a0 verticalLayout:(BOOL)a1;
- (void)_addLeadingConstraintsWithMetrics:(id)a0 verticalLayout:(BOOL)a1;
- (void)_addTrailingConstraintsWithMetrics:(id)a0 verticalLayout:(BOOL)a1;
- (void)_invalidateAllConstraints;
- (void)_setToolButtons:(id)a0 buttonSpacing:(long long)a1 mainActionButton:(id)a2 secondaryActionButton:(id)a3 stretchableView:(id)a4;
- (void)accessibilityLongPressChanged:(id)a0;
- (void)setToolButtons:(id)a0 buttonSpacing:(long long)a1 mainActionButton:(id)a2 secondaryActionButton:(id)a3;
- (void)setToolButtons:(id)a0 mainActionButton:(id)a1 secondaryActionButton:(id)a2 stretchableView:(id)a3;
- (void)setupWithLayoutOrientation:(long long)a0;
- (double)tabBarHeight;

@end
