@class UIColor, _UIButtonBarButton, UIView, UIBarButtonItem;

@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying> {
    _UIButtonBarButton *_button;
    UIBarButtonItem *_barButtonItem;
}

@property (readonly, nonatomic) _UIButtonBarButton *button;
@property (readonly, nonatomic) UIView *backIndicatorView;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) BOOL backButtonConstraintsActive;
@property (nonatomic) BOOL backButtonMaskEnabled;
@property (copy, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIView *alignmentViewForStaticNavBarButtonLeading;
@property (readonly, nonatomic) UIView *alignmentViewForStaticNavBarButtonTrailing;

+ (id)visualProviderForIdiom:(long long)a0;
+ (void)registerPlatformVisualProviderClass:(Class)a0 forIdiom:(long long)a1;

- (Class)buttonBarButtonClass;
- (id)pointerShapeInContainer:(id)a0;
- (struct CGSize { double x0; double x1; })buttonIntrinsicContentSize:(id)a0;
- (void)updateButton:(id)a0 forFocusedState:(BOOL)a1;
- (void)updateButton:(id)a0 toUseButtonShapes:(BOOL)a1;
- (void)updateButton:(id)a0 forSelectedState:(BOOL)a1;
- (BOOL)shouldLift;
- (void)reload;
- (BOOL)buttonHighlitedState:(id)a0 forRequestedState:(BOOL)a1;
- (void)updateButton:(id)a0 forEnabledState:(BOOL)a1;
- (BOOL)supportsBackButtons;
- (BOOL)buttonEnabledState:(id)a0 forRequestedState:(BOOL)a1;
- (BOOL)buttonHeldState:(id)a0 forRequestedState:(BOOL)a1;
- (struct CGSize { double x0; double x1; })buttonImageViewSize:(id)a0;
- (id)matchingPointerShapeForView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContainer:(id)a2;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (id)buttonSpringLoadedInteractionEffect;
- (struct CGPoint { double x0; double x1; })pointerPreviewCenter;
- (void)resetButtonHasHighlighted;
- (void)buttonWillMoveToWindow:(id)a0;
- (void)updateButton:(id)a0 appearance:(id)a1;
- (BOOL)buttonSelectionState:(id)a0 forRequestedState:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })menuAnchorPoint;
- (id)buttonContextMenuInteractionConfiguration;
- (id)buttonContextMenuTargetedPreview;
- (void)pointerWillEnter:(id)a0;
- (void)updateButton:(id)a0 forHighlightedState:(BOOL)a1;
- (void)updateMenu;
- (Class)buttonControlClass;
- (id)buttonSpringLoadedInteractionBehavior;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)a0;
- (void)buttonWillMoveToSuperview:(id)a0;
- (void)buttonLayoutSubviews:(id)a0 baseImplementation:(id /* block */)a1;
- (void)updateButton:(id)a0 forHeldState:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })buttonAlignmentRectInsets:(id)a0;
- (BOOL)canUpdateMenuInPlace;
- (BOOL)shouldSuppressPointerSpecularFilter;
- (unsigned long long)hash;
- (id)pointerPreviewParameters;
- (id)symbolImageView;
- (void)updateImage;
- (id)focusEffect;
- (void)pointerWillExit:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
