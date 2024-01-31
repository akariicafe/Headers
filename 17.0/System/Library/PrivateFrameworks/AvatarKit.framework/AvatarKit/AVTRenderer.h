@class AVAudioEngine, MTLRenderPassDescriptor, AVTPresentationConfiguration, AVTARMaskRenderer, SCNNode, AVTAvatar, AVAudioEnvironmentNode, NSString, SCNTechnique, AVTAvatarEnvironment, SKScene, SCNScene, NSLock, AVTFaceTracker;
@protocol MTLRenderCommandEncoder, SCNSceneRendererDelegate, MTLDevice, AVTRendererFaceTrackingDelegate, MTLCommandQueue;

@interface AVTRenderer : SCNRenderer <_SCNSceneCommandBufferStatusMonitor, _SCNSceneRendererResourceManagerMonitor, SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI, AVTSceneRenderer> {
    AVTAvatarEnvironment *_environment;
    AVTPresentationConfiguration *_presentationConfiguration;
    AVTAvatar *_avatar;
    SCNNode *_avatarNode;
    NSLock *_lock;
    BOOL _pauseSimulation;
    BOOL _warmingUp;
    AVTFaceTracker *_faceTracker;
    BOOL _faceIsTracked;
    BOOL _enableFaceTrackingLossFeedback;
    BOOL _enableReticle;
    BOOL _captureImageIsTooDark;
    BOOL _isSensorCovered;
    double _lastFaceTrackerUpdateTimestamp;
    double _lastFaceTrackerUpdateWithTrackedFaceTimestamp;
    id<AVTRendererFaceTrackingDelegate> _faceTrackingDelegate;
    unsigned long long _antialiasingMode;
    SCNTechnique *_arMaskTechnique;
    AVTARMaskRenderer *_arMaskRenderer;
    BOOL _arMaskRendererHasFlippedDepth;
}

@property (retain, nonatomic) AVTAvatar *avatar;
@property (nonatomic, getter=isWarmingUp) BOOL warmingUp;
@property (nonatomic) BOOL arMode;
@property (nonatomic) BOOL pauseSimulation;
@property (retain, nonatomic) AVTFaceTracker *faceTracker;
@property (retain, nonatomic) AVTPresentationConfiguration *presentationConfiguration;
@property (copy, nonatomic) NSString *framingMode;
@property (nonatomic) unsigned long long avt_antialiasingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) double sceneTime;
@property (weak, nonatomic) id<SCNSceneRendererDelegate> delegate;
@property (getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL loops;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) BOOL autoenablesDefaultLighting;
@property (nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property (nonatomic, getter=isTemporalAntialiasingEnabled) BOOL temporalAntialiasingEnabled;
@property (nonatomic) BOOL showsStatistics;
@property (nonatomic) unsigned long long debugOptions;
@property (retain, nonatomic) SKScene *overlaySKScene;
@property (readonly, nonatomic) unsigned long long renderingAPI;
@property (readonly, nonatomic) struct CGColorSpace { } *workingColorSpace;
@property (readonly, nonatomic) void *context;
@property (readonly, nonatomic) id<MTLRenderCommandEncoder> currentRenderCommandEncoder;
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long colorPixelFormat;
@property (readonly, nonatomic) unsigned long long depthPixelFormat;
@property (readonly, nonatomic) unsigned long long stencilPixelFormat;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) AVAudioEngine *audioEngine;
@property (readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (retain, nonatomic) SCNNode *audioListener;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentViewport;
@property (nonatomic) BOOL usesReverseZ;

+ (id)renderer;

@end
