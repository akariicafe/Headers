@class NSString, NSDictionary, NSObject, AVVideoComposition;
@protocol OS_dispatch_queue;

@interface AVVideoCompositionRenderContextInternal : NSObject {
    NSDictionary *_basisProperties;
    struct CGSize { double width; double height; } _size;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _renderTransform;
    float _renderScale;
    struct { long long horizontalSpacing; long long verticalSpacing; } _pixelAspectRatio;
    struct { double left; double top; double right; double bottom; } _edgeWidths;
    BOOL _highQualityRendering;
    NSDictionary *_clientRequiredPixelBufferAttributes;
    NSDictionary *_destinationDesiredPixelBufferAttributes;
    NSString *_destinationDesiredPixelBufferYCbCrMatrix;
    NSString *_destinationDesiredPixelBufferColorPrimaries;
    NSString *_destinationDesiredPixelBufferTransferFunction;
    NSString *_blendingTransferFunction;
    int pixelFormatFamily;
    struct __CFDictionary { } *_pixelAspectRatioDict;
    struct __CFDictionary { } *_cleanApertureDict;
    struct { int width; int height; } _destinationPixelBufferDimensions;
    struct OpaqueFigSimpleMutex { } *_bufferPoollInitMutex;
    NSObject<OS_dispatch_queue> *_pixelBufferPoolQ;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    AVVideoComposition *_videoComposition;
}

- (void)dealloc;
- (void)_willDeallocOrFinalize;

@end
