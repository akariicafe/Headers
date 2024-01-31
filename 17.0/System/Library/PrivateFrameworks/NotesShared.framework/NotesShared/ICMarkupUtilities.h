@interface ICMarkupUtilities : NSObject

+ (id)imageDataWithMarkupModelData:(id)a0 sourceImageData:(id)a1;
+ (id)imageDataWithMarkupModelData:(id)a0 sourceImageData:(id)a1 embedData:(BOOL)a2;
+ (id)imageDataWithMarkupModelData:(id)a0 sourceImageURL:(id)a1;
+ (void)applyMarkupModelData:(id)a0 attachment:(id)a1 completionBlock:(id /* block */)a2;
+ (void)applyReturnedMarkupURL:(id)a0 attachment:(id)a1 completionBlock:(id /* block */)a2;
+ (id)cleanImageMetadataFromData:(id)a0;
+ (id)createMarkupViewController;
+ (id)createProcessingMarkupViewControllerOutWindow:(id *)a0;
+ (void)embedReturnedMarkupURL:(id)a0 attachment:(id)a1 completionBlock:(id /* block */)a2;
+ (void)extractReturnedMarkupURL:(id)a0 attachment:(id)a1 completionBlock:(id /* block */)a2;
+ (BOOL)hasPrivateImageMetadata:(id)a0;
+ (id)markupModelDataFromData:(id)a0;
+ (id)markupModelDataFromDataAtURL:(id)a0;

@end
