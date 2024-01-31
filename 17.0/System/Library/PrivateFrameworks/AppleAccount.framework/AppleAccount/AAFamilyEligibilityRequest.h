@class ACAccount;

@interface AAFamilyEligibilityRequest : AAFamilyRequest

@property (retain, nonatomic) ACAccount *iTunesAccount;

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;

@end
