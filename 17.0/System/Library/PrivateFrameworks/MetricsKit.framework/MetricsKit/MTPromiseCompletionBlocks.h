@class NSMutableArray;

@interface MTPromiseCompletionBlocks : NSObject {
    NSMutableArray *_completionBlocks;
    BOOL _shouldCallImmediately;
}

- (void)addErrorBlock:(id /* block */)a0;
- (id)init;
- (void)callErrorBlock:(id /* block */)a0 withPromiseResult:(id)a1;
- (void)addCompletionBlock:(id /* block */)a0;
- (void)callSuccessBlock:(id /* block */)a0 withPromiseResult:(id)a1;
- (void)addSuccessBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)callCompletionBlock:(id /* block */)a0 withPromiseResult:(id)a1;
- (void)flushCompletionBlocksWithPromiseResult:(id)a0;

@end
