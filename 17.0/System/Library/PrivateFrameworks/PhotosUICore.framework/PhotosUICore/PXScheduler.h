@class NSMutableArray;

@interface PXScheduler : NSObject {
    NSMutableArray *_pendingBlocks;
    BOOL _hasPendingPerformInDefaultRunLoopMode;
    BOOL _isPerformingPendingBlocks;
}

+ (id)sharedScheduler;

- (id)init;
- (void)_performPendingBlocksIfNeeded;
- (void)_performBlock:(id /* block */)a0;
- (void)dispatchOnMainThreadWhenNotScrollingAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)dispatchInMainTransactionAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)scrollViewDidScroll;
- (void).cxx_destruct;
- (void)dispatchOnMainThreadWhenNotScrolling:(id /* block */)a0;
- (void)scrollViewWillLayoutSubviews;
- (void)dispatchInMainTransaction:(id /* block */)a0;
- (void)_enteredDefaultRunLoopMode;
- (void)_performPendingBlocks;

@end
