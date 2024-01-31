@class BWPixelBufferPool;

@interface BWScalingSession : NSObject {
    struct OpaqueVTPixelRotationSession { } *_rotationSession;
    int _rotationSessionDegrees;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    BWPixelBufferPool *_intermediateBufferPool;
    struct { int width; int height; } _intermediateBufferPoolDimensions;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_ensurePixelTransferSession;
- (id)_newIntermediatePoolWithDimensions:(struct { int x0; int x1; })a0 pixelFormat:(unsigned int)a1;
- (int)scalePixelBuffer:(struct __CVBuffer { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exifOrientation:(int)a2 intoPixelBuffer:(struct __CVBuffer { } *)a3 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (int)scalePixelBuffer:(struct __CVBuffer { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intoPixelBuffer:(struct __CVBuffer { } *)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
