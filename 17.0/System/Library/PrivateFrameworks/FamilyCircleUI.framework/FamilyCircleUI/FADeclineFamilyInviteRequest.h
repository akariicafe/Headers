@class NSString;

@interface FADeclineFamilyInviteRequest : AAFamilyRequest

@property (copy, nonatomic) NSString *inviteCode;

- (id)urlString;
- (id)urlRequest;
- (BOOL)isUserInitiated;
- (void).cxx_destruct;

@end
