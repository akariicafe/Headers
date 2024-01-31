@class NSMutableArray;

@interface SNTestChain : NSObject

@property (readonly, nonatomic) NSMutableArray *linkBlocks;

- (void)runWithCompletion:(id /* block */)a0;
- (id)init;
- (void)addLink:(id /* block */)a0;
- (void).cxx_destruct;
- (void)popAndRunWithCompletion:(id /* block */)a0 testFailure:(id)a1;

@end
