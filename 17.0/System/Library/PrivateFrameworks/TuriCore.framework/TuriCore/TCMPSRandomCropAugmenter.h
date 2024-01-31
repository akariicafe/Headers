@class NSString;

@interface TCMPSRandomCropAugmenter : NSObject <TCMPSImageAugmenting>

@property (nonatomic) double skipProbability;
@property (nonatomic) double minAspectRatio;
@property (nonatomic) double maxAspectRatio;
@property (nonatomic) double minAreaFraction;
@property (nonatomic) double maxAreaFraction;
@property (nonatomic) double minObjectCovered;
@property (nonatomic) unsigned long long maxAttempts;
@property (nonatomic) double minEjectCoverage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)applyCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toAnnotations:(id)a1;
- (id)imageAugmentedFromImage:(id)a0 generator:(id /* block */)a1;

@end
