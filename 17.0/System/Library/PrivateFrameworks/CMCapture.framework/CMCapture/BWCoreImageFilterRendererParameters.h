@class NSArray, NSString, CIFilter;

@interface BWCoreImageFilterRendererParameters : NSObject <BWFilterRendererParameters>

@property (copy, nonatomic) NSArray *filters;
@property (retain, nonatomic) CIFilter *originalOutputFilter;
@property (readonly, nonatomic) BOOL requiresDepthMap;
@property (readonly, nonatomic) BOOL requiresFaceLandmarks;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) float interpolationFractionComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)containsFilterRequiringFaceLandmarks:(id)a0;

- (void)dealloc;
- (void)updateByInterpolatingFromParameters:(id)a0 toParameters:(id)a1 withFractionComplete:(float)a2;
- (int)prepareForRenderingWithInputVideoFormat:(id)a0;
- (int)depthTypeForFilter:(id)a0;
- (id)initWithFilters:(id)a0 originalOutputFilter:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
