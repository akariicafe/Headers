@class HDCloudSyncManager;

@interface HDCloudSyncManagerStatusTask : HDCloudSyncManagerTask {
    id /* block */ _completion;
    HDCloudSyncManager *_manager;
}

- (void)main;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0 completion:(id /* block */)a1;

@end
