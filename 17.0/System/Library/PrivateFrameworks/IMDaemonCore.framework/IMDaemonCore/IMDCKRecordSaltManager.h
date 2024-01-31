@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKRecordSaltManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain) NSString *cachedSalt;

+ (id)sharedInstance;

- (id)init;
- (void)_scheduleOperation:(id)a0;
- (void)clearLocalSyncState;
- (void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(id /* block */)a0;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id /* block */)a0 forceFetch:(BOOL)a1;
- (void).cxx_destruct;
- (id)_container;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id /* block */)a0;
- (id)_CKUtilitiesSharedInstance;
- (void)deleteDeDupeRecordZone;

@end
