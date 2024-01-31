@protocol _SBUIPopoverExtensionHostDelegate;

@interface SBUIPopoverExtensionHostViewController : _UIRemoteViewController <_SBUIPopoverExtensionHostInterface>

@property (weak, nonatomic) id<_SBUIPopoverExtensionHostDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (BOOL)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (BOOL)__shouldRemoteViewControllerFenceOperations;
- (void)_extensionRequestsDismiss;

@end
