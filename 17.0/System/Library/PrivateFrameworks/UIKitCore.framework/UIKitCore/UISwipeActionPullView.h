@class UIColor, UIContextualAction, NSString, NSArray, UIView, NSMutableArray, UISwipeActionButton;
@protocol UISwipeActionPullViewDelegate, UISwipeActionVisualStyle;

@interface UISwipeActionPullView : UIView <_UISwipeActionButtonDelegate> {
    UIView *_clippingView;
    NSMutableArray *_buttons;
    NSArray *_actions;
    UISwipeActionButton *_pressedButton;
    BOOL _swipeActionsDidChange;
    BOOL _isTentative;
    double _openThreshold;
    double _confirmationThreshold;
    double _minimumOffset;
    unsigned long long _style;
}

@property (retain, nonatomic) id<UISwipeActionVisualStyle> visualStyle;
@property (nonatomic, getter=_roundedStyleCornerRadius, setter=_setRoundedStyleCornerRadius:) double roundedStyleCornerRadius;
@property (weak, nonatomic) id<UISwipeActionPullViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long cellEdge;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (copy, nonatomic) UIColor *backgroundPullColor;
@property (readonly, nonatomic) UIContextualAction *primarySwipeAction;
@property (readonly, nonatomic) double currentOffset;
@property (readonly, nonatomic) double openThreshold;
@property (readonly, nonatomic) double confirmationThreshold;
@property (readonly, nonatomic) UIColor *primaryActionColor;
@property (readonly, nonatomic) BOOL primaryActionIsDestructive;
@property (readonly, nonatomic) BOOL hasActions;
@property (nonatomic) BOOL buttonsUnderlapSwipedView;
@property (nonatomic) BOOL autosizesButtons;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)freeze;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_pressedButton:(id)a0;
- (void)_rebuildButtons;
- (Class)_buttonClass;
- (double)_directionalMultiplier;
- (double)_interButtonPadding;
- (void)_layoutClippingLayer;
- (double)_paddingToSwipedView;
- (void)_performAction:(id)a0 offset:(double)a1 extraOffset:(double)a2;
- (void)_setLayerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setWidth:(double)a0;
- (void)_setupClippingViewIfNeeded;
- (unsigned long long)_swipeActionCount;
- (void)_tappedButton:(id)a0;
- (double)_totalInterButtonPadding;
- (void)_unpressedButton:(id)a0;
- (void)configureWithSwipeActions:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cellEdge:(unsigned long long)a1 style:(unsigned long long)a2;
- (void)moveToOffset:(double)a0 extraOffset:(double)a1 animator:(id)a2 usingSpringWithStiffness:(double)a3 initialVelocity:(double)a4;
- (void)resetView;
- (id)sourceViewForAction:(id)a0;
- (void)swipeActionButton:(id)a0 willDisplayContextMenuWithAnimator:(id)a1;

@end
