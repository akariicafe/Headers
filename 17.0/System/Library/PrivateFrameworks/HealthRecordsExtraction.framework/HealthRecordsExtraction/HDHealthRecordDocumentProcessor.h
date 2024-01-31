@class NSNumber, HRSSupportedFHIRConfiguration, HDHealthRecordDocumentTypeConfiguration;

@interface HDHealthRecordDocumentProcessor : NSObject {
    HDHealthRecordDocumentTypeConfiguration *_configuration;
}

@property (readonly, copy, nonatomic) NSNumber *extractionRulesetVersion;
@property (readonly, copy, nonatomic) HRSSupportedFHIRConfiguration *supportedFHIRConfiguration;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)processExtractionRequest:(id)a0 error:(id *)a1;
- (id)_resourceObjectsBatchedPerFHIRRelease:(id)a0;
- (id)compareExistingPatientResourceData:(id)a0 incomingPatientResourceData:(id)a1 error:(id *)a2;
- (id)extractAttachmentContentFromFHIRResource:(id)a0 error:(id *)a1;
- (id)processOptInRequest:(id)a0 redactor:(id)a1 error:(id *)a2;
- (id)processReferenceExtractionRequest:(id)a0 error:(id *)a1;

@end
