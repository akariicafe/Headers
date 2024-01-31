@class NSString, UIViewController, ICViewControllerManager;

@interface ICWindow : UIWindow

@property (readonly, nonatomic) ICViewControllerManager *ic_viewControllerManager;
@property (retain, nonatomic) NSString *windowIdentifier;
@property (retain, nonatomic) NSString *toolPickerIdentifier;
@property (retain, nonatomic) ICViewControllerManager *viewControllerManager;
@property (readonly, nonatomic) UIViewController *ic_topmostPresentedViewController;

- (void)setRootViewController:(id)a0;
- (id)initWithWindowScene:(id)a0;
- (void).cxx_destruct;
- (BOOL)accessibilityElementsHidden;

@end
