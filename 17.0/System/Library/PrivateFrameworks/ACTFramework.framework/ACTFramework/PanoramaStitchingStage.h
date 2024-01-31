@class NSString, NSDictionary, FigMetalContext, PanoramaStitchingShaders;
@protocol MTLTexture, MTLCommandQueue;

@interface PanoramaStitchingStage : NSObject <MetalImageBufferProcessor> {
    FigMetalContext *_metal;
    PanoramaStitchingShaders *_shaders;
    id<MTLTexture> _seamStagingLuma;
    id<MTLTexture> _seamStagingChroma;
    id<MTLTexture> _seamStagingLumaDst;
    id<MTLTexture> _seamStagingChromaDst;
    id<MTLTexture> _prevLuma;
    id<MTLTexture> _prevChroma;
    id<MTLTexture> _seamCost;
    int _direction;
}

@property (readonly, nonatomic) id<MTLTexture> stitchingMask;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } roi;
@property (nonatomic) BOOL isReadyToProcess;
@property (nonatomic) int stitchingMode;
@property (retain, nonatomic) id<MTLTexture> motionMask;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)resetState;
- (int)prewarm;
- (int)finishProcessing;
- (int)process;
- (id)initWithContext:(id)a0;
- (int)setDirection:(int)a0;
- (void).cxx_destruct;
- (int)prepareToProcess:(unsigned int)a0;
- (int)purgeResources;
- (int)setup;
- (int)_centralStitchAddSlice:(struct __CVBuffer { } *)a0 sliceHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 sliceType:(int)a2;
- (int)_seamStitchAddSlice:(struct __CVBuffer { } *)a0 sliceHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 sliceType:(int)a2;
- (int)addSlice:(struct __CVBuffer { } *)a0 sliceHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 sliceType:(int)a2;
- (int)prepareToProcessSliceWidth:(unsigned long long)a0 sliceHeight:(unsigned long long)a1;

@end
