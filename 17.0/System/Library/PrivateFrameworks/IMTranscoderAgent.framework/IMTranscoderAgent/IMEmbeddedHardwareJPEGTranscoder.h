@class NSData;

@interface IMEmbeddedHardwareJPEGTranscoder : NSObject {
    struct __IOSurface { } *_ioSurfaceRef;
    NSData *_imageData;
    struct __CFDictionary { } *_imageProperties;
    BOOL _canHardwareScaleImage;
}

@property (nonatomic) double targetJPEGCompressionValue;

- (void)dealloc;
- (BOOL)_decodeImageToIOSurface;
- (BOOL)_isJPEGImage:(struct CGImageSource { } *)a0;
- (id)initWithImageData:(id)a0 imageSource:(struct CGImageSource { } *)a1;
- (BOOL)scaleImageToFitLargestDimension:(id)a0 outputData:(id *)a1;

@end
