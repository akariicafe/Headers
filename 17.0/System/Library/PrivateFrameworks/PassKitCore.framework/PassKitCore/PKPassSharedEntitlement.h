@class NSString, PKPassShareTimeConfiguration;

@interface PKPassSharedEntitlement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *entitlementIdentifier;
@property (retain, nonatomic) PKPassShareTimeConfiguration *timeConfiguration;
@property (nonatomic) unsigned long long recipientShareability;
@property (nonatomic) unsigned long long recipientManageability;
@property (nonatomic) unsigned long long recipientVisibility;
@property (readonly, nonatomic) unsigned long long carKeyEntitlementValue;
@property (nonatomic) long long creationVersion;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)initWithEntitlement:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCarKeyEntitlementValue:(unsigned long long)a0;

@end
