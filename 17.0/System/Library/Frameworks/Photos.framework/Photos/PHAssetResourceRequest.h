@class PHAssetResourceRequestOptions, NSString, NSDictionary, PHProgressContainerForRetryableRequest, PHAssetResource, NSProgress, PLProgressFollower;
@protocol PHAssetResourceRequestDelegate;

@interface PHAssetResourceRequest : NSObject <PHAssetResourceRequest> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _cancelled;
    PHProgressContainerForRetryableRequest *_availabilityRequestProgressContainer;
    long long _availabilityPendingCount;
    NSProgress *_fileStreamProgress;
    long long _fileStreamPendingCount;
    NSProgress *_totalProgress;
    PLProgressFollower *_progressFollower;
    unsigned long long _availabilityChangeRetryCount;
}

@property (copy, nonatomic) id /* block */ urlReceivedHandler;
@property (copy, nonatomic) id /* block */ dataHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL loadURLOnly;
@property (nonatomic, getter=isSynchronous) BOOL synchronous;
@property (readonly, nonatomic) PHAssetResource *assetResource;
@property (readonly, nonatomic) PHAssetResourceRequestOptions *options;
@property (readonly, nonatomic) int requestID;
@property (readonly, nonatomic) unsigned long long managerID;
@property (readonly, weak, nonatomic) id<PHAssetResourceRequestDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (copy, nonatomic) NSString *taskIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_globalFileIOQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startRequest;
- (void)cancel;
- (void)_assetsdMakeAvailableRequestRepliedWithSuccess:(BOOL)a0 url:(id)a1 data:(id)a2 info:(id)a3 error:(id)a4;
- (void)_finishAsyncWithFileURL:(id)a0 didBecomeAvailable:(BOOL)a1 error:(id)a2;
- (void)_finishWithFileURL:(id)a0 didBecomeAvailable:(BOOL)a1 error:(id)a2;
- (id)_initialValidationError;
- (id)_loadMediaMetadataFromDatabaseWithPhotoLibrary:(id)a0 type:(id *)a1 error:(id *)a2;
- (void)_setAvailabilityProgress:(id)a0;
- (void)_setupFilestreamProgressIfNeeded;
- (void)_setupTotalProgressIfNeeded;
- (long long)_streamDataAtURL:(id)a0 error:(id *)a1 dataHandler:(id /* block */)a2;
- (void)_updateAssetResourceWithLocallyAvailable:(BOOL)a0 fileURL:(id)a1;
- (id)initWithAssetResource:(id)a0 options:(id)a1 requestID:(int)a2 managerID:(unsigned long long)a3 delegate:(id)a4 urlReceivedHandler:(id /* block */)a5 dataReceivedHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;

@end
