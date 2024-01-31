@class CRTextDetectorModelV3;

@interface CRNeuralTextDetectorV3 : CRNeuralTextDetector

@property (retain) CRTextDetectorModelV3 *model;

+ (BOOL)computeClassCount:(void *)a0 classProbabiity:(void *)a1 fromSingleTextFeature:(id)a2 map:(const void *)a3 backgroundClass:(int)a4;
+ (struct CGSize { double x0; double x1; })scaledImageSizeForConfiguration:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)preheatWithError:(id *)a0;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)detectInImage:(id)a0 error:(id *)a1;
- (id)detectInImage:(id)a0 trackingSession:(id)a1 error:(id *)a2;
- (id)enumerateTilesForImage:(id)a0 guidedByScoreMapFullTile:(void *)a1 block:(id /* block */)a2;
- (void)runFullTileInferenceOnImage:(id)a0 outputMaps:(void *)a1 inputSize:(struct CGSize { double x0; double x1; } *)a2 outputSize:(struct CGSize { double x0; double x1; } *)a3 error:(id *)a4;

@end
