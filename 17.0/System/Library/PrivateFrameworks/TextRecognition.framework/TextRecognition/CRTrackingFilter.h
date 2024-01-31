@interface CRTrackingFilter : NSObject

+ (void)filterLowQualityTranscriptRegions:(id)a0;
+ (BOOL)shouldEdgeIntersectionFilterQuad:(id)a0 originalQuad:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
+ (BOOL)shouldFilterHomographyWithResultQuad:(id)a0 originalQuad:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
+ (BOOL)shouldStartTrackingGroup:(id)a0;
+ (BOOL)shouldStartTrackingRegion:(id)a0;

@end
