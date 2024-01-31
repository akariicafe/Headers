@protocol MTLTexture, MTLCommandBuffer;

@interface CIImageProcessorOutput : CIImageProcessorInOut <CIImageProcessorOutput> {
    id<MTLCommandBuffer> _cmdBuffer;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } region;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) void *baseAddress;
@property (readonly, nonatomic) struct __IOSurface { } *surface;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) id<MTLTexture> metalTexture;
@property (readonly, nonatomic) id<MTLCommandBuffer> metalCommandBuffer;
@property (readonly, nonatomic) unsigned long long digest;

@end
