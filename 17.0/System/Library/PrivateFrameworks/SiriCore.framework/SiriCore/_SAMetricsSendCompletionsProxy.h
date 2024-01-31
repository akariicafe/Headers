@class NSMutableArray;

@interface _SAMetricsSendCompletionsProxy : NSObject {
    NSMutableArray *_blocks;
}

- (id)init;
- (void)dealloc;
- (void)addBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dispatchBlocksWithResult:(long long)a0 error:(id)a1;

@end
