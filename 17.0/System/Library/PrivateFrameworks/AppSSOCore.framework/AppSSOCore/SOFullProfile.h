@class NSString, NSDictionary;

@interface SOFullProfile : SOProfile <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *extensionTeamIdentifier;
@property (retain, nonatomic) NSDictionary *extensionData;
@property (retain, nonatomic) NSString *pssoRegistrationToken;
@property (retain, nonatomic) NSDictionary *platformSSO;

+ (long long)authMethodWithString:(id)a0;
+ (long long)screenLockedBehaviorWithString:(id)a0;
+ (long long)profileTypeWithString:(id)a0;

- (id)initWithProfileData:(id)a0;
- (id)copyProfileForClient;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)removeURLPrefix:(id)a0;
- (void).cxx_destruct;
- (id)copyProfile;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
