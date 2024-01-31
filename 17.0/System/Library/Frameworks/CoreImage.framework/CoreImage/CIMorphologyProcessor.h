@interface CIMorphologyProcessor : CIImageProcessorKernel

+ (BOOL)canReduceOutputChannels;
+ (BOOL)synchronizeInputs;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)a0;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)allowCompressedInputsAndOutputs;
+ (int)outputFormat;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)applyBoxToImage:(id)a0 width:(int)a1 height:(int)a2 doMin:(BOOL)a3;

@end
