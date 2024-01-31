@class NSArray, NUPurgeableStoragePool, PIParallaxColorAnalysisRequest, CIImage, NSMutableArray;

@interface _PIParallaxColorAnalysisJob : NURenderJob {
    NUPurgeableStoragePool *_storagePool;
    NSMutableArray *_renderResources;
}

@property (readonly, nonatomic) PIParallaxColorAnalysisRequest *colorAnalysisRequest;
@property (nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } imageRect;
@property (retain, nonatomic) CIImage *hueChromaImage;
@property (nonatomic) long long alphaCount;
@property (nonatomic) double medianLuminance;
@property (copy, nonatomic) NSArray *dominantHues;
@property (copy, nonatomic) NSArray *dominantGrays;
@property (copy, nonatomic) NSArray *dominantColors;

- (id)result;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)cleanUp;
- (BOOL)render:(out id *)a0;
- (BOOL)complete:(out id *)a0;
- (id)_beginRenderNormalizedHueChromaImage:(id)a0 targetGray:(double)a1 grayRange:(double)a2 chromaMax:(double)a3 error:(out id *)a4;
- (id)_beginRenderNormalizedHueChromaImage:(id)a0 targetHue:(double)a1 hueRange:(double)a2 chromaMin:(double)a3 error:(out id *)a4;
- (id)_beginRenderingImage:(id)a0 colorSpace:(id)a1 format:(id)a2 error:(out id *)a3;
- (BOOL)_computeAllHistograms:(out id *)a0;
- (void)_purgeRenderResources;
- (BOOL)_waitForRenderResources:(out id *)a0;
- (id)initWithParallaxColorAnalysisRequest:(id)a0;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;

@end
