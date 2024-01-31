@interface VisionCoreEspressoUtils : NSObject

+ (id)URLForModelNamed:(id)a0 error:(id *)a1;
+ (BOOL)getInputImageTensorDescriptor:(id *)a0 outputTensorDescriptors:(id *)a1 forNetworkModelFileURL:(id)a2 inputBlobName:(id)a3 pixelFormatType:(unsigned int)a4 outputBlobNamesWithTypes:(id)a5 confidencesBlobNamesWithLabelsFiles:(id)a6 error:(id *)a7;
+ (id)URLForResourceFileNamed:(id)a0 error:(id *)a1;
+ (id)tensorShapesForBlobNames:(id)a0 ofNetworkModelFileURL:(id)a1 error:(id *)a2;

@end
