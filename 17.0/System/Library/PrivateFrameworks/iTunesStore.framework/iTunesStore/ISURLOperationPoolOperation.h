@class NSMutableArray, ISURLOperation;

@interface ISURLOperationPoolOperation : ISOperation {
    long long _cancelCount;
    BOOL _forwardImmediately;
    NSMutableArray *_operations;
}

@property (readonly, nonatomic) ISURLOperation *mainOperation;

- (void)addOperation:(id)a0;
- (void)run;
- (void)dealloc;
- (BOOL)containsOperation:(id)a0;
- (void)cancelOperation:(id)a0;
- (void)_forwardResponseFromOperation:(id)a0 toOperation:(id)a1;

@end
