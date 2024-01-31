@class UIViewController, UIView;

@interface ICPillOrnamentViewController : UIViewController

@property (retain, nonatomic) UIViewController *rootViewController;
@property (nonatomic) struct CGPoint { double x; double y; } contentAnchorPoint;
@property (nonatomic) struct CGPoint { double x; double y; } sceneAnchorPoint;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (retain, nonatomic) UIView *contentView;
@property (readonly, nonatomic) BOOL isShowing;

- (void)show;
- (void)loadView;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)hide;
- (id)initWithRootViewController:(id)a0 contentAnchorPoint:(struct CGPoint { double x0; double x1; })a1 sceneAnchorPoint:(struct CGPoint { double x0; double x1; })a2 offset:(struct CGPoint { double x0; double x1; })a3;

@end
