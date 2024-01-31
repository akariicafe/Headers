@class _TtC12PhotosUICore29PXVideoFormatMetadataProvider;

@interface PXVideoFormatMetadataProviderObjc : NSObject

@property (retain, nonatomic) _TtC12PhotosUICore29PXVideoFormatMetadataProvider *metadataProvider;

- (void).cxx_destruct;
- (id)initWithImageManager:(id)a0;
- (void)cancelActiveRequest;
- (void)requestVideoMetadataForItem:(id)a0 processingQueue:(id)a1 callbackQueue:(id)a2 completion:(id /* block */)a3;

@end
