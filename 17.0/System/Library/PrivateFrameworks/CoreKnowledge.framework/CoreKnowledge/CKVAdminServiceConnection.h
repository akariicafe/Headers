@class CKVTaskHandler, CKVIndexManager, CKVSettings, NSObject;
@protocol OS_dispatch_queue, KVDonateServiceProvider;

@interface CKVAdminServiceConnection : NSObject <CKVAdminService> {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    CKVTaskHandler *_taskHandler;
    CKVIndexManager *_indexManager;
    NSObject<KVDonateServiceProvider> *_serviceProvider;
    CKVSettings *_settings;
}

- (void).cxx_destruct;
- (oneway void)handleTask:(unsigned short)a0 reason:(unsigned short)a1 completion:(id /* block */)a2;
- (void)_donateProfile:(id)a0 settings:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isCustomerInstall:(id /* block */)a0;
- (oneway void)beginEvaluation:(id)a0 clean:(BOOL)a1 completion:(id /* block */)a2;
- (oneway void)captureVocabularySnapshot:(id)a0 completion:(id /* block */)a1;
- (oneway void)deleteAllItemsWithUserId:(id)a0 completion:(id /* block */)a1;
- (oneway void)deleteAllItemsWithUserId:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (oneway void)endEvaluation:(id /* block */)a0;
- (oneway void)fetchLocalItemsBatchWithSize:(unsigned long long)a0 offset:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (oneway void)findProfileSnapshotsNearDate:(id)a0 completion:(id /* block */)a1;
- (oneway void)finishEventSimulation:(id /* block */)a0;
- (id)initWithServiceQueue:(id)a0 taskHandler:(id)a1 indexManager:(id)a2 serviceProvider:(id)a3 settings:(id)a4;
- (oneway void)rebuildSpeechProfileForUserId:(id)a0 completion:(id /* block */)a1;
- (oneway void)startEventSimulation:(BOOL)a0 completion:(id /* block */)a1;
- (oneway void)triggerMaintenance:(id /* block */)a0;
- (oneway void)triggerMigration:(BOOL)a0 completeAfterTrigger:(BOOL)a1 completion:(id /* block */)a2;

@end
