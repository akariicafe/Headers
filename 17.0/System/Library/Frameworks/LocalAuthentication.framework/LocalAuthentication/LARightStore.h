@class NSObject;
@protocol OS_dispatch_queue, LAKeyStore;

@interface LARightStore : NSObject {
    id<LAKeyStore> _keyStore;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _instanceID;
}

@property (class, readonly) LARightStore *sharedStore;

- (id)init;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)removeAllRightsWithCompletion:(id /* block */)a0;
- (void)removeRight:(id)a0 completion:(id /* block */)a1;
- (void)removeRightForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)rightForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)saveRight:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)saveRight:(id)a0 identifier:(id)a1 secret:(id)a2 completion:(id /* block */)a3;

@end
