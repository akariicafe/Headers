@class PFPosterOrientedLayout, PIParallaxStyle, NSArray, NSString, _PIParallaxLayerStackDebugImageCollector, CIImage, NSMutableArray;
@protocol PISegmentationItem, NUImageBuffer;

@interface _PIParallaxLayerStackJob : NURenderJob <_PIParallaxLayerStackRenderer, PIParallaxFilterCache> {
    NSMutableArray *_cachedImageEntries;
}

@property (readonly, nonatomic) id<PISegmentationItem> segmentationItem;
@property (readonly, nonatomic) PIParallaxStyle *style;
@property (readonly, nonatomic) PFPosterOrientedLayout *requestLayout;
@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) BOOL shouldUseVideoFrame;
@property (retain, nonatomic) PFPosterOrientedLayout *layout;
@property (retain, nonatomic) CIImage *foregroundImage;
@property (retain, nonatomic) CIImage *backgroundImage;
@property (retain, nonatomic) id<NUImageBuffer> foregroundBuffer;
@property (retain, nonatomic) id<NUImageBuffer> backgroundBuffer;
@property (retain, nonatomic) _PIParallaxLayerStackDebugImageCollector *debugImageCollector;
@property (copy, nonatomic) NSArray *layers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)result;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (BOOL)complete:(out id *)a0;
- (id)effectiveLayout;
- (id)backfillScalePolicy;
- (id)cacheImage:(id)a0 key:(id)a1 format:(id)a2 colorSpace:(id)a3;
- (id)cachedImage:(id)a0 forKey:(id)a1;
- (id)debugTintedImage:(id)a0 isBackfill:(BOOL)a1;
- (id)deviceScalePolicy;
- (id)imageByCachingImage:(id)a0 format:(id)a1 colorSpace:(id)a2 key:(id)a3;
- (id)initWithParallaxLayerStackRequest:(id)a0;
- (BOOL)isBackfillRequest;
- (BOOL)isDebugRequest;
- (BOOL)isInactiveRequest;
- (BOOL)isMainRequest;
- (BOOL)isPreviewRequest;
- (id)layerForBuffer:(id)a0 image:(id)a1 zPosition:(double)a2 identifier:(id)a3;
- (id)layerForVideoData:(id)a0 zPosition:(double)a1 identifier:(id)a2;
- (id)layerStackRequest;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (id)newRenderedPixelBufferFromImage:(id)a0 hasAlpha:(BOOL)a1 error:(out id *)a2;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (id)targetColorSpace;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;

@end
