@interface SMUFilter : NSObject

+ (void)applyProgramTextFiltersToLayer:(id)a0;
+ (void)applyProgramVibrantColorFilterToLayer:(id)a0;
+ (id)gaussianBlurFilterWithInputRadius:(double)a0 inputHardEdges:(id)a1 inputNormalizeEdges:(id)a2 inputQuality:(id)a3 inputIntermediateBitDepth:(id)a4 inputDither:(id)a5 name:(id)a6;
+ (id)programTextBackgroundVibrantColorMatrixFilter;
+ (id)programTextBlurFilter1;
+ (id)programTextBlurFilter2;
+ (id)programTextColorMatrixFilter;

@end
