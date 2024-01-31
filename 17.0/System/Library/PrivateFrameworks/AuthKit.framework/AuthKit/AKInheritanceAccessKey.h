@class NSUUID, NSData, NSString;

@interface AKInheritanceAccessKey : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *beneficiaryID;
@property (retain, nonatomic) NSData *wrappingKeyData;
@property (retain, nonatomic) NSString *wrappingKeyString;
@property (retain, nonatomic) NSData *wrappedKeyData;
@property (retain, nonatomic) NSString *wrappedKeyString;
@property (retain, nonatomic) NSData *claimTokenData;
@property (retain, nonatomic) NSString *claimTokenString;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBeneficiairyIdentifier:(id)a0;

@end
