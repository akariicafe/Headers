@class NSString, PRUIModalRemoteViewController, PRSPosterConfiguration;
@protocol AMUIPosterEditingSwitcherViewControllerDelegate;

@interface AMUIPosterEditingSwitcherViewController : UIViewController <PRUIModalRemoteViewControllerDelegate> {
    PRUIModalRemoteViewController *_remoteViewController;
    PRSPosterConfiguration *_activeConfiguration;
}

@property (weak, nonatomic) id<AMUIPosterEditingSwitcherViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)handleDismiss;
- (id)initWithActiveConfiguration:(id)a0;
- (void)modalRemoteViewController:(id)a0 didDismissWithResponse:(id)a1;

@end
