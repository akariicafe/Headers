@class NSString, NSSet;

@interface FKPaymentPass : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSSet *associatedApplicationIdentifiers;
@property (copy, nonatomic) NSString *issuerCountryCode;
@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *primaryPaymentApplicationPaymentType;
@property (copy, nonatomic) NSString *primaryPaymentApplicationDisplayName;
@property (copy, nonatomic) NSString *partnerOrgID;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
