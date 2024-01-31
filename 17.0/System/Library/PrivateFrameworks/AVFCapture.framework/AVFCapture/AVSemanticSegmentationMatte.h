@class NSString;

@interface AVSemanticSegmentationMatte : NSObject {
    NSString *_matteType;
    struct __CVBuffer { } *_pixelBuffer;
    int _version;
}

@property (readonly) NSString *matteType;
@property (readonly) unsigned int pixelFormatType;
@property (readonly) struct __CVBuffer { } *mattingImage;

+ (void)initialize;
+ (id)semanticSegmentationMatteFromImageSourceAuxiliaryDataType:(struct __CFString { } *)a0 dictionaryRepresentation:(id)a1 error:(id *)a2;
+ (id)_allSupportedSemanticSegmentationMattePixelFormatTypes;
+ (id)_allSupportedSemanticSegmentationMatteTypes;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)a0;
- (struct __CFString { } *)auxiliaryImageType;
- (struct CGImageMetadata { } *)copyAuxiliaryMetadata;
- (id)initWithType:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 auxiliaryMetadata:(struct CGImageMetadata { } *)a2;
- (id)initWithType:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 semanticSegmentationMatteMetadataDictionary:(id)a2;
- (id)semanticSegmentationMatteByApplyingExifOrientation:(unsigned int)a0;
- (id)semanticSegmentationMatteByReplacingSemanticSegmentationMatteWithPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (short)versionMajor;
- (short)versionMinor;

@end
