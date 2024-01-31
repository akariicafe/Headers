@class UIViewController, NSLayoutConstraint, UIVisualEffectView, UILabel, UIView, _UIGrabber;
@protocol PXFloatingCardViewControllerDelegate;

@interface PXFloatingCardViewController : UIViewController

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIVisualEffectView *backgroundVisualEffectView;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) _UIGrabber *grabber;
@property (weak, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *grabberFooterView;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } grabAreaBounds;
@property (weak, nonatomic) id<PXFloatingCardViewControllerDelegate> delegate;

- (void)removeFromParentViewController;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContentViewController:(id)a0;
- (void)_dismissTapped;
- (id)_systemFontWithTextStyle:(long long)a0 weight:(double)a1;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;

@end
