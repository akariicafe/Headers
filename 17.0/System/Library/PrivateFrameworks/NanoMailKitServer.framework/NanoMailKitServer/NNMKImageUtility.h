@interface NNMKImageUtility : NSObject

+ (void)scaleImageFromData:(id)a0 destinationData:(id)a1 maxWidth:(float)a2;
+ (void)scaleImageFromData:(id)a0 destinationURL:(id)a1 maxWidth:(float)a2;
+ (void)scaleImageFromURL:(id)a0 destinationURL:(id)a1 maxWidth:(float)a2;
+ (void)scaleImageFromURL:(id)a0 imageData:(id)a1 destinationURL:(id)a2 destinationData:(id)a3 maxWidth:(float)a4;

@end
