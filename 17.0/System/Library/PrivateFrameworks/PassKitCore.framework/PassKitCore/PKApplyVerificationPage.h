@interface PKApplyVerificationPage : PKDynamicProvisioningPageContent

@property (readonly, nonatomic) unsigned long long verificationType;
@property (readonly, nonatomic) unsigned long long verificationCodeLength;

- (id)initWithDictonary:(id)a0;

@end
