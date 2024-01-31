@class NSMutableArray, CUTResult;

@interface _CUTUnsafePromise : CUTUnsafePromise

@property (nonatomic) BOOL done;
@property (retain, nonatomic) CUTResult *result;
@property (retain, nonatomic) NSMutableArray *resultBlocks;

- (id)init;
- (void)_fulfillWithResult:(id)a0;
- (id)initWithResult:(id)a0;
- (void)registerResultBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
