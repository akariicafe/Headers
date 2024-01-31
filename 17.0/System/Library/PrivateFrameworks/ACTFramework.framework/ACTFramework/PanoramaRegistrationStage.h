@class NSString, NSDictionary, FigMetalContext, LKTFlowGPU, PanoramaRegistrationShaders;
@protocol MTLTexture, MTLCommandQueue;

@interface PanoramaRegistrationStage : NSObject <MetalImageBufferProcessor, PanoRegistrationProvider> {
    FigMetalContext *_metal;
    PanoramaRegistrationShaders *_shaders;
    LKTFlowGPU *_lkt;
    int _direction;
    int _flowUpperMostScale;
    struct __CVBuffer { } *_lastSlice;
    float _translationsMagnitude[10];
    int _slicesProcessed;
}

@property (readonly, nonatomic) id<MTLTexture> RegistrationMask;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } roi;
@property struct { void /* unknown type, empty encoding */ columns[3]; } homography;
@property BOOL homographyFailure;
@property BOOL hasRetrogradeMotion;
@property struct __CVBuffer { } *residualFlow;
@property (retain) id<MTLTexture> registrationWeights;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property struct { void /* unknown type, empty encoding */ x0[3]; } _homography;

- (int)resetState;
- (void)dealloc;
- (id)initWithContext:(id)a0;
- (int)setDirection:(int)a0;
- (void).cxx_destruct;
- (BOOL)_checkForNaNs:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;
- (int)_computeRegistration:(struct __CVBuffer { } *)a0 metadata:(id)a1 initTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a2;
- (int)_getICPDecimationFactor;
- (int)_getLKTFlowUpperMostScale;
- (BOOL)_isRetrogradeMotion:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 tolerance:(float)a1;
- (BOOL)_isTranslationOutlier:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;
- (void)_logTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 metadata:(id)a1 message:(char *)a2 error:(BOOL)a3;
- (void)_resetHomographyFailureFlagToFalse;
- (void)_resetRetrogradeMotionFlagToFalse;
- (void)_setHomographyFailureFlag;
- (struct { void /* unknown type, empty encoding */ x0[3]; })_setRegistrationParams:(id)a0 initTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a1;
- (void)_setRetrogradeMotionFlag;
- (BOOL)hasHomographyFailureFlag;
- (BOOL)hasRetrogradeMotionFlag;
- (int)prepareRegistrationWithDevice:(id)a0 library:(id)a1 commandQueue:(id)a2 width:(unsigned long long)a3 height:(unsigned long long)a4;
- (struct { void /* unknown type, empty encoding */ x0[3]; })registerNewSlice:(struct opaqueCMSampleBuffer { } *)a0 withHFromGyro:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 registrationCallback:(id /* block */)a2;
- (void)replacePreviousSlice:(struct __CVBuffer { } *)a0;

@end
