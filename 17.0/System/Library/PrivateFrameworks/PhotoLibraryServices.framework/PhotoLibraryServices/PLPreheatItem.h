@class NSString, PLAssetsdCloudClient, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PLPreheatItem : NSObject {
    NSObject<OS_dispatch_queue> *_CPLPrefetchingIsolationQueue;
    NSString *_CPLPrefetchingDoneToken;
    int _CPLNotifyRegistrationToken;
    BOOL _CPLPrefetchingCancelled;
    _Atomic int _requestCount;
    PLAssetsdCloudClient *_cloudClient;
}

@property (readonly, nonatomic) unsigned short format;
@property (nonatomic) unsigned short bestFormat;
@property (readonly, nonatomic) long long imageType;
@property (readonly, nonatomic) struct CGSize { double width; double height; } optimalSourcePixelSize;
@property (readonly, copy, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) BOOL CPLPrefetching;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *CPLPrefetchingWaitGroup;
@property (retain) NSString *virtualCPLTaskIdentifier;
@property BOOL didCompleteCPLPrefetchingWithSuccessOrError;
@property BOOL CPLPrefetchingWasCancelled;
@property (nonatomic) BOOL cachingAllowed;

- (BOOL)isCancelled;
- (long long)decrementRequestCount;
- (id)description;
- (void).cxx_destruct;
- (long long)incrementRequestCount;
- (BOOL)addImageHandler:(id /* block */)a0;
- (id)cachedImage:(BOOL *)a0;
- (id)cachedImageIfAvailable:(BOOL *)a0;
- (void)cancelPreheatRequestWithCompletionHandler:(id /* block */)a0;
- (id)initForCPLPrefetchingWithAssetUUID:(id)a0 format:(unsigned short)a1 assetsdClient:(id)a2;
- (BOOL)isRetained;
- (void)startPreheatRequestWithCompletionHandler:(id /* block */)a0;

@end
