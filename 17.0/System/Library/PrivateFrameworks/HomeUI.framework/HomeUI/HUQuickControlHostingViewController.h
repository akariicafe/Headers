@class NSString, UIView, HUQuickControlViewProfile, UIViewController;
@protocol HUQuickControlInteractiveView;

@interface HUQuickControlHostingViewController : UIViewController <HUQuickControlInteractiveViewController>

@property (readonly, nonatomic) HUQuickControlViewProfile *profile;
@property (readonly, nonatomic) UIViewController *contraption;
@property (readonly, nonatomic) UIView<HUQuickControlInteractiveView> *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0 profile:(id)a1;

@end
