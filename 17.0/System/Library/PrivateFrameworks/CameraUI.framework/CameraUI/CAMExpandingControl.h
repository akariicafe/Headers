@class UIView, UILongPressGestureRecognizer, NSArray, NSString, NSValue, _CAMExpandingControlButton, NSMutableArray, CAMExpandingControlMenuItem;
@protocol CAMExpandingControlDelegate;

@interface CAMExpandingControl : UIControl <UIGestureRecognizerDelegate, CAMControlStatusBarControl>

@property (retain, nonatomic, setter=_setTitleView:) _CAMExpandingControlButton *_titleView;
@property (retain, nonatomic, setter=_setTitleBackground:) UIView *_expandedTitleBackground;
@property (retain, nonatomic, setter=_setSelectedMenuItem:) CAMExpandingControlMenuItem *_selectedMenuItem;
@property (readonly, nonatomic) NSMutableArray *_menuButtons;
@property (readonly, nonatomic) BOOL _needsUpdateMenuButtons;
@property (retain, nonatomic) UIView *_expandedBackground;
@property (readonly, nonatomic) UILongPressGestureRecognizer *_longPress;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } expansionInsets;
@property (copy, nonatomic) NSArray *menu;
@property (copy, nonatomic) NSValue *selectedState;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (weak, nonatomic) id<CAMExpandingControlDelegate> delegate;
@property (nonatomic) long long titleStyle;
@property (nonatomic) unsigned long long backgroundMaterial;
@property (nonatomic) BOOL showsContentShadows;
@property (nonatomic) long long expansionAnimation;
@property (nonatomic, getter=isLongPressEnabled) BOOL longPressEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long orientation;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void)_handleLongPress:(id)a0;
- (void)selectedByAccessibilityHUDManager:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)sendAction:(SEL)a0 to:(id)a1 forEvent:(id)a2;
- (void)_animateExpandedWithAnimations:(id /* block */)a0;
- (id)_buttonForHUDManager:(id)a0;
- (id)_createBackgroundWithColor:(id)a0;
- (id)_createMenuButton;
- (void)_handleMenuButtonReleased:(id)a0;
- (id)_hudItemForButton:(id)a0;
- (void)_setNeedsUpdateMenuButtonsAnimated:(BOOL)a0;
- (void)_updateExpandedBackgroundsAnimated:(BOOL)a0;
- (void)_updateMenuButtonsAnimated:(BOOL)a0;
- (void)_updateMenuButtonsIfNeededAnimated:(BOOL)a0;
- (void)_updateSelectedMenuItemAnimated:(BOOL)a0;
- (void)_updateTitleViewAnimated:(BOOL)a0;
- (void)setSelectedState:(id)a0 animated:(BOOL)a1;
- (BOOL)supportsOrientations;

@end
