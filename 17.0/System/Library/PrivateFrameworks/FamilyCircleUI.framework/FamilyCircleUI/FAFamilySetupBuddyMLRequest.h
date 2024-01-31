@class NSString, ACAccount;

@interface FAFamilySetupBuddyMLRequest : AAFamilyRequest

@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount;
@property (copy, nonatomic) NSString *inviteCode;

- (id)urlString;
- (id)urlRequest;
- (BOOL)isUserInitiated;
- (void).cxx_destruct;

@end
