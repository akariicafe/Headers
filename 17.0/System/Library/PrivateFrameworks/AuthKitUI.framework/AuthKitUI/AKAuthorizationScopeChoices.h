@class NSString, NSArray, AKUserInformation, AKAuthorizationUserResponse;
@protocol AKCredentialRequestProtocol;

@interface AKAuthorizationScopeChoices : NSObject

@property (class, readonly, nonatomic) NSString *localizedGivenNameLabel;
@property (class, readonly, nonatomic) NSString *localizedFamilyNameLabel;

@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) AKUserInformation *userInformation;
@property (retain, nonatomic) id<AKCredentialRequestProtocol> selectedRequest;
@property (nonatomic) unsigned long long indexOfChosenEmail;
@property (nonatomic) unsigned long long indexOfChosenLogin;
@property (nonatomic) BOOL wantsPrivateEmail;
@property (readonly, nonatomic) unsigned long long emailCount;
@property (readonly, nonatomic) NSString *chosenEmail;
@property (readonly, nonatomic) NSString *forwardingEmail;
@property (readonly, nonatomic) AKAuthorizationUserResponse *userResponse;
@property (readonly, nonatomic) unsigned long long personNameComponentsOrder;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedChosenEmail;

+ (id)_dotsWithLength:(unsigned long long)a0;
+ (id)obfuscatedEmail:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_userSelection;
- (id)_personNameComponents;
- (id)initWithScopes:(id)a0 userInformation:(id)a1;
- (id)emailAtIndex:(unsigned long long)a0;
- (void)setGivenName:(id)a0 familyName:(id)a1;

@end
