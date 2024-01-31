@class NSString;

@interface WK_RTCCVPixelBuffer : NSObject <RTCVideoFrameBuffer> {
    int _width;
    int _height;
    int _bufferWidth;
    int _bufferHeight;
}

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) int cropX;
@property (readonly, nonatomic) int cropY;
@property (readonly, nonatomic) int cropWidth;
@property (readonly, nonatomic) int cropHeight;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedPixelFormats;

- (void)close;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (int)bufferSizeForCroppingAndScalingToWidth:(int)a0 height:(int)a1;
- (void)cropAndScaleARGBTo:(struct __CVBuffer { } *)a0;
- (void)cropAndScaleNV12To:(struct __CVBuffer { } *)a0 withTempBuffer:(char *)a1;
- (BOOL)cropAndScaleTo:(struct __CVBuffer { } *)a0 withTempBuffer:(char *)a1;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 adaptedWidth:(int)a1 adaptedHeight:(int)a2 cropWidth:(int)a3 cropHeight:(int)a4 cropX:(int)a5 cropY:(int)a6;
- (BOOL)requiresCropping;
- (BOOL)requiresScalingToWidth:(int)a0 height:(int)a1;
- (id)toI420;

@end
