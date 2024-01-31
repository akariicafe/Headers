@class NSString, NSArray, PKMetalRenderer, PKStrokeGenerator, PKLinedPaper, NSMutableArray, NSObject, PKMetalConfig, CAMetalLayer;
@protocol CAMetalDrawable, PKMetalRendererControllerDelegate, MTLTexture, OS_dispatch_queue, OS_dispatch_semaphore;

@interface PKMetalRendererController : NSObject <PKRendererVSyncControllerDelegate> {
    PKMetalConfig *_metalConfig;
    NSObject<OS_dispatch_queue> *_renderQueue;
    _Atomic int _cancelLongRunningRenderingCount;
    _Atomic int _cancelAllRendering;
    NSObject<OS_dispatch_semaphore> *_canBeginRenderSemaphore;
    struct atomic_flag { _Atomic BOOL _Value; } _readyToBeginRender;
    _Atomic double _lastFrameDuration;
    _Atomic unsigned long long _lastPresentationTime;
    _Atomic int _queuedRenders;
    NSMutableArray *_postPresentCallbacks;
    BOOL _isTorndown;
    struct CGSize { double width; double height; } _pixelSize;
    struct CGSize { double width; double height; } _actualSize;
    long long _presentationCount;
    struct PKRunningStat { long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _strokeLatencyStat;
    struct PKRunningStat { long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _predictedTouchesLatencyStat;
    id<MTLTexture> _currentTextureTarget;
    id<CAMetalDrawable> _currentDrawable;
    struct CGImage { } *_paperTextureImage;
    struct CGPoint { double x; double y; } _canvasOffset;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _strokeTransformForRenderQueue;
    id /* block */ _canvasOffsetBlock;
    NSArray *_liveStrokeStrokes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _liveStrokeStrokesAnimationBounds;
    BOOL _dirtyRectMightBeInvalid;
    BOOL _renderingForPreview;
    NSString *_currentInkIdentifier;
    double _timestampForDrawingBegan;
    NSObject<OS_dispatch_semaphore> *_updateCycleSemaphore;
    BOOL _sixChannelUsesWideGamut;
    BOOL _liveStrokeMode;
    BOOL _fadeOutStrokesMode;
    BOOL _invertColors;
    BOOL _sixChannelBlending;
    BOOL _drawBitmapEraserMask;
    BOOL _combineStrokesAllowed;
    id<PKMetalRendererControllerDelegate> _delegate;
    unsigned long long _pixelFormat;
    unsigned long long _sixChannelMetalLayerPixelFormat;
    double _contentZoomScale;
    PKStrokeGenerator *_inputController;
    PKLinedPaper *_linedPaper;
    double _liveStrokeElapsedTime;
    double _liveStrokeDuration;
    double __latestLatency;
    CAMetalLayer *_presentationLayer;
    unsigned long long _previewStrokeMaxPoints;
    double _previewStrokeAlpha;
    double _pencilShadowElevation;
    double _pencilShadowAlpha;
    PKMetalRenderer *_renderer;
    double _inputScale;
    struct CGSize { double width; double height; } _liveStrokeMaxSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _viewScissor;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _strokeTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _paperTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _renderTransform;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)signalVSyncSemaphore:(double)a0 presentationTime:(unsigned long long)a1;

@end
