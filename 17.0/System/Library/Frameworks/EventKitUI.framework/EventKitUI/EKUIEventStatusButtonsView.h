@class NSArray, NSString, NSLayoutConstraint, UIButton;
@protocol EKUIEventStatusButtonsViewDelegate;

@interface EKUIEventStatusButtonsView : UIView <UIPointerInteractionDelegate> {
    NSArray *_buttons;
    double _outsideMargin;
    NSLayoutConstraint *_leadingMarginConstraint;
    NSLayoutConstraint *_trailingMarginConstraint;
    BOOL _forcesSingleButtonToCenter;
    BOOL _inboxStyle;
    BOOL _allowAppliesToAll;
    NSArray *_currentConstraints;
}

@property (weak, nonatomic) id<EKUIEventStatusButtonsViewDelegate> delegate;
@property (nonatomic) long long selectedAction;
@property (retain, nonatomic) NSArray *actions;
@property (readonly, nonatomic) UIButton *leadingButton;
@property (readonly, nonatomic) UIButton *centerButton;
@property (readonly, nonatomic) UIButton *trailingButton;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } buttonsTouchInsets;
@property (nonatomic) long long textSizeMode;
@property (nonatomic) BOOL disableButtonHighlights;
@property (nonatomic) BOOL shouldUseVerticalLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonTitleForAction:(long long)a0 orb:(BOOL)a1;
+ (BOOL)isActionDestructive:(long long)a0;
+ (id)imageForAction:(long long)a0 selected:(BOOL)a1;
+ (id)_appliesToAllTitleForAction:(long long)a0;

- (void)_updateButtonFontsWithSize:(double)a0;
- (id)buttonForAction:(long long)a0;
- (void)findPointerInteractionWithButton:(id)a0 actions:(id /* block */)a1;
- (void)_setupConstraints;
- (BOOL)_shouldCenterButton;
- (id)_horizontalConstraintStringForMiddleButtonsStartingAt:(unsigned long long)a0 endingAt:(unsigned long long)a1 resultingViews:(id)a2;
- (void)_setupButtons;
- (void)_updateButtonFontsWithOverrideSize:(double)a0;
- (void)updateConstraints;
- (id)_fontWithSize:(double)a0 selected:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 actions:(id)a1 delegate:(id)a2;
- (void)_appliesToAllButtonTapped:(id)a0;
- (void)updateFonts;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 actions:(id)a1 delegate:(id)a2 options:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (double)_buttonFontSizeFromDelegate;
- (double)_minimumFontSize;
- (void)_buttonTapped:(id)a0;
- (double)_defaultFontSizeForButtons;
- (id)_newToolbarButton;
- (void)layoutSubviews;
- (long long)_buttonIndexForAction:(long long)a0;
- (void)updateForMiniBarState:(BOOL)a0;
- (void)_updateButtonFonts:(id)a0;
- (double)_updateFontFromDelegate;
- (void)_updateSelectionToButton:(id)a0;
- (long long)_actionForButton:(id)a0;
- (void)_buttonTappedInternal:(id)a0 appliesToAll:(BOOL)a1;

@end
