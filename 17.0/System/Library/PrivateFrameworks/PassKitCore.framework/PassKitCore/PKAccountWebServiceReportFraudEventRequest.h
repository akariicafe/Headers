@class NSString, NSURL, PKPaymentDeviceMetadata;

@interface PKAccountWebServiceReportFraudEventRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) unsigned long long event;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (copy, nonatomic) NSString *odiAssessment;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
