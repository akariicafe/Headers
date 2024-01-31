@class NSString, UIViewController, _UIRemoteViewController;

@interface ServiceCardContainerViewController : UIViewController <_UIRemoteViewControllerContaining>

@property (retain, nonatomic) UIViewController *childViewController;
@property (retain, nonatomic) _UIRemoteViewController *remoteViewController;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;

@end
