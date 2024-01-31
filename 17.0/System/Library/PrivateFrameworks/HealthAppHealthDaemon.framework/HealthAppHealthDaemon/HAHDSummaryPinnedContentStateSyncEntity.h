@class HDStateSyncEntitySchema;

@interface HAHDSummaryPinnedContentStateSyncEntity : NSObject <HDCloudSyncStateEntity>

@property (class, nonatomic, readonly) HDStateSyncEntitySchema *stateEntitySchema;

+ (void)syncDidFinishWithResult:(long long)a0 stateStore:(id)a1 profile:(id)a2;
+ (BOOL)updateDataWithStateStorage:(id)a0 transaction:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;

@end
