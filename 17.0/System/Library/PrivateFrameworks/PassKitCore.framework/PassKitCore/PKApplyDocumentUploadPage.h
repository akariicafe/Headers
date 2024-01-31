@class NSArray, NSString;

@interface PKApplyDocumentUploadPage : PKDynamicProvisioningPageContent

@property (retain, nonatomic) NSArray *acceptableDocuments;
@property (readonly, nonatomic) BOOL requiresCoreIDVImageCaptureUpload;
@property (readonly, copy, nonatomic) NSArray *imageCaptureEncryptionCertificates;
@property (readonly, copy, nonatomic) NSString *imageCaptureEncryptionVersion;

- (id)initWithJSONObject:(id)a0;
- (void).cxx_destruct;

@end
