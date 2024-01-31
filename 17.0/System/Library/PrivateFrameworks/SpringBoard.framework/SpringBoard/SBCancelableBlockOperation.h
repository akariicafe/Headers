@class NSMutableArray;

@interface SBCancelableBlockOperation : NSOperation {
    NSMutableArray *_blocks;
}

- (id)init;
- (void)main;
- (void)addBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
