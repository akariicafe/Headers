@interface VCPTransforms : NSObject {
    int _minSize;
    int _transformedImageWidth;
    int _transformedImageHeight;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)cropAndScale:(struct __CVBuffer { } *)a0 regionCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initImageTransform:(int)a0 transformedImageWidth:(int)a1 transformedImageHeight:(int)a2;

@end
