@class NSString, NSSet;

@interface DNDContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *middleName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *nickName;
@property (readonly, copy, nonatomic) NSString *organizationName;
@property (readonly, copy, nonatomic) NSSet *phoneNumbers;
@property (readonly, copy, nonatomic) NSSet *emailAddresses;

+ (id)normalizePhoneNumber:(id)a0;

- (unsigned long long)hash;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_descriptionForRedacted:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContactIdentifier:(id)a0;
- (id)diffDescription;
- (BOOL)matchesContact:(id)a0;
- (id)_initWithContactIdentifier:(id)a0 firstName:(id)a1 middleName:(id)a2 lastName:(id)a3 nickName:(id)a4 organizationName:(id)a5 phoneNumbers:(id)a6 emailAddresses:(id)a7;
- (id)_redactedDescriptionsForStrings:(id)a0;
- (BOOL)matchesContactHandle:(id)a0;
- (id)normalizedPhoneNumbers;

@end
