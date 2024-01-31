@class NSXPCListener, NSString, NSDictionary, NSData, NSXPCConnection, NSObject, NSMutableArray;
@protocol UMSideEffectsProviding;

@interface UMXPCServer : NSObject <NSXPCListenerDelegate, UMXPCClient, UMUserSwitchManagement, UMUserSwitchManagement_Private> {
    BOOL _currentlyBroadcastingWillSwitchToUser;
    BOOL _didRegisterStakeholder;
    BOOL _didBroadcastWillSwitchToUser;
    BOOL _didSendTasks;
    BOOL _didBroadcastUploadContent;
    BOOL _didRegisterPersonaCalbackStakeholder;
    unsigned int _interruptionRetryCount;
    NSObject<UMSideEffectsProviding> *_se;
    id _stakeholder;
    unsigned long long _stakeholderType;
    NSString *_machServiceName;
    unsigned long long _unregistrationStatus;
    NSString *_unregistrationReason;
    NSDictionary *_personaSpec;
    NSData *_passcodeData;
    NSData *_contextData;
    NSDictionary *_preferencesDict;
    NSDictionary *_personaProfileDict;
    NSDictionary *_provisionDict;
    id /* block */ _provisionCompletionHandler;
    id /* block */ _registrationCompletionHandler;
    id /* block */ _switchCompletionHandler;
    id /* block */ _suspendQuotasCompletionHandler;
    id /* block */ _directSwitchCompletionHandler;
    id /* block */ _logoutToLoginSessionCompletionHandler;
    id /* block */ _loginUICheckinSessionCompletionHandler;
    id /* block */ _uploadContentCompletionHandler;
    id /* block */ _willSwitchCompletionHandler;
    NSMutableArray *_switchBlockingTasks;
    NSMutableArray *_syncTasks;
    id /* block */ _bubblePopHandler;
    unsigned long long _willSwitchToUserAddedTaskCount;
    NSXPCConnection *_xpcConnection;
    NSXPCListener *_xpcListener;
    id _personaStakeholder;
    id /* block */ _personaRegistrationCompletionHandler;
    id _personaUpdateCallbackStakeholder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resumeQuotas;
- (id)init;
- (void)registerUserSyncStakeholder:(id)a0 withMachServiceName:(id)a1;
- (void)readyToSwitchToLoginSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)switchToLoginUserWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)switchToLoginUserWithCompletionHandler:(id /* block */)a0;
- (void)readyToSwitchToUser:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerUserSwitchStakeHolder:(id)a0 completionHandler:(id /* block */)a1;
- (void)directSwitchToUser:(id)a0 passcodeData:(id)a1 context:(id)a2 preferences:(id)a3 completionHandler:(id /* block */)a4;
- (void)terminateSyncWithCompletionHandler:(id /* block */)a0;
- (void)switchToUser:(id)a0 passcodeData:(id)a1 context:(id)a2 preferences:(id)a3 completionHandler:(id /* block */)a4;
- (void)registerUserSwitchStakeHolder:(id)a0;
- (void)deviceLoginSessionStateDidUpdate;
- (void)logoutToLoginSessionWithCompletionHandler:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)userSwitchTaskListDidUpdate;
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(id /* block */)a0;
- (void)switchToUser:(id)a0 passcodeData:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (void)personaListDidUpdateCompletionHandler:(id /* block */)a0;
- (void)suspendQuotasWithCompletionHandler:(id /* block */)a0;
- (void)uploadContentWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)loginUICheckInWithCompletionHandler:(id /* block */)a0;
- (void)bubbleDidPop;
- (void)resumeSync;
- (void)userInteractionIsEnabled;
- (void)unregisterStakeHolder:(id)a0 status:(unsigned long long)a1 reason:(id)a2;
- (void)willSwitchToUser:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerCriticalUserSwitchStakeHolder:(id)a0;

@end
