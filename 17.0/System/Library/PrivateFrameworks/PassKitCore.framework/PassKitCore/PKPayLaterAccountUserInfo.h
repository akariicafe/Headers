@class PKPayLaterAccountUserInfoValue, CNContact;

@interface PKPayLaterAccountUserInfo : NSObject <NSSecureCoding, NSCopying> {
    CNContact *_contact;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *emailAddress;
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *firstName;
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *lastName;
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *dateOfBirth;
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *phoneNumber;
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *street1;
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *street2;
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *city;
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *state;
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *postalCode;
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *ssn;
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *yearlyIncome;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)contact;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasUserInfo;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
