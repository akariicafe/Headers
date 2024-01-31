@interface VNTorsoprintGeneratorFaceBased : VNTorsoprintGeneratorBase

+ (float)magnifiedBBoxScaleFactor;
+ (float)minimumTorsoInsideInputImageThreshold;
+ (struct CGSize { double x0; double x1; })torsoprintDescriptorSize;
+ (struct CGSize { double x0; double x1; })torsoprintInputImageSizeForFaceOrientation:(int)a0;

- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)_calculateTorsoBBoxFromFaceBBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 insideImageWithSize:(struct CGSize { double x0; double x1; })a1 faceOrientationRelativeToUpright:(int)a2 torsoBBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 error:(id *)a4;
- (id)torsoprintForImageBuffer:(struct __CVBuffer { } *)a0 requestRevision:(unsigned long long)a1 error:(id *)a2;

@end
