@class NSString, NSDictionary, NSURL, NUColorSpace, NSObject;
@protocol OS_dispatch_queue;

@interface NUCGImageSourceNode : NUSourceNode {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NSURL *URL;
@property (readonly) NSString *UTI;
@property BOOL loaded;
@property (retain, nonatomic) struct CGImageSource { } *cgImageSource;
@property (retain, nonatomic) NSDictionary *cgImageProperties;
@property struct { long long width; long long height; } size;
@property long long orientation;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property long long alphaInfo;
@property long long componentInfo;
@property (retain) NSDictionary *auxiliaryImagesProperties;

- (id)debugQuickLookObject;
- (BOOL)load:(out id *)a0;
- (void)dealloc;
- (void)_init;
- (BOOL)_load:(out id *)a0;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (BOOL)canPropagateOriginalAuxiliaryData;
- (id)initWithURL:(id)a0 UTI:(id)a1 identifier:(id)a2;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)initWithImageSource:(struct CGImageSource { } *)a0 identifier:(id)a1;
- (void)_addDefaultFinalizedSourceOptions:(id)a0;
- (id)_evaluateAuxiliaryImageForType:(long long)a0 error:(out id *)a1;
- (id)_evaluateImageGeometryWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)_evaluateRawImagePropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_finalizeSourceOptions:(id)a0 subsampleFactor:(long long)a1;
- (BOOL)_setAuxiliaryImagePropertiesFromCGProperties:(id)a0 error:(out id *)a1;
- (BOOL)_setGeometryFromProperties:(id)a0 error:(out id *)a1;
- (id)auxiliaryImagePropertiesForAuxImageType:(long long)a0;
- (id)initWithURL:(id)a0 UTI:(id)a1 identifier:(id)a2 options:(id)a3;
- (id)initWithURL:(id)a0 UTI:(id)a1 settings:(id)a2;
- (id)loadEmbeddedThumbnailDataFromImageSource:(struct CGImageSource { } *)a0 options:(id)a1;
- (long long)normalizeSubsampleFactor:(long long)a0;
- (struct { long long x0; long long x1; })pixelSizeWithSourceOptions:(id)a0;
- (id)preparedNodeWithSourceContainer:(id)a0 pipelineState:(id)a1 pipelineSettings:(id)a2 sourceSettings:(id)a3 error:(out id *)a4;
- (id)resolvedAuxiliaryImageNodeForPipelineState:(id)a0 error:(out id *)a1;
- (long long)sourceOrientation;
- (BOOL)supportsPipelineState:(id)a0 error:(out id *)a1;
- (BOOL)useEmbeddedPreview;

@end
