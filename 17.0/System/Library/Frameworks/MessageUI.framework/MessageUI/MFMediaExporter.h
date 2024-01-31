@interface MFMediaExporter : NSObject

+ (id)log;
+ (id)conversionTimers;
+ (int)exportAsset:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)jpegRepresentationForImageData:(id)a0 inputContentType:(id)a1 completion:(id /* block */)a2;
+ (void)setConversionTimers:(id)a0;

@end
