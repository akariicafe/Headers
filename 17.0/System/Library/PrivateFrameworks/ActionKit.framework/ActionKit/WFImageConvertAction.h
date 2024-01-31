@interface WFImageConvertAction : WFAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)imageQualityWithQuality:(id)a0 imageFormat:(id)a1;
- (BOOL)preserveMetadataWithPreserveMetadata:(BOOL)a0 imageFormat:(id)a1;
- (id)typeFromImageFormatString:(id)a0;

@end
