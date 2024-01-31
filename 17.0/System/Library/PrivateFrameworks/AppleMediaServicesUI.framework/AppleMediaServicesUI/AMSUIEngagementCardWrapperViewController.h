@class UINavigationController, UIViewController, NSString;

@interface AMSUIEngagementCardWrapperViewController : AMSUICommonViewController <PRXCardContentProviding>

@property (retain, nonatomic) UINavigationController *childNavigationController;
@property (nonatomic) long long presentationStyle;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long cardStyle;
@property (readonly, nonatomic) BOOL allowsPullToDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
