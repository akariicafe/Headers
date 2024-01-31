@class PKPaymentDeviceMetadata, NSString, PKAccountPaymentFundingSource, NSURL, PKAccountWebServiceCertificatesResponse;

@interface PKAccountWebServiceAddFundingSourceRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) PKAccountPaymentFundingSource *fundingSource;
@property (retain, nonatomic) NSString *fundingSourceTermsIdentifier;
@property (retain, nonatomic) PKAccountWebServiceCertificatesResponse *certificatesResponse;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (copy, nonatomic) NSString *odiAssessment;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
