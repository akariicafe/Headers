@interface PhotosUICore.PXVideoFormatMetadataProvider : NSObject {
    void /* unknown type, empty encoding */ imageManager;
    void /* unknown type, empty encoding */ activeRequestID;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithImageManager:(id)a0;
- (void)cancelActiveRequest;
- (void)requestVideoMetadataFor:(id)a0 processingQueue:(id)a1 callbackQueue:(id)a2 completion:(id /* block */)a3;

@end
