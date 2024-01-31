@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PHImageIODecoder : PHImageDecoder {
    NSObject<OS_dispatch_queue> *_pendingRequestQueue;
    NSObject<OS_dispatch_queue> *_activeRequestQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentRequestSemaphore;
}

@property (class, nonatomic) long long maxConcurrentDecodeCount;

+ (id)sharedDecoder;

- (id)init;
- (id)decodeImageFromData:(id)a0 orFileURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)cancelInFlightAsyncDecodeForRequestHandle:(id)a0;
- (id)decodeImageFromData:(id)a0 orFileURL:(id)a1 options:(id)a2 existingRequestHandle:(id)a3 completion:(id /* block */)a4;

@end
