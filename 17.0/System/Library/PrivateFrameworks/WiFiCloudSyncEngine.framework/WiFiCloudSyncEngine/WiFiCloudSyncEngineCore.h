@class NSThread, NSObject, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

@interface WiFiCloudSyncEngineCore : NSObject

@property NSUbiquitousKeyValueStore *keyValueStore;
@property void *context;
@property void /* function */ *callback;
@property NSThread *clientThread;
@property NSObject<OS_dispatch_queue> *clientQueue;
@property BOOL iCloudSyncingEnabled;
@property BOOL isKVSEncrypted;

- (void)ubiquitousKeyValueStoreDidChange:(id)a0;
- (void)unSubscribeKVStoreNotfications;
- (void)subscribeKVStoreNotficationsForBundleId:(id)a0;
- (void)dealloc;
- (void)synchronizeKVS;
- (void)readStoreValueForKey:(id)a0;
- (void)enableIcloudSyncing:(BOOL)a0 ForBundleId:(id)a1;
- (void)synchronizeAndCallMergeNetworks;
- (void)pruneKVSStore;
- (void)printCompleteKVStore;
- (void)queryKeychainSyncState;
- (void)relayKeychainSyncState:(id)a0;
- (id)initWithEncryptedKVS:(BOOL)a0;
- (void)relayCloudEvent:(id)a0;
- (void)registerCallback:(void /* function */ *)a0 queue:(id)a1 context:(void *)a2;
- (void)removeFromKVStore:(id)a0;
- (void)addToKVStore:(id)a0 synchronize:(BOOL)a1;
- (id)readCompleteKVStore;
- (void)relayPruneKVSStore:(id)a0;
- (void)relayCloudCleanUpEvent;
- (void)clearKVS;
- (void)registerCallback:(void /* function */ *)a0 context:(void *)a1;
- (void)relayReadStoreValueAction:(id)a0;
- (void)relayMergeNetworks:(id)a0;
- (void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)a0;

@end
