@class NSString, SFAppleIDValidationRecord, SFAppleIDContactInfo, NSDate, NSData, SFAppleIDIdentity;

@interface SFAppleIDAccount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSString *certificateToken;
@property (retain, nonatomic) NSDate *certificateTokenCreationDate;
@property (retain, nonatomic) SFAppleIDContactInfo *contactInfo;
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) SFAppleIDIdentity *identity;
@property (retain, nonatomic) NSData *privateKeyPersistentReference;
@property (retain, nonatomic) SFAppleIDValidationRecord *validationRecord;

- (id)initWithAppleID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAccount:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
