@class NSObject, DESDeviceIdentifierStore, DESRecordStorePolicyManager;
@protocol OS_dispatch_queue;

@interface DESRecordStoreManager : NSObject {
    DESRecordStorePolicyManager *_policyManager;
    NSObject<OS_dispatch_queue> *_queue;
    DESDeviceIdentifierStore *_identifierStore;
}

- (id)init;
- (void)deleteAllSavedRecordsForBundleId:(id)a0 completion:(id /* block */)a1;
- (void)fetchSavedRecordInfoForRecordType:(id)a0 completion:(id /* block */)a1;
- (void)deleteSavedRecordForBundleId:(id)a0 identfier:(id)a1 completion:(id /* block */)a2;
- (void)fetchSavedRecordInfoForBundleId:(id)a0 completion:(id /* block */)a1;
- (id)recordDirURLsForBundleId:(id)a0;
- (void)fetchCoreDuetEventsForBundleId:(id)a0 completion:(id /* block */)a1;
- (void)fetchNativeRecordDataForRecordUUID:(id)a0 bundleId:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)fetchRecordSetSynchronouslyForBundleId:(id)a0 error:(id *)a1;
- (void)fetchRecordSetForBundleId:(id)a0 completion:(id /* block */)a1;
- (void)saveRecordForBundleId:(id)a0 data:(id)a1 recordInfo:(id)a2 completion:(id /* block */)a3;
- (void)saveCoreDuetEvent:(id)a0 completion:(id /* block */)a1;
- (id)saveRecordToDirPath:(id)a0 data:(id)a1 recordInfo:(id)a2 error:(id *)a3;

@end
