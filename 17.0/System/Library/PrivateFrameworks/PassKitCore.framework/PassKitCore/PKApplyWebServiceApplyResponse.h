@class NSSet, PKAccount, PKFeatureApplication;

@interface PKApplyWebServiceApplyResponse : PKApplyWebServiceResponse

@property (readonly, nonatomic) PKFeatureApplication *featureApplication;
@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) unsigned long long requiredDeviceMetadataFields;
@property (readonly, nonatomic) BOOL requiresODIAssessment;
@property (readonly, copy, nonatomic) NSSet *actionIdentifiersRequiringAuthentication;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)nextStepInfo;

@end
