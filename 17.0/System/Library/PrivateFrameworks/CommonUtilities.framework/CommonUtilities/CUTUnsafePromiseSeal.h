@class CUTUnsafePromise;

@interface CUTUnsafePromiseSeal : NSObject

@property (retain, nonatomic) CUTUnsafePromise *promise;

- (id)init;
- (void)fulfillWithValue:(id)a0;
- (void).cxx_destruct;
- (void)failWithError:(id)a0;

@end
