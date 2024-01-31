@protocol NUImageBuffer;

@interface PIParallaxColorAnalysisRequest : NURenderRequest

@property (retain, nonatomic) id<NUImageBuffer> segmentationMatte;
@property (nonatomic) BOOL analyzeBackground;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedClipRect;
@property (nonatomic) long long maxDominantColors;
@property (nonatomic) double dominanceThreshold;
@property (nonatomic) double chromaThreshold;

- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
