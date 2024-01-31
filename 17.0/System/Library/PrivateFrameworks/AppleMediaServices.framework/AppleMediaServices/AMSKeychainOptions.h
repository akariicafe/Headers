@class NSString;

@interface AMSKeychainOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) unsigned long long preferredAttestationStyle;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *clientCertLabel;
@property (copy, nonatomic) NSString *intermediateCertLabel;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long purpose;
@property (nonatomic) BOOL regenerateKeys;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL authenticationFallbackVisible;
@property (nonatomic) BOOL displayAuthenticationReason;
@property (copy, nonatomic) NSString *prompt;

- (id)init;
- (id)optionsDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithOptionsDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_compareString:(id)a0 withString:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
