@interface MSMailDefaultService : MSService

@property (nonatomic) BOOL shouldLaunchMobileMail;

- (id)init;
- (id)_createServiceOnQueue:(id)a0;
- (id)_handleMessageSendFailure:(id)a0 message:(id)a1 messageIndex:(long long)a2 context:(inout id *)a3;
- (BOOL)_launchMobileMailSuspendedError:(id *)a0;

@end
