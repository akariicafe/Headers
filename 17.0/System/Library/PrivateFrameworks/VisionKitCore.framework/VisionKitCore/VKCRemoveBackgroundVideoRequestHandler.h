@class NSObject, MADService;
@protocol OS_dispatch_queue;

@interface VKCRemoveBackgroundVideoRequestHandler : NSObject {
    MADService *_service;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) BOOL isSupported;
@property (class, readonly, nonatomic) double maxResolution;
@property (class, readonly, nonatomic) double maxLength;
@property (class, readonly, nonatomic) double minAspectRatio;
@property (class, readonly, nonatomic) double maxAspectRatio;

- (id)init;
- (BOOL)isValidRequest:(id)a0 error:(id *)a1;
- (void)cancelRequest:(id)a0;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)performRequest:(id)a0 previewResultAvailable:(id /* block */)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;

@end
