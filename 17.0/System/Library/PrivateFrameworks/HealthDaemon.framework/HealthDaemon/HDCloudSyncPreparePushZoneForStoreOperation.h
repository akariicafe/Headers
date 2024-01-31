@class HDCloudSyncTarget, HDCloudSyncStore;

@interface HDCloudSyncPreparePushZoneForStoreOperation : HDCloudSyncOperation {
    HDCloudSyncStore *_store;
}

@property (readonly, nonatomic) HDCloudSyncTarget *pushTarget;

+ (id)operationTagDependencies;
+ (BOOL)shouldLogAtOperationStart;

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 store:(id)a2;

@end
