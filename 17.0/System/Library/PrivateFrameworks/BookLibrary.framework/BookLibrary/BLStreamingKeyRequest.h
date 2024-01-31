@class ICSecureKeyDeliveryRequest, MPMediaItem, AVAssetResourceLoadingRequest, BLStoreItemMetadataRequest;

@interface BLStreamingKeyRequest : ICRequestOperation {
    BLStoreItemMetadataRequest *_metadataRequest;
    ICSecureKeyDeliveryRequest *_secureKeyRequest;
    MPMediaItem *_mediaItem;
    AVAssetResourceLoadingRequest *_loadingRequest;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_performStreamingKeyRequestForHLSAsset:(id)a0;
- (id)initWithMediaItem:(id)a0 loadingRequest:(id)a1;

@end
