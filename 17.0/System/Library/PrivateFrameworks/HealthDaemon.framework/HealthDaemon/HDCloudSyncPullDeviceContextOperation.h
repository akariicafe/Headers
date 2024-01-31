@class CKContainer;

@interface HDCloudSyncPullDeviceContextOperation : HDCloudSyncSynchronousOperation {
    CKContainer *_container;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 container:(id)a1;
- (BOOL)performWithError:(id *)a0;

@end
