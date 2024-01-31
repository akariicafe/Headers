@class NSString, NSOperationQueue;

@interface _CNOperationQueueScheduler : NSObject <CNScheduler> {
    NSOperationQueue *_queue;
    BOOL _isQualityOfServiceSpecified;
}

@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationWithQualityOfService:(unsigned long long)a0 block:(id /* block */)a1;

- (id /* block */)blockWithCurrentQualityOfServiceForBlock:(id /* block */)a0 ifAllowedForRequestedQualityOfService:(unsigned long long)a1;
- (id)init;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)performCancelableBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)initWithMaxConcurrentOperationCount:(long long)a0;
- (void).cxx_destruct;
- (void)_enqueueBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)initWithQualityOfService:(unsigned long long)a0;
- (void)performBlock:(id /* block */)a0;
- (id)initWithMaxConcurrentOperationCount:(long long)a0 qualityOfService:(unsigned long long)a1;

@end
