@protocol SBSecureAppViewControllerDelegate;

@interface SBSecureAppViewController : SBDashBoardHostedAppViewController

@property (weak, nonatomic) id<SBSecureAppViewControllerDelegate> delegate;

- (void)_updateDisplayLayoutElementForActivation:(id)a0;
- (BOOL)handleEvent:(id)a0;

@end
