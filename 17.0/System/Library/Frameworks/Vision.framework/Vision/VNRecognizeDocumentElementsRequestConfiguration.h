@class VNRecognizeDocumentElementsRequestElementConfiguration;

@interface VNRecognizeDocumentElementsRequestConfiguration : VNImageBasedRequestConfiguration

@property unsigned long long imageCropAndScaleOption;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *documentElements;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *textElements;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *machineReadableCodeElements;

- (id)initWithRequestClass:(Class)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
