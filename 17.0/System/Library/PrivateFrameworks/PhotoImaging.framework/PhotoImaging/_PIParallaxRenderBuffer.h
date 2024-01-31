@class CIRenderTask, NSString, NUColorSpace, CIRenderInfo, NUPixelFormat;
@protocol NUImageBuffer;

@interface _PIParallaxRenderBuffer : NSObject <NUImageBuffer>

@property (readonly, nonatomic) id<NUImageBuffer> pixelBuffer;
@property (readonly, nonatomic) CIRenderTask *renderTask;
@property (readonly, nonatomic) CIRenderInfo *renderInfo;
@property (readonly, nonatomic) struct { long long x0; long long x1; } size;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly, nonatomic) NUColorSpace *colorSpace;
@property (readonly, nonatomic) struct __CVBuffer { } *CVPixelBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPixelBuffer:(id)a0 renderTask:(id)a1;

@end
