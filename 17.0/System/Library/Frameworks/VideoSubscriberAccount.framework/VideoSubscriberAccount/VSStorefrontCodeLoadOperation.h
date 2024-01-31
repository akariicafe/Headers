@class NSOperationQueue, VSOptional;

@interface VSStorefrontCodeLoadOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;

- (id)init;
- (void)executionDidBegin;
- (void).cxx_destruct;

@end
