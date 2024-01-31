@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface NURenderTransaction : NSObject {
    long long _nestingLevel;
    NSMutableArray *_requests;
    NSObject<OS_dispatch_group> *_group;
}

@property (readonly) NSArray *pendingRequests;

+ (void)begin;
+ (void)setCurrentTransaction:(id)a0;
+ (void)commit;
+ (id)currentTransaction;
+ (void)_commit:(id)a0;
+ (void)commitAndNotifyOnQueue:(id)a0 withBlock:(id /* block */)a1;
+ (id)assertCurrentTransaction;
+ (id)ensureCurrentTransaction;
+ (void)group:(id /* block */)a0;
+ (void)withCurrentTransaction:(id /* block */)a0;

- (BOOL)begin;
- (id)init;
- (void)submitRequest:(id)a0;
- (BOOL)commit;
- (void)flush;
- (void).cxx_destruct;
- (void)notifyCompletion:(id)a0 block:(id /* block */)a1;
- (void)resetPendingRequests;
- (void)submitPendingRequests;

@end
