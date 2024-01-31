@class NSString;

@interface PKAppleAccountInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *aidaAlternateDSID;
@property (copy, nonatomic) NSString *aidaToken;
@property (copy, nonatomic) NSString *aaDSID;
@property (copy, nonatomic) NSString *aaAlternateDSID;
@property (copy, nonatomic) NSString *appleID;
@property (nonatomic) BOOL isSandboxAccount;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *primaryEmailAddress;
@property (copy, nonatomic) NSString *authorizationHeader;

- (void)encodeWithCoder:(id)a0;
- (id)primaryAppleAccountHash;
- (BOOL)aidaAccountAvailable;
- (void).cxx_destruct;
- (id)altDsidAppleAccountHash;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
