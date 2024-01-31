@class NSArray, NSString;

@interface AAFamilyEligibilityResponse : AAResponse

@property (readonly, nonatomic) BOOL eligible;
@property (readonly, nonatomic) long long eligibilityStatus;
@property (readonly, nonatomic) BOOL hasPendingInvites;
@property (readonly, nonatomic) NSArray *familyFeaturePrimaryDescriptions;
@property (readonly, nonatomic) NSArray *familyFeatureSecondaryDescriptions;
@property (readonly, nonatomic) NSString *familyFeatureSecondaryTitle;
@property (readonly, nonatomic) NSString *underageEligibilityAlertTitle;
@property (readonly, nonatomic) NSString *underageEligibilityAlertMessage;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
