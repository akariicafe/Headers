@class NSArray, UIVisualEffectView, UIBlurEffect, CKActionMenuController;

@interface CKActionMenuView : UIView

@property (copy, nonatomic) NSArray *actionMenuItems;
@property (nonatomic) unsigned long long defaultActionIndex;
@property (copy, nonatomic) NSArray *presentationActionMenuItems;
@property (nonatomic) unsigned long long presentationDefaultActionIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentationTargetBounds;
@property (nonatomic) struct CGPoint { double x; double y; } presentationTargetPosition;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIBlurEffect *blurEffect;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic, getter=isTouchInside) BOOL touchInside;
@property (weak, nonatomic) CKActionMenuController *actionMenuController;

+ (void)collapseAnimation:(id /* block */)a0 completion:(id /* block */)a1;

- (void)actionMenuGestureRecognized:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)actionMenuItemAtPoint:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void)configureForPresentationAtPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dismissActionMenuViewAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithActionMenuItems:(id)a0 defaultActionIndex:(unsigned long long)a1 blurEffectStyle:(long long)a2;
- (void)presentActionMenuViewFromPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)setActionMenuItems:(id)a0 defaultActionIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (void)setCollapsed:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
