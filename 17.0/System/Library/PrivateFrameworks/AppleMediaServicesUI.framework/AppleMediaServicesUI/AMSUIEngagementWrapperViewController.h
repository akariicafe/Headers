@class NSString, UIViewController;

@interface AMSUIEngagementWrapperViewController : AMSUICommonViewController <UIAdaptivePresentationControllerDelegate>

@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithViewController:(id)a0;
- (void)_setup;
- (void)viewWillLayoutSubviews;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_setupContentSize;

@end
