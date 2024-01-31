@interface ApplyHairnetModel : CIImageProcessorKernel

+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (int)outputFormat;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)apply:(id)a0 sdof:(id)a1 mask:(id)a2 alpha:(id)a3 chromaWeight:(float)a4 chromaBlurSigma:(float)a5 model:(id)a6;

@end
