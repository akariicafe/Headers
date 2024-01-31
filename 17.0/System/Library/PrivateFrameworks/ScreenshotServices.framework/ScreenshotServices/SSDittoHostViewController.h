@protocol SSDittoHostViewControllerDelegate;

@interface SSDittoHostViewController : _UIRemoteViewController <SSRemoteViewControllerServiceToHostInterface>

@property (weak, nonatomic) id<SSDittoHostViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (BOOL)__shouldHostRemoteTextEffectsWindow;
+ (id)serviceViewControllerInterface;

- (void)dismiss;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)_serviceProxy;
- (BOOL)becomeFirstResponder;
- (void)dismissScreenshotExperience;
- (void)screenshotExperienceHasDismissed;

@end
