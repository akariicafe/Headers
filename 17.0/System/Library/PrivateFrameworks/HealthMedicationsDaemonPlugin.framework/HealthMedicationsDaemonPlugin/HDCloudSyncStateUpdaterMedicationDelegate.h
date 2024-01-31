@class NSString;

@interface HDCloudSyncStateUpdaterMedicationDelegate : NSObject <HDCloudSyncStateUpdaterDelegate>

@property (class, readonly, nonatomic) struct { int x0; int x1; } supportedSyncVersionRange;

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) struct { int x0; int x1; } supportedSyncVersionRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)fetchCloudState:(id *)a0 codableSyncState:(id)a1 profile:(id)a2 error:(id *)a3;
- (BOOL)fetchLocalState:(id *)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)persistCloudState:(id)a0 profile:(id)a1 error:(id *)a2;
- (long long)shouldUpdateWithMergedState:(id *)a0 cloudState:(id)a1 localState:(id)a2 transaction:(id)a3 error:(id *)a4;
- (BOOL)updateCodableSyncState:(id)a0 withMergeState:(id)a1 profile:(id)a2 error:(id *)a3;

@end
