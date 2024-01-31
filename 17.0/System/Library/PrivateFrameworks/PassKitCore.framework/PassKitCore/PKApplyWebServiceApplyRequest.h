@class NSString, NSArray, NSURL, PKFeatureApplicationInvitationDetails, NSSet, PKPaymentInstallmentConfiguration, PKPaymentDeviceMetadata, PKApplyWebServiceRequestAuthenticationContext;

@interface PKApplyWebServiceApplyRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic) unsigned long long featureProduct;
@property (copy, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *coreIDVNextStepToken;
@property (copy, nonatomic) NSString *previousContextIdentifier;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration;
@property (nonatomic) long long updateUserInfoSubType;
@property (nonatomic) long long channel;
@property (nonatomic) long long applicationType;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *referenceIdentifier;
@property (retain, nonatomic) PKFeatureApplicationInvitationDetails *invitationDetails;
@property (copy, nonatomic) NSString *preliminaryAssessmentIdentifier;
@property (copy, nonatomic) NSSet *termsIdentifiers;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (retain, nonatomic) PKApplyWebServiceRequestAuthenticationContext *authenticationContext;
@property (copy, nonatomic) NSString *odiAssessment;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
