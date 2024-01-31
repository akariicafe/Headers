@class PIParallaxStyle, PFPosterOrientedLayout, NSCache;
@protocol PISegmentationItem;

@interface PIParallaxLayerStackRequest : NURenderRequest

@property (readonly, nonatomic) BOOL shouldUseVideoFrame;
@property (readonly, nonatomic) id<PISegmentationItem> segmentationItem;
@property (retain, nonatomic) PIParallaxStyle *style;
@property (retain, nonatomic) PFPosterOrientedLayout *layout;
@property (nonatomic) long long layerStackMode;
@property (nonatomic) BOOL headroomBlurEnabled;
@property (retain, nonatomic) NSCache *cache;
@property (nonatomic, getter=isSettlingEffectEnabled) BOOL settlingEffectEnabled;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSegmentationItem:(id)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
