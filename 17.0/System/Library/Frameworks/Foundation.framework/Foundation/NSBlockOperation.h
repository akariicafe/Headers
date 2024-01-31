@class NSArray, NSMutableArray;

@interface NSBlockOperation : NSOperation {
    NSMutableArray *_executionBlocks;
    id /* block */ _block;
}

@property (readonly, copy) NSArray *executionBlocks;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (id)initWithBlock:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void)main;
- (void)addExecutionBlock:(id /* block */)a0;

@end
