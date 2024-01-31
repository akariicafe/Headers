@class CADDatabaseInitializationOptions, NSString, NSXPCConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, EKDaemonConnectionDelegate, CADInterface;

@interface EKDaemonConnection : NSObject <CADClientInterface, CADXPCProxyHelperDelegate, EKAuthStatusChecker> {
    NSObject<OS_dispatch_queue> *_connectionLock;
    id<CADInterface> _remoteOperationProxy;
    id<CADInterface> _syncRemoteOperationProxy;
    NSObject<OS_dispatch_queue> *_replyHandlerLock;
    NSMutableDictionary *_cancellableOperations;
    unsigned int _nextCancellationToken;
    BOOL _registeredForStartNote;
    BOOL _wasAbortedDueToExcessiveConnctions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalStateLock;
    BOOL _accessDetermined;
    long long _eventAuthorization;
    long long _remindersAuthorization;
    int _databaseRestoreGeneration;
    BOOL _databaseRestoreGenerationHasEverChangedSignificantly;
}

@property (class, readonly, nonatomic) unsigned long long maxNumberOfOpenConnections;

@property (nonatomic) BOOL hasEverConnected;
@property (readonly, retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, retain, nonatomic) id<CADInterface> CADOperationProxy;
@property (readonly, retain, nonatomic) id<CADInterface> CADOperationProxySync;
@property (weak) id<EKDaemonConnectionDelegate> delegate;
@property (retain, nonatomic) CADDatabaseInitializationOptions *initializationOptions;
@property (readonly, nonatomic) int databaseRestoreGeneration;
@property (readonly, nonatomic) long long eventAuthorization;
@property (readonly, nonatomic) long long remindersAuthorization;
@property (readonly, nonatomic) BOOL shouldValidateObjectIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int eventAccessLevel;
@property (readonly, nonatomic) BOOL hasAccessToReminders;

+ (id)anyAvailableDaemonConnection;
+ (void)addLivingDaemonConnection:(id)a0;
+ (BOOL)_tryRegisterNewConnection;
+ (void)_unregisterConnection;

- (void)disconnect;
- (id)init;
- (void)dealloc;
- (void)_eventAuthorization:(long long *)a0 remindersAuthorization:(long long *)a1;
- (id)operationForToken:(unsigned int)a0 respondingToSelector:(SEL)a1 finished:(BOOL)a2;
- (void)CADClientReceiveDatabaseIntegrityErrors:(id)a0;
- (void)_createConnectionAndOperationProxyIfNeeded;
- (unsigned int)addCancellableRemoteOperation:(id)a0;
- (void)CADClientReceiveOccurrenceCacheSearchResults:(id)a0 forSearchToken:(unsigned int)a1 finished:(BOOL)a2;
- (void)CADClientReceiveDiagnosticsCollectionResults:(id)a0 forToken:(unsigned int)a1 finished:(BOOL)a2;
- (void)clearCachedAuthStatus;
- (void)setDatabaseRestoreGeneration:(int)a0;
- (void).cxx_destruct;
- (BOOL)_connectToServer;
- (void)databaseRestoreGenerationChangedByThisClient:(int)a0;
- (void)cancelRemoteOperation:(unsigned int)a0;
- (void)_daemonRestarted;
- (void)_finishAllRepliesOnServerDeath;
- (void)removeCancellableRemoteOperation:(unsigned int)a0;

@end
