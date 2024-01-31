@interface MapsSync.MapsSyncStoreController : NSObject {
    void /* unknown type, empty encoding */ _subscriptionLock;
    void /* unknown type, empty encoding */ _store;
    void /* unknown type, empty encoding */ _analyzerSubscriptions;
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ _callbackQueue;
    void /* unknown type, empty encoding */ _barrierQueue;
}

+ (id)initForAPIv1WithNotifyForChanges:(id)a0 delegate:(id)a1 error:(id *)a2;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)contextDidSaveWithNotification:(id)a0;
- (void)handleRemoteChange;
- (id)initWithConfig:(id)a0 notifyForChanges:(id)a1 callbackQueue:(id)a2 delegate:(id)a3;
- (id)initWithNotifyForChanges:(id)a0 delegate:(id)a1;
- (id)initWithPrimarySession:(id)a0 cacheSession:(id)a1 notifyForChanges:(id)a2 callbackQueue:(id)a3 delegate:(id)a4 error:(id *)a5;

@end
