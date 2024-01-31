@interface PISegmentationInwardFillProcessor : CIImageProcessorKernel

+ (BOOL)synchronizeInputs;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)outputIsOpaque;

@end
