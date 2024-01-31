@class DACActivityList, NSString, NSXPCConnection, NSMutableSet, NSMutableDictionary, NSObject, DACDeviceRole;
@protocol OS_dispatch_queue, DACLifecycleManagerDelegate;

@interface DACLifecycleManager : NSObject <DACLifecycleClientInterface> {
    BOOL _shouldAttemptReconnect;
    BOOL _connected;
    BOOL _subscriptionActive;
    int _resetNotifyToken;
    id<DACLifecycleManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    DACDeviceRole *_role;
    DACActivityList *_activityList;
    NSXPCConnection *_currentConnection;
    NSMutableSet *_registeredActivities;
    NSMutableDictionary *_assertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)unregisterActivity:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)registerActivity:(id)a0;
- (void)activatedAssertionForActivity:(id)a0 withChangeMarker:(id)a1;
- (void)activityListChanged:(id)a0;
- (void)enumerateLifecycleInfo:(id /* block */)a0;
- (void)lifecycleStateOfActivity:(id)a0 result:(id /* block */)a1;
- (id)requestActivationOfActivity:(id)a0 requester:(id)a1;
- (void)requestDeactivationOfActivity:(id)a0 requester:(id)a1;
- (void)roleChanged:(id)a0;

@end
