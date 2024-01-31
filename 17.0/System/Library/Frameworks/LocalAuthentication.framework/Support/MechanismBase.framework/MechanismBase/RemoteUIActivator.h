@class NSString, SBSRemoteAlertHandle, NSObject;
@protocol OS_dispatch_queue, RemoteUIActivatorDelegate, LADaemonXPC;

@interface RemoteUIActivator : NSObject <SBSRemoteAlertHandleObserver, RemoteUIActivating> {
    BOOL _activationSuspended;
}

@property (class, retain, nonatomic) id<LADaemonXPC> daemon;

@property (weak, nonatomic) SBSRemoteAlertHandle *activatingHandle;
@property (weak, nonatomic) SBSRemoteAlertHandle *activeHandle;
@property (nonatomic) BOOL remoteAlertWasInvalidated;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activationQueue;
@property (copy, nonatomic) id /* block */ onActivationTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RemoteUIActivatorDelegate> delegate;

- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (BOOL)invalidated;
- (id)init;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)_activateRemoteAlertHandle:(id)a0 activationContext:(id)a1 params:(id)a2;
- (void)_dispatchRemoteAlertHandle:(id)a0 activationContext:(id)a1 params:(id)a2;
- (BOOL)_isActivationSuspended;
- (void)_postNotificationsAndActivateRemoteAlertHandle:(id)a0 activationContext:(id)a1 params:(id)a2;
- (void)_resumeActivationQueue;
- (id)_sbHandleWithDefinition:(id)a0 configurationContext:(id)a1;
- (void)_suspendActivationQueue;
- (BOOL)activateUIWithParams:(id)a0;

@end
