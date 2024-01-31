@protocol _SWRemoveParticipantAlertRemoteControllerDelegate;

@interface _SWRemoveParticipantAlertRemoteController : _UIRemoteViewController <CKRemoveParticipantAlertRemoteViewControllerProtocol>

@property (weak, nonatomic) id<_SWRemoveParticipantAlertRemoteControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)dismissAlert;
- (void)_promptToRemoveParticipant:(id)a0 fromHighlight:(id)a1 preferredStyle:(long long)a2;

@end
