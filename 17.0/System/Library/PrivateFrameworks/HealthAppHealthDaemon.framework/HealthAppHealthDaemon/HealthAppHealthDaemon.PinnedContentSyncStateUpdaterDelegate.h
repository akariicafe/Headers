@class NSString;

@interface HealthAppHealthDaemon.PinnedContentSyncStateUpdaterDelegate : NSObject <HDCloudSyncStateUpdaterDelegate> {
    void /* unknown type, empty encoding */ pinnedContentDomain;
    void /* unknown type, empty encoding */ maxDataSizeInBytes;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) struct { int x0; int x1; } supportedSyncVersionRange;

- (id)init;
- (long long)fetchCloudState:(id *)a0 codableSyncState:(id)a1 profile:(id)a2 error:(id *)a3;
- (BOOL)fetchLocalState:(id *)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)persistCloudState:(id)a0 profile:(id)a1 error:(id *)a2;
- (long long)shouldUpdateWithMergedState:(id *)a0 cloudState:(id)a1 localState:(id)a2 transaction:(id)a3 error:(id *)a4;
- (BOOL)updateCodableSyncState:(id)a0 withMergeState:(id)a1 profile:(id)a2 error:(id *)a3;

@end
