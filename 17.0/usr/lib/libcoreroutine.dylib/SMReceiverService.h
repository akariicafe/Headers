@class NSHashTable, NSString, RTPlatform, SMMessagingService, RTDefaultsManager, RTInvocationDispatcher, NSMutableArray, SMSafetyCacheStore;

@interface SMReceiverService : RTService <SMReceiverCacheManagerDelegateProtocol, SMReceiverProtocol>

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTPlatform *platform;
@property (readonly, nonatomic) SMMessagingService *messagingService;
@property (readonly, nonatomic) SMSafetyCacheStore *safetyCacheStore;
@property (nonatomic) unsigned long long safetyCacheStoreAvailability;
@property (nonatomic) BOOL attemptedToLoadFromDisk;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableArray *cacheManagerArray;
@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_setup;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)invocationError;
- (void)onSafetyCacheStoreNotification:(id)a0;
- (void)_fetchAllReceiverSessionStatusWithCompletion:(id /* block */)a0;
- (void)_fetchReceiverSafetyCacheForSessionID:(id)a0 completion:(id /* block */)a1;
- (void)_fetchReceiverSessionStatusForSessionID:(id)a0 completion:(id /* block */)a1;
- (void)_onMessageReceived:(id)a0;
- (void)_onSafetyCacheStoreNotification:(id)a0;
- (void)_setupCacheManagers:(id /* block */)a0;
- (void)_setupOnceDiskAvailable;
- (void)_userRequestedCacheDownloadForSessionID:(id)a0 completion:(id /* block */)a1;
- (void)cacheManagerDidCompleteCleanupForSessionId:(id)a0;
- (id)createReceiverCacheManagerForSessionID:(id)a0 initiatorHandle:(id)a1;
- (void)fetchAllReceiverSessionStatusWithCompletion:(id /* block */)a0;
- (void)fetchReceiverSafetyCacheForSessionID:(id)a0 completion:(id /* block */)a1;
- (void)fetchReceiverSessionStatusForSessionID:(id)a0 completion:(id /* block */)a1;
- (id)getReceiverCacheManagerForSessionID:(id)a0;
- (id)initWithDefaultsManager:(id)a0 platform:(id)a1 messagingService:(id)a2 safetyCacheStore:(id)a3;
- (void)notifyObserversOfReceiverSafetyCacheChangeWithSessionID:(id)a0 phoneCache:(id)a1 watchCache:(id)a2;
- (void)notifyObserversOfReceiverSessionStatusChangeWithSessionID:(id)a0 sessionStatus:(id)a1;
- (void)onMessageReceived:(id)a0;
- (void)receivedCacheUpdatedMessage:(id)a0 fromHandle:(id)a1 fromMe:(BOOL)a2;
- (void)receivedEstimatedEndTimeUpdateMessage:(id)a0 fromHandle:(id)a1 fromMe:(BOOL)a2;
- (void)receivedKeyReleaseInfoMessage:(id)a0 fromHandle:(id)a1 fromMe:(BOOL)a2;
- (void)receivedKeyReleaseMessage:(id)a0 fromHandle:(id)a1 fromMe:(BOOL)a2;
- (void)receivedSessionEndMessage:(id)a0 fromHandle:(id)a1 fromMe:(BOOL)a2;
- (void)receivedSessionStartInfoMessage:(id)a0 fromHandle:(id)a1 fromMe:(BOOL)a2;
- (void)receivedSessionStartMessage:(id)a0 fromHandle:(id)a1 fromMe:(BOOL)a2;
- (void)removeReceiverCacheManagerForSessionID:(id)a0;
- (void)safetyCacheChanged:(id)a0 phoneCache:(id)a1 watchCache:(id)a2;
- (void)sessionStatusChanged:(id)a0 status:(id)a1;
- (void)userRequestedCacheDownloadForSessionID:(id)a0 completion:(id /* block */)a1;

@end
