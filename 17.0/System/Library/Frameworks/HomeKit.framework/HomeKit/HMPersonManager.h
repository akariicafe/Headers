@class NSUUID, _HMContext, NSNotificationCenter, NSHashTable, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMPersonManager : NSObject <HMFMessageReceiver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSNotificationCenter *notificationCenter;
@property (copy) id /* block */ fetchClientFactory;
@property (readonly) _HMContext *context;
@property (readonly) NSHashTable *observers;
@property (readonly, copy) NSUUID *UUID;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)unsubscribe;
- (void)subscribe;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)performCloudPullWithCompletion:(id /* block */)a0;
- (void)addOrUpdateFaceCrops:(id)a0 completion:(id /* block */)a1;
- (void)addOrUpdateFaceprints:(id)a0 completion:(id /* block */)a1;
- (void)addOrUpdatePersons:(id)a0 completion:(id /* block */)a1;
- (void)associateFaceCropsWithUUIDs:(id)a0 toPersonWithUUID:(id)a1 completion:(id /* block */)a2;
- (void)associateFaceCropsWithUUIDs:(id)a0 toPersonWithUUID:(id)a1 forSource:(long long)a2 completion:(id /* block */)a3;
- (void)disassociateFaceCropsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllFaceprintsWithCompletion:(id /* block */)a0;
- (void)fetchAllPersonFaceCropsWithCompletion:(id /* block */)a0;
- (void)fetchAllPersonsWithCompletion:(id /* block */)a0;
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(id /* block */)a0;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchFaceCropsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchPersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)handleDaemonReconnectedNotification:(id)a0;
- (void)handleDidChangePersonDataMessage:(id)a0;
- (id)initWithContext:(id)a0 UUID:(id)a1 notificationCenter:(id)a2;
- (void)removeFaceCropsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)removeFaceprintsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)removePersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;

@end
