@class NSDictionary, CIImage;
@protocol PIParallaxFilterCache;

@interface PIParallaxStyleEvaluationContext : NSObject

@property (copy, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *outputImage;
@property (retain, nonatomic) CIImage *guideImage;
@property (retain, nonatomic) CIImage *matteImage;
@property (retain, nonatomic) CIImage *backgroundImage;
@property (copy, nonatomic) NSDictionary *localLightData;
@property (readonly, nonatomic) CIImage *lightMapImage;
@property (retain, nonatomic) id<PIParallaxFilterCache> cache;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) double renderScale;

- (void).cxx_destruct;
- (id)debugDescription;

@end
