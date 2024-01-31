@class NSObject;
@protocol OS_dispatch_queue;

@interface PLDeferredProcessingServiceHandler : NSObject {
    NSObject<OS_dispatch_queue> *_prewarmQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancelAllPrewarmingWithCompletion:(id /* block */)a0;
- (void)prewarmWithCapturePhotoSettings:(id)a0 completionHandler:(id /* block */)a1;

@end
