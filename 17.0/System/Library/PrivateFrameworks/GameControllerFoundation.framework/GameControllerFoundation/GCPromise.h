@class GCFuture;

@interface GCPromise : NSObject {
    GCFuture *_future;
}

@property (readonly, getter=isCancelled) BOOL cancelled;

- (id)init;
- (void)dealloc;
- (id)redactedDescription;
- (id)future;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)cancel;
- (void)failWithError:(id)a0;
- (void)succeedWithResult:(id)a0;

@end
