@class AVAssetResourceLoadingRequestor, NSString, NSURLResponse, AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingRequestInternal, NSURLRequest, AVAssetResourceLoadingDataRequest;

@interface AVAssetResourceLoadingRequest : NSObject <AVAssetResourceLoaderRequest> {
    AVAssetResourceLoadingRequestInternal *_loadingRequest;
}

@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
@property (readonly, nonatomic) AVAssetResourceLoadingDataRequest *dataRequest;
@property (copy, nonatomic) NSURLResponse *response;
@property (copy, nonatomic) NSURLRequest *redirect;
@property (readonly, nonatomic) AVAssetResourceLoadingRequestor *requestor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;

- (BOOL)finished;
- (struct OpaqueFigCustomURLHandler { } *)_contentKeySessionCustomURLHandler;
- (id)init;
- (void)dealloc;
- (unsigned long long)_requestID;
- (void)_performCancellationByClient;
- (struct OpaqueFigCustomURLHandler { } *)_customURLHandler;
- (struct OpaqueFigCustomURLLoader { } *)_customURLLoader;
- (BOOL)_shouldInformDelegateOfFigCancellation;
- (struct __CFDictionary { } *)_requestInfo;
- (id)_weakReference;
- (id)_resourceLoader;
- (void)finishLoading;
- (void)finishLoadingWithError:(id)a0;
- (void)_appendToCachedData:(id)a0;
- (void)_cacheContentInformation:(id)a0;
- (BOOL)_canSetOrUseCachedContentInformation;
- (BOOL)_contentKeySessionIsAttached;
- (void)_ensureResponseInfoSentToCustomURLHandler;
- (id)_getAndClearCachedData;
- (BOOL)_isRequestForContentKey;
- (void)_sendDataToCustomURLHandler:(id)a0;
- (void)_sendFinishLoadingToCustomURLHandler;
- (void)_sendFinishLoadingToCustomURLHandlerWithError:(id)a0;
- (void)_sendResponseInfoToCustomURLHandler;
- (void)_setContentInformationRequest:(id)a0;
- (void)_setDataRequest:(id)a0;
- (BOOL)_tryToMarkAsCancelled;
- (void)finishLoadingWithResponse:(id)a0 data:(id)a1 redirect:(id)a2;
- (void)forwardRequestToContentKeySession;
- (void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)a0 contentIdentifier:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithResourceLoader:(id)a0 URL:(id)a1 httpRequestHeaders:(id)a2 requestOffset:(id)a3 requestLength:(id)a4 allowedContentTypes:(id)a5 figCryptor:(struct OpaqueFigCPECryptor { } *)a6 cryptorKeyRequestID:(unsigned long long)a7;
- (id)initWithResourceLoader:(id)a0 requestInfo:(struct __CFDictionary { } *)a1 requestID:(unsigned long long)a2;
- (id)keyRequestDataUsingCryptorForApp:(id)a0 contentIdentifier:(id)a1 options:(id)a2 performAsync:(BOOL)a3 error:(id *)a4;
- (id)persistentContentKeyFromKeyVendorResponse:(id)a0 options:(id)a1 error:(id *)a2;
- (id)serializableRepresentation;
- (id)streamingContentKeyRequestDataForApp:(id)a0 contentIdentifier:(id)a1 options:(id)a2 error:(id *)a3;

@end
