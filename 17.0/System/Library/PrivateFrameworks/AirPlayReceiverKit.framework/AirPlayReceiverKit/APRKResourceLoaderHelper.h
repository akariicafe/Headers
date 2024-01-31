@class NSString, NSMutableDictionary, NSDictionary, NSObject;
@protocol OS_dispatch_queue, APRKResourceLoaderHelperDelegate;

@interface APRKResourceLoaderHelper : NSObject <AVAssetResourceLoaderDelegate> {
    NSMutableDictionary *_activeResourceLoadingRequests;
    NSObject<OS_dispatch_queue> *_resourceLoaderQueue;
    NSDictionary *_headersDictionary;
}

@property (weak, nonatomic) id<APRKResourceLoaderHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void).cxx_destruct;
- (void)resourceLoader:(id)a0 didCancelAuthenticationChallenge:(id)a1;
- (void)resourceLoader:(id)a0 didCancelLoadingRequest:(id)a1;
- (BOOL)resourceLoader:(id)a0 shouldWaitForResponseToAuthenticationChallenge:(id)a1;
- (void)forgetAllActiveResourceLoadingRequests;
- (void)processUnhandledURLResponseWithDictionary:(id)a0 error:(id *)a1;
- (void)registerAVURLAsset:(id)a0;
- (void)unregisterAVURLAsset:(id)a0;

@end
