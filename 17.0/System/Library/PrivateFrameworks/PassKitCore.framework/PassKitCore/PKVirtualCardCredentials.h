@class NSString;

@interface PKVirtualCardCredentials : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *primaryAccountNumber;
@property (copy, nonatomic) NSString *cardSecurityCode;
@property (nonatomic) long long cardType;
@property (copy, nonatomic) NSString *expiration;
@property (copy, nonatomic) NSString *formattedExpiration;

+ (id)demoVPANCredentials;
+ (id)formattedDateStringFromServerDateString:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEncryptedCardData:(id)a0 ephemeralPublicKey:(id)a1 privateKey:(struct __SecKey { } *)a2 error:(id *)a3;
- (id)initWithVPANPaymentCredentialResponse:(id)a0 privateKey:(struct __SecKey { } *)a1 error:(id *)a2;

@end
