@class _UIBarButtonItemData, NSString, _UIButtonBarButtonVisualProvider, NSLayoutConstraint, NSDate;

@interface _UIButtonBarButton : UIControl <UIPointerInteractionDelegate, UISpringLoadedInteractionSupporting> {
    NSLayoutConstraint *_widthMinimizingConstraint;
    NSLayoutConstraint *_heightMinimizingConstraint;
    BOOL _autolayoutIsCleanForBoundsChange;
    NSDate *_appearanceDate;
}

@property (readonly, copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider;
@property (readonly, nonatomic, getter=isBackButton) BOOL backButton;
@property (readonly, nonatomic, getter=isBreadcrumb) BOOL breadcrumb;
@property (nonatomic) BOOL backButtonMaskEnabled;
@property (retain, nonatomic) _UIBarButtonItemData *appearanceData;
@property (readonly, nonatomic) NSLayoutConstraint *widthMinimizingConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *heightMinimizingConstraint;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _buttonBarHitRect;
@property (nonatomic) long long preferredMenuElementOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isSpringLoaded) BOOL springLoaded;

- (void)willMoveToSuperview:(id)a0;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (BOOL)_accessibilityShouldActivateOnHUDLift;
- (id)init;
- (BOOL)pointMostlyInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)willMoveToWindow:(id)a0;
- (void)_is_setNeedsLayout;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)dealloc;
- (void)_accessibilitySettingsChanged:(id)a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)focusEffect;
- (void)addSymbolEffect:(id)a0 options:(id)a1 animated:(BOOL)a2;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)_applyDeferredSymbolEffects;
- (void)configureBackButtonFromBarItem:(id)a0 withAppearanceDelegate:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)removeSymbolEffectOfType:(id)a0 options:(id)a1 animated:(BOOL)a2;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)removeAllSymbolEffectsWithOptions:(id)a0 animated:(BOOL)a1;
- (void)pasteTouchDown;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)configureBreadcrumbBackButtonFromBarItem:(id)a0 withAppearanceDelegate:(id)a1;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)applyContentTransition:(id)a0 options:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_setTouchHasHighlighted:(BOOL)a0;
- (id)initWithVisualProvider:(id)a0;
- (void)_configureFromBarItem:(id)a0 appearanceDelegate:(id)a1 isBackButton:(BOOL)a2 useBreadcrumbStyle:(BOOL)a3;
- (void)layoutSubviews;
- (void)configureFromBarItem:(id)a0 withAppearanceDelegate:(id)a1;
- (struct CGSize { double x0; double x1; })imageViewSize;
- (id)_targetedPreviewForInteraction:(id)a0;
- (void)_setHasActiveMenuPresentation:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)updatePresentedMenuFrom:(id)a0;
- (void)setNeedsAppearanceUpdate;
- (id)_preferredSender;

@end
