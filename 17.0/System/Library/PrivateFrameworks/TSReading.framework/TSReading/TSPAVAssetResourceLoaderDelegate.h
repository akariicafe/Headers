@class NSString, TSPFileDataStorage, NSObject;
@protocol OS_dispatch_queue, TSUReadChannel;

@interface TSPAVAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    TSPFileDataStorage *_dataStorage;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<TSUReadChannel> _readChannel;
    NSObject<OS_dispatch_queue> *_concurrentRequestQueue;
    NSString *_contentTypeUTI;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)delegateQueue;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void).cxx_destruct;
- (void)_provideData:(id)a0 untilRequestCancelledForResourceLoadingRequest:(id)a1;
- (id)initWithTSPFileDataStorage:(id)a0 contentTypeUTI:(id)a1;

@end
