@class NSString, HKMedicalDate, NSArray;

@interface HKSignedClinicalDataSubject : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) HKMedicalDate *birthDate;
@property (readonly, copy, nonatomic) NSString *gender;
@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSArray *phoneNumbers;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, copy, nonatomic) NSArray *addresses;
@property (readonly, copy, nonatomic) NSString *maritalStatus;
@property (readonly, copy, nonatomic) NSString *race;
@property (readonly, copy, nonatomic) NSString *ethnicity;
@property (readonly, copy, nonatomic) NSString *birthSex;

+ (id)subjectWithFullName:(id)a0 birthDate:(id)a1 gender:(id)a2 emailAddresses:(id)a3 phoneNumbers:(id)a4;
+ (id)subjectWithFullName:(id)a0 birthDate:(id)a1 gender:(id)a2 emailAddresses:(id)a3 phoneNumbers:(id)a4 identifiers:(id)a5 addresses:(id)a6 maritalStatus:(id)a7 race:(id)a8 ethnicity:(id)a9 birthSex:(id)a10;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFullName:(id)a0 birthDate:(id)a1 gender:(id)a2 emailAddresses:(id)a3 phoneNumbers:(id)a4 identifiers:(id)a5 addresses:(id)a6 maritalStatus:(id)a7 race:(id)a8 ethnicity:(id)a9 birthSex:(id)a10;

@end
