@class NSObject;
@protocol OS_dispatch_queue, OS_voucher, OS_dispatch_object;

@interface GCOperation : GCFuture {
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSObject<OS_voucher> *_creationVoucher;
    unsigned int _qos;
    int _relativePriority;
    struct ContinuationList { struct ObserverList { struct Continuation *stqh_first; struct Continuation **stqh_last; } _continuations; } _continuations;
    NSObject<OS_dispatch_queue> *_privateQueue;
    NSObject<OS_dispatch_object> *_syncBoostQueueOrAsyncGroup;
    unsigned long long _creatorFrame;
}

@property (copy, nonatomic) id /* block */ asyncBlock;
@property (copy, nonatomic) id /* block */ syncBlock;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)initWithError:(id)a0;
- (id)initWithResult:(id)a0;
- (id).cxx_construct;
- (id)activate;
- (void)setLabel:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)_checkFinished:(BOOL)a0;
- (unsigned long long)_creatorFrame;
- (void)_observeFinishOnQueue:(id)a0 withOptions:(unsigned int)a1 qosClass:(unsigned int)a2 relativePriority:(int)a3 block:(id /* block */)a4;
- (BOOL)_setState:(long long)a0 result:(id)a1 error:(id)a2;
- (id)_thenSynchronouslyRequiringState:(long long)a0 onQueue:(id)a1 withOptions:(unsigned int)a2 qosClass:(unsigned int)a3 relativePriority:(int)a4 label:(id)a5 block:(id /* block */)a6;
- (id)initCancelled;
- (id)initOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (id)initOnQueue:(id)a0 withOptions:(unsigned int)a1;
- (id)initOnQueue:(id)a0 withOptions:(unsigned int)a1 block:(id /* block */)a2;
- (id)startAsynchronously;

@end
