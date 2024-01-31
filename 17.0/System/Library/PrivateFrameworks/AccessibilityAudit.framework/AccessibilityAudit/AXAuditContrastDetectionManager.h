@interface AXAuditContrastDetectionManager : NSObject

+ (id)sharedManager;

- (double)_euclideanDistanceBetweenColor1:(id)a0 color2:(id)a1;
- (id)_topColorsForColors:(id)a0;
- (id)_topColorsForImageData:(id)a0 optimized:(BOOL)a1;
- (id)auditDisplayStringForAuditColor:(id)a0;
- (id)colorForHexValueString:(id)a0;
- (double)contrastRatioForColor1:(id)a0 color2:(id)a1;
- (id)contrastResultForInput:(id)a0;
- (id)getSuggestedColorForFailContrast:(id)a0 backgroundColor:(id)a1;
- (double)luminanceForColor:(id)a0;
- (id)pixelColorInImagePixelData:(struct __CFData { } *)a0 atX:(int)a1 atY:(int)a2 width:(double)a3;

@end
