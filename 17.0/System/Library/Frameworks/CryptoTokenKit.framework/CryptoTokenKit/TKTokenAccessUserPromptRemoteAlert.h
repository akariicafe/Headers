@class TKTokenAccessRequest, NSString, SBSRemoteAlertHandle, NSObject;
@protocol OS_dispatch_semaphore;

@interface TKTokenAccessUserPromptRemoteAlert : NSObject <NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, TKUIServerProtocol, TKTokenAccessUserPrompt> {
    TKTokenAccessRequest *_accessRequest;
    SBSRemoteAlertHandle *_remoteAlertHandle;
    NSObject<OS_dispatch_semaphore> *_remoteAlertSemaphore;
    long long _grantedAccess;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (long long)preflightStatus;
- (long long)promptUserToEvaluateRequest:(id)a0 error:(id *)a1;
- (void)registerTokenAccessRequestCorrelationID:(id)a0 granted:(BOOL)a1 reply:(id /* block */)a2;

@end
