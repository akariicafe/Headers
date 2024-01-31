@protocol VTUISiriDataSharingOptInViewControllerDelegate;

@interface VTUISiriDataSharingOptInViewController : OBWelcomeController

@property (weak, nonatomic) id<VTUISiriDataSharingOptInViewControllerDelegate> delegate;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithViewStyle:(long long)a0;

@end
