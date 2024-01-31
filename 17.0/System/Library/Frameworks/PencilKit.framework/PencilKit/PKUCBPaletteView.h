@class UIStackView, PKPaletteReturnKeyButton, NSArray, NSString, NSLayoutConstraint, UIView, PKPaletteButtonGroupView;

@interface PKUCBPaletteView : PKPaletteView <PKPaletteButtonIntrinsicContentSizeObserver>

@property (retain, nonatomic) UIView *_contentView;
@property (retain, nonatomic) NSLayoutConstraint *_contentViewTopAnchor;
@property (retain, nonatomic) NSLayoutConstraint *_contentViewBottomAnchor;
@property (retain, nonatomic) NSLayoutConstraint *_contentViewLeadingAnchor;
@property (retain, nonatomic) NSLayoutConstraint *_contentViewTrailingAnchor;
@property (retain, nonatomic) UIStackView *_buttonStackView;
@property (retain, nonatomic) NSLayoutConstraint *_buttonStackViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *_buttonStackViewBottomConstraint;
@property (retain, nonatomic) PKPaletteButtonGroupView *_leadingButtonGroupView;
@property (retain, nonatomic) PKPaletteButtonGroupView *_centeredButtonGroupView;
@property (retain, nonatomic) PKPaletteButtonGroupView *_trailingButtonGroupView;
@property (retain, nonatomic) PKPaletteButtonGroupView *_returnKeyButtonGroupView;
@property (retain, nonatomic) PKPaletteReturnKeyButton *_returnKeyButton;
@property (nonatomic) BOOL alwaysIncludeReturnKeyAndInputAssistantItems;
@property (nonatomic, getter=isUpdatingUI) BOOL updatingUI;
@property (copy, nonatomic) NSArray *nonCompactContentViewConstraints;
@property (copy, nonatomic) NSArray *compactContentViewConstraints;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, getter=isReturnKeyEnabled) BOOL returnKeyEnabled;
@property (copy, nonatomic) id /* block */ returnKeyHandler;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (copy, nonatomic) NSArray *leadingBarButtons;
@property (copy, nonatomic) NSArray *centeredBarButtons;
@property (copy, nonatomic) NSArray *trailingBarButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeBackgroundView;

- (double)shadowRadius;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)shadowOpacity;
- (void)updateConstraints;
- (void).cxx_destruct;
- (double)_contentMargin;
- (void)_updateUI;
- (void)_flashLanguageIndicatorIfNeeded;
- (unsigned long long)paletteViewType;
- (double)_buttonGroupSpacing;
- (id)_centeredBarButtons;
- (void)_handleReturnKey;
- (double)_narrowLength;
- (void)_performUpdateUIBlock:(id /* block */)a0;
- (BOOL)_shouldHideLeadingButtonGroupView;
- (BOOL)_shouldHideReturnKeyButtonGroupView;
- (BOOL)_shouldHideTrailingButtonGroupView;
- (BOOL)_shouldShowCenterButtonGroupView;
- (BOOL)_shouldShowInputAssistantItems;
- (BOOL)_shouldShowReturnKey;
- (void)_updateCenteredButtonGroup;
- (void)_updateLeadingButtonGroup;
- (void)_updateReturnKeyButton;
- (void)_updateSubviewLayoutAxis;
- (void)_updateTrailingButtonGroup;
- (id)borderColorForTraitCollection:(id)a0;
- (double)borderWidthForTraitCollection:(id)a0;
- (void)buttonDidChangeIntrinsicContentSize:(id)a0;
- (double)compactPaletteHeight;
- (double)dampingRatioForThrowingFromPosition:(long long)a0 toPosition:(long long)a1 withVelocity:(struct CGPoint { double x0; double x1; })a2;
- (void)didChangePaletteScaleFactor;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)a0;
- (BOOL)isPalettePresentingPopover;
- (struct CGSize { double x0; double x1; })paletteSizeForEdge:(unsigned long long)a0;
- (double)responseForThrowingFromPosition:(long long)a0 toPosition:(long long)a1 withVelocity:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)shouldAdjustShadowRadiusForMinimized;
- (BOOL)shouldExpandFromCorner;
- (BOOL)shouldStartUpMinimized;
- (BOOL)toolPreviewMatchesExpandedTool;
- (void)willStartAppearanceAnimation:(BOOL)a0;

@end
