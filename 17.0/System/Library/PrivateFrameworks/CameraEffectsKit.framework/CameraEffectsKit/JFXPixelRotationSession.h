@class JFXPixelBufferPool;

@interface JFXPixelRotationSession : NSObject {
    struct OpaqueVTPixelRotationSession { } *_imageRotationSession;
}

@property (retain, nonatomic) JFXPixelBufferPool *pixelBufferPool;
@property (readonly, nonatomic) int rotationCardinalAngle;
@property (readonly, nonatomic) BOOL mirror;

+ (void)JFX_rotateFrameSet:(inout id *)a0 toOrientation:(long long)a1 pixelRotationSession:(inout id *)a2;
+ (void)rotateFrameSet:(inout id *)a0 by:(int)a1 mirror:(BOOL)a2 pixelRotationSession:(inout id *)a3;
+ (void)rotateFrameSetToDeviceOrientation:(inout id *)a0 pixelRotationSession:(inout id *)a1;
+ (void)rotateFrameSetToUIOrientation:(inout id *)a0 pixelRotationSession:(inout id *)a1;
+ (const struct __CFString { } *)toVTRotation:(int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithRotation:(int)a0 mirror:(BOOL)a1;
- (void)JT_releaseImageRotationSession;
- (struct __CVBuffer { } *)createRotatedPixelBuffer:(struct __CVBuffer { } *)a0 using:(struct __CVBuffer { } *)a1;
- (id)createRotatedFrameSet:(id)a0;
- (struct __CVBuffer { } *)createRotatedPixelBuffer:(struct __CVBuffer { } *)a0;

@end
