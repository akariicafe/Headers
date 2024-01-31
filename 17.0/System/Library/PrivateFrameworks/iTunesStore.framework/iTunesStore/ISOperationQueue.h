@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

@property BOOL adjustsMaxConcurrentOperationCount;

+ (id)mainQueue;

- (id)operations;
- (void)addOperation:(id)a0;
- (void)cancelAllOperations;
- (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;
- (void)setSuspended:(BOOL)a0;
- (id)init;
- (void)dealloc;
- (void)setName:(id)a0;
- (long long)operationCount;
- (long long)maxConcurrentOperationCount;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)name;
- (void)setMaxConcurrentOperationCount:(long long)a0;

@end
