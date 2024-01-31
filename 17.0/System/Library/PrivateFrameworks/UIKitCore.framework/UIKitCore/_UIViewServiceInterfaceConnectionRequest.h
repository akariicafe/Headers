@class _UIRemoteViewService, NSString, _UIAsyncInvocation, BKSProcessAssertion, NSError, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _UIViewServiceInterfaceConnectionRequest : NSObject {
    id /* block */ _connectionHandler;
    NSString *_serviceBundleIdentifier;
    _UIRemoteViewService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCancelled;
    NSError *_cancellationError;
    _UIAsyncInvocation *_cancellationInvocation;
    int _sessionRequestNotifyToken;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceSessionConnection;
    BOOL _serviceSessionConnectionResumed;
}

+ (void)initialize;
+ (id)_connectToViewServiceWithBundleIdentifier:(id)a0 service:(id)a1 connectionHandler:(id /* block */)a2;
+ (id)connectToViewService:(id)a0 connectionHandler:(id /* block */)a1;
+ (id)connectToViewServiceWithBundleIdentifier:(id)a0 connectionHandler:(id /* block */)a1;

- (void)dealloc;
- (void)_objc_initiateDealloc;
- (void)_cancelUnconditionallyThen:(id /* block */)a0;
- (void)_cancelWithError:(id)a0;
- (void)_createAndEstablishConnection;
- (void)_createPlugInProcessAssertion;
- (void)_createProcessAssertion;
- (void)_createProcessAssertionForPID:(int)a0 orBundleIdentifier:(id)a1 acquiredHandler:(id /* block */)a2;
- (void)_didConnectToService;
- (void)_establishConnection;
- (void)_launchService;

@end
