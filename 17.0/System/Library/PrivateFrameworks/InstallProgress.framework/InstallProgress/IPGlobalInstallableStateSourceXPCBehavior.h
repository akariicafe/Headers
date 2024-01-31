@class NSString, NSMutableDictionary, NSXPCConnection, NSHashTable, NSObject;
@protocol IPStateUpdateStreamSource, OS_dispatch_queue;

@interface IPGlobalInstallableStateSourceXPCBehavior : NSObject <IPXPCClientInterface, IPStateAndProgressRegistry, IPStateUpdateStreamSourceDelegate, IPGlobalInstallableStateSourceBehavior> {
    id<IPStateUpdateStreamSource> _stateStreamSource;
    id /* block */ _connectionProvider;
    NSXPCConnection *_currentConnection;
    NSMutableDictionary *_registeredStateSources;
    NSMutableDictionary *_registeredProgressSources;
    NSHashTable *_stateUpdateObservers;
    NSObject<OS_dispatch_queue> *_q;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _registeredForProgress;
    BOOL _registeredForState;
    BOOL _stateStreamSourceResumed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)_installableStateSourcesForStates:(id)a0;
- (id)_queue_asyncProxyWithErrorHandler:(id /* block */)a0;
- (id)_queue_connectedConnection;
- (id)_queue_makeExtantStateSourcesForGlobalSource:(id)a0 error:(id *)a1;
- (id)_queue_makeInstallingStateSourcesForGlobalSource:(id)a0 error:(id *)a1;
- (void)_queue_noteInstallBeganForIdentity:(id)a0;
- (void)_queue_registerAsProgressObserverIfNecessary;
- (void)_queue_resumeStateStreamSourceIfNecessary;
- (void)_queue_sendStateSourceAvailableForIdentity:(id)a0;
- (void)_queue_sendStateSourceUnavailableForIdentity:(id)a0;
- (id)_queue_syncProxyWithErrorHandler:(id /* block */)a0;
- (id)currentProgressForIdentity:(id)a0 error:(id *)a1;
- (id)initWithXPCConnectionProvider:(id /* block */)a0 stateStreamSource:(id)a1 queue:(id)a2;
- (void)installableForIdentity:(id)a0 progressChanged:(id)a1;
- (void)installableForIdentity:(id)a0 progressEndedForReason:(unsigned long long)a1;
- (void)makeExtantStateSourcesForGlobalSource:(id)a0 andEnumerate:(id /* block */)a1;
- (void)makeInstallingStateSourcesForGlobalSource:(id)a0 andEnumerate:(id /* block */)a1;
- (void)registerProgressSource:(id)a0;
- (void)registerStateSource:(id)a0;
- (void)serverActionBarrierForTesting;
- (void)stateUpdateStreamSource:(id)a0 updateMessageReceived:(id)a1;
- (void)unregisterProgressSource:(id)a0;
- (void)unregisterStateSource:(id)a0;

@end
