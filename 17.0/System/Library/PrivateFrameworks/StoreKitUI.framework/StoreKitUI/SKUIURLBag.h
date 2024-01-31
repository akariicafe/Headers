@class ISOperationQueue, ISLoadURLBagOperation, ISURLBag, NSMutableArray;

@interface SKUIURLBag : SSURLBag {
    ISURLBag *_bag;
    NSMutableArray *_completionBlocks;
    BOOL _forceInvalidationForNextLoad;
    ISLoadURLBagOperation *_operation;
}

@property (class, readonly) ISOperationQueue *bagQueue;

+ (id)URLBagForContext:(id)a0;

- (id)storeFrontIdentifier;
- (void)loadWithCompletionBlock:(id /* block */)a0;
- (void)invalidate;
- (void)getTrustForURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)loadValueForKey:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (id)existingBagDictionary;
- (void)_enqueueOperationWithContext:(id)a0 completionBlock:(id /* block */)a1;
- (void)_finishOperationWithURLBag:(id)a0 error:(id)a1;

@end
