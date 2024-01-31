@class AMSPromise;

@interface AMSUIAssetFetchOperation : NSOperation

@property (nonatomic, getter=isLowLatency) BOOL lowLatency;
@property (retain, nonatomic) AMSPromise *operationPromise;

- (void)main;
- (void).cxx_destruct;
- (void)setQueuePriority:(long long)a0;
- (void)cancel;
- (void)_finishWithImage:(id)a0 error:(id)a1;

@end
