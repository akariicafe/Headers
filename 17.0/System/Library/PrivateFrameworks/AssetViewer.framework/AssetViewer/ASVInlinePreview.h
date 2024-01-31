@class CALayerHost, NSUUID, NSTimer, CAActivityIndicatorLayer, CALayer, NSURL, NSString;
@protocol ARQLInlineService2;

@interface ASVInlinePreview : NSObject {
    CALayerHost *_layerHost;
    id<ARQLInlineService2> _fullscreenService;
    BOOL _resizeLayerImmediately;
}

@property (readonly, nonatomic) CAActivityIndicatorLayer *spinnerLayer;
@property (readonly, nonatomic) CALayer *errorLayer;
@property (copy, nonatomic) id /* block */ cameraTransformReply;
@property (readonly, retain, nonatomic) NSTimer *animationUpdateTimer;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) CALayer *layer;
@property (retain, nonatomic) NSURL *canonicalWebPageURL;
@property (retain, nonatomic) NSString *urlFragment;
@property (nonatomic) BOOL enableShadows;
@property (readonly, nonatomic) BOOL isPlaying;
@property (copy, nonatomic) id /* block */ animationObserverBlock;
@property (nonatomic) BOOL isLooping;
@property (nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL hasAudio;
@property (nonatomic) BOOL isMuted;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ cameraTransform;

+ (int)instanceCount;
+ (void)_kill:(int)a0;
+ (void)debugGetMemoryUsage:(id /* block */)a0;
+ (id)getService;
+ (void)remoteInstanceCount:(id /* block */)a0;

- (void)setCurrentTime:(double)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)updateLayout;
- (void)setIsMuted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)hasError;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)createFullscreenInstanceWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 previewOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)getCameraTransform:(id /* block */)a0;
- (void)observeDismissFullscreenWithCompletionHandler:(id /* block */)a0;
- (void)preparePreviewOfFileAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)setCameraTransform:(SEL)a0;
- (void)setFrameWithinFencedTransaction:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIsLooping:(BOOL)a0;
- (void)setIsPlaying:(BOOL)a0 reply:(id /* block */)a1;
- (void)setupRemoteConnectionWithCompletionHandler:(id /* block */)a0;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completionHandler:(id /* block */)a1;
- (void)commonInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)getSharedInlineServiceFailable:(id /* block */)a0;
- (id)_createErrorLayer;
- (void)_getCameraTransform:(id /* block */)a0;
- (void)centerLayerInParent:(id)a0;
- (id)inlineTouchesFromUITouches:(id)a0;
- (void)sendTeardownEvent;
- (void)setAnimationObserverBlock:(id /* block */)a0;
- (void)setEnableShadows:(BOOL)a0;
- (void)setWantsDebugColors:(BOOL)a0;
- (void)showErrorLayer;
- (void)updateRuntimeStateFrom:(id)a0;

@end
