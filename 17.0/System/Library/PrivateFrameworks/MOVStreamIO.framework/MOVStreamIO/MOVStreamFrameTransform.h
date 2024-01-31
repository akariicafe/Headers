@class MIOPixelBufferPool;

@interface MOVStreamFrameTransform : NSObject {
    MIOPixelBufferPool *_pool;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    struct OpaqueVTPixelRotationSession { } *_rotationSession;
    long long _rotation;
}

- (void)dealloc;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)transform:(struct __CVBuffer { } *)a0;
- (id)initWithRotation:(long long)a0 flip:(long long)a1;

@end
