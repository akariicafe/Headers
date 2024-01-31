@interface VideoUtil : NSObject

+ (long long)videoResolutionForWidth:(int)a0 height:(int)a1;
+ (long long)compareVideoAspectRatioSizeA:(struct CGSize { double x0; double x1; })a0 toSizeB:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })compute16AlignedResolutionForNativeWidth:(unsigned int)a0 nativeHeight:(unsigned int)a1 maxScreenPixelCount:(unsigned long long)a2 maxScreenEncodingSizeSupported:(unsigned long long)a3;
+ (struct CGSize { double x0; double x1; })computeResolutionForMainDisplayWithMaxScreenPixelCount:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })computeVisibleAspectRatioWithRemoteScreenAspectRatio:(struct CGSize { double x0; double x1; })a0 remoteExpectedAspectRatio:(struct CGSize { double x0; double x1; })a1 encodeWidth:(int)a2 encodeHeight:(int)a3;
+ (id)convertPixelBuffer:(struct __CVBuffer { } *)a0 toImageType:(int)a1 withAssetIdentifier:(id)a2 cameraStatusBits:(unsigned char)a3 allowTimeMetaData:(BOOL)a4;
+ (struct CGSize { double x0; double x1; })getBestCaptureSizeForEncodingSize:(struct CGSize { double x0; double x1; })a0;
+ (int)setupBufferPool:(struct __CVPixelBufferPool **)a0 width:(double)a1 height:(double)a2;
+ (struct CGSize { double x0; double x1; })sizeForVideoResolution:(long long)a0;
+ (struct __CFString { } *)typeIdentifierForImageType:(int)a0;
+ (unsigned int)videoCodecForPayload:(int)a0;

@end
