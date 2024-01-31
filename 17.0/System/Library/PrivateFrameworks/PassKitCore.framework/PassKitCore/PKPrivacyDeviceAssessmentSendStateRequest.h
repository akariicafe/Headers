@class NSNumber;

@interface PKPrivacyDeviceAssessmentSendStateRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSNumber *privacyUiState;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithPrivacyUiState:(id)a0;

@end
