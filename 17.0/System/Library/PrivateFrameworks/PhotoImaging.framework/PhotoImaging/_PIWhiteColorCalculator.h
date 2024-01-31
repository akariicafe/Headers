@class NUBufferRenderClient, NUImageDataClient, NUComposition, NSObject;
@protocol OS_dispatch_queue;

@interface _PIWhiteColorCalculator : NSObject {
    NUComposition *_composition;
    NUBufferRenderClient *_bufferRenderClient;
    NUImageDataClient *_imageDataClient;
    NSObject<OS_dispatch_queue> *_q;
    BOOL _useSushi;
}

- (void).cxx_destruct;
- (id)_brightnessMultiplierFromImageProperties:(id)a0;
- (void)_computeGreenPercentage:(id /* block */)a0;
- (struct { struct { double x0[4]; } x0; struct { double x0[4]; } x1; double x2; })_computeWhitePointColorWithGrayEdgesBuffer:(id)a0 grayWorldBuffer:(id)a1 greenChannelPercentage:(double)a2 RAWCameraSpaceProperties:(id)a3;
- (void)_configureRequest:(id)a0;
- (void)_submitGERenderRequest:(id /* block */)a0;
- (void)_submitGWRenderRequest:(id /* block */)a0;
- (struct { struct { double x0[4]; } x0; struct { double x0[4]; } x1; double x2; })_whitePointColorFromGrayEdgesImage:(id)a0 grayWorldImage:(id)a1 greenChannelPercentage:(double)a2 RAWCameraSpaceProperties:(id)a3;
- (void)calculateColorWithProperties:(id)a0 completion:(id /* block */)a1;
- (id)initWithComposition:(id)a0 useSushi:(BOOL)a1;
- (void)readBufferFromImage:(id)a0 withRGBAfBufferBlock:(id /* block */)a1;

@end
