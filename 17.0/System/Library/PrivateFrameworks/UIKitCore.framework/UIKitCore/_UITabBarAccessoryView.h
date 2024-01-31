@class UIView;

@interface _UITabBarAccessoryView : UIView

@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;

- (void)commonInit;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)shouldUpdateFocusInContext:(id)a0;

@end
