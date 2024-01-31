@class NSString, NSArray, AVVideoCompositionInternal, AVVideoCompositionCoreAnimationTool;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {
    AVVideoCompositionInternal *_videoComposition;
}

@property (readonly, nonatomic) NSString *colorPrimaries;
@property (readonly, nonatomic) NSString *colorYCbCrMatrix;
@property (readonly, nonatomic) NSString *colorTransferFunction;
@property (readonly, nonatomic) NSString *perFrameHDRDisplayMetadataPolicy;
@property (readonly, nonatomic) Class customVideoCompositorClass;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } frameDuration;
@property (readonly, nonatomic) int sourceTrackIDForFrameTiming;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } renderSize;
@property (readonly, nonatomic) float renderScale;
@property (readonly, copy, nonatomic) NSArray *instructions;
@property (readonly, retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;
@property (readonly, nonatomic) NSArray *sourceSampleDataTrackIDs;

+ (void)initialize;
+ (id)_mutableVideoCompositionWithAsset:(id)a0 applyingCIFiltersWithHandler:(id /* block */)a1;
+ (id)videoCompositionWithAsset:(id)a0 applyingCIFiltersWithHandler:(id /* block */)a1;
+ (void)videoCompositionWithAsset:(id)a0 applyingCIFiltersWithHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (id)videoCompositionWithPropertiesOfAsset:(id)a0;
+ (void)videoCompositionWithPropertiesOfAsset:(id)a0 completionHandler:(id /* block */)a1;
+ (id)videoCompositionWithPropertiesOfAsset:(id)a0 videoGravity:(id)a1;

- (id)init;
- (void)dealloc;
- (id)_deepCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setInstructions:(id)a0;
- (void)setRenderScale:(float)a0;
- (void)_bumpChangeSeed;
- (void)setSourceTrackIDForFrameTiming:(int)a0;
- (int)_auxiliaryTrackID;
- (id)_auxiliaryTrackLayer;
- (unsigned long long)_changeSeed;
- (BOOL)_copyFigVideoCompositor:(const void **)a0 andSession:(id *)a1 recyclingSession:(id)a2 forFigRemaker:(BOOL)a3 error:(id *)a4;
- (BOOL)_hasLayerAsAuxiliaryTrack;
- (BOOL)_hasPostProcessingLayers;
- (BOOL)_isValidReturningExceptionReason:(id *)a0;
- (id)_postProcessingRootLayer;
- (id)_postProcessingVideoLayer;
- (id)_postProcessingVideoLayers;
- (id)_serializableInstructions;
- (void)_setFrameDurationForFrameRate:(float)a0 sourceTrackIDForFrameTiming:(int)a1;
- (id)builtInCompositorName;
- (void)determineValidityForAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 validationDelegate:(id)a2 completionHandler:(id /* block */)a3;
- (id)instructionForFigInstruction:(void *)a0;
- (BOOL)isValidForAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 validationDelegate:(id)a2;
- (void)setAnimationTool:(id)a0;
- (void)setBuiltInCompositorName:(id)a0;
- (void)setColorPrimaries:(id)a0;
- (void)setColorTransferFunction:(id)a0;
- (void)setColorYCbCrMatrix:(id)a0;
- (void)setCustomVideoCompositorClass:(Class)a0;
- (void)setFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setPerFrameHDRDisplayMetadataPolicy:(id)a0;
- (void)setRenderSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSourceSampleDataTrackIDs:(id)a0;
- (void)videoCompositionOutputColorPropertiesWithCustomCompositor:(id)a0 formatDescriptions:(id)a1 colorPrimaries:(id *)a2 transferFunction:(id *)a3 yCbCrMatrix:(id *)a4 perFrameHDRDisplayMetadataPolicy:(id *)a5;

@end
