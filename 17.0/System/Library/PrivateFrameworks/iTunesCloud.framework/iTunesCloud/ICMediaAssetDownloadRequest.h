@class NSData, NSString, NSURL, ICURLSession, ICURLResponse, NSMutableDictionary, ICURLRequest, ICStoreMediaResponseItem, ICContentKeySession, NSError, NSNumber, ICStoreRequestContext;

@interface ICMediaAssetDownloadRequest : ICRequestOperation <ICContentKeySessionDelegateProtocol> {
    ICStoreRequestContext *_requestContext;
    ICStoreMediaResponseItem *_storeMediaResponseItem;
    NSMutableDictionary *_additionalHTTPHeaderFields;
    ICURLSession *_downloadSession;
    ICURLRequest *_request;
    ICURLResponse *_response;
    ICContentKeySession *_contentKeySession;
    NSError *_keyDeliveryError;
}

@property (copy, nonatomic) NSURL *destinationURL;
@property (nonatomic) BOOL allowsCellularData;
@property (nonatomic) BOOL allowsProxyCellularData;
@property (nonatomic) BOOL allowsCellularFallback;
@property (nonatomic) BOOL allowDownloadOnConstrainedNetworks;
@property (nonatomic, getter=isDiscretionary) BOOL discretionary;
@property (nonatomic) BOOL requiresPower;
@property (nonatomic) BOOL prefersHLSAsset;
@property (copy, nonatomic) NSData *resumeData;
@property (copy, nonatomic) NSNumber *minimumBitrate;
@property (copy, nonatomic) NSNumber *maximumSampleRate;
@property (nonatomic) BOOL prefersLossless;
@property (nonatomic) BOOL prefersMultichannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (id)_sessionIdentifier;
- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)finishWithError:(id)a0;
- (id)_createAVAssetDownloadOptionsDictionary;
- (id)_mediaKindFromResponseItemMetadata:(id)a0;
- (void)contentKeySession:(id)a0 didFinishProcessingKey:(id)a1 withResponse:(id)a2 error:(id)a3;
- (id)initWithRequestContext:(id)a0 storeMediaResponseItem:(id)a1 resumeData:(id)a2;

@end
