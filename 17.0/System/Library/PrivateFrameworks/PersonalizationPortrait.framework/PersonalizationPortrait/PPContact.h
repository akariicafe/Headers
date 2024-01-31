@class NSString, NSDateComponents, NSArray;

@interface PPContact : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned char source;
@property (readonly, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *middleName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *nameSuffix;
@property (readonly, nonatomic) NSString *nickname;
@property (readonly, nonatomic) NSString *localizedFullName;
@property (readonly, nonatomic) NSString *organizationName;
@property (readonly, nonatomic) NSString *jobTitle;
@property (readonly, nonatomic) NSDateComponents *birthday;
@property (readonly, nonatomic) NSDateComponents *nonGregorianBirthday;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSArray *socialProfiles;
@property (readonly, nonatomic) NSArray *postalAddresses;

+ (id)contactsContactIdentifierWithIdentifier:(id)a0 error:(id *)a1;
+ (BOOL)identifier:(id)a0 startsWithPrefix:(id)a1;
+ (id)contactWithIdentifier:(id)a0 source:(unsigned char)a1 namePrefix:(id)a2 givenName:(id)a3 middleName:(id)a4 familyName:(id)a5 nameSuffix:(id)a6 nickname:(id)a7 localizedFullName:(id)a8 organizationName:(id)a9 jobTitle:(id)a10 birthday:(id)a11 nonGregorianBirthday:(id)a12 phoneNumbers:(id)a13 emailAddresses:(id)a14 socialProfiles:(id)a15 postalAddresses:(id)a16;
+ (id)sourceIdentifierWithSource:(unsigned char)a0 identifier:(id)a1;
+ (unsigned char)sourceFromSourceIdentifier:(id)a0;
+ (long long)foundInAppsRecordIdentifierNumberWithIdentifier:(id)a0 error:(id *)a1;

- (void)setEmailAddressForTesting:(id)a0;
- (unsigned long long)hash;
- (void)_generateLocalizedFullName;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToContact:(id)a0;
- (id)initWithIdentifier:(id)a0 source:(unsigned char)a1 namePrefix:(id)a2 givenName:(id)a3 middleName:(id)a4 familyName:(id)a5 nameSuffix:(id)a6 nickname:(id)a7 localizedFullName:(id)a8 organizationName:(id)a9 jobTitle:(id)a10 birthday:(id)a11 nonGregorianBirthday:(id)a12 phoneNumbers:(id)a13 emailAddresses:(id)a14 socialProfiles:(id)a15 postalAddresses:(id)a16;
- (void)setIdentifierForTesting:(id)a0;
- (id)description;
- (id)contactsContactIdentifierWithError:(id *)a0;
- (id)initWithFoundInAppsContact:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithContactsContact:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)foundInAppsRecordIdentifierNumberWithError:(id *)a0;

@end
