@class NSString;

@interface FAInviteFamilyMemberRequest : FAFamilyRequest

@property (copy, nonatomic) NSString *inviteeEmail;
@property (copy, nonatomic) NSString *inviteeCompositeName;
@property (copy, nonatomic) NSString *inviteeShortName;

- (id)_queryString;
- (BOOL)isUserInitiated;
- (void).cxx_destruct;
- (id)_endpoint;

@end
