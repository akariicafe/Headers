@class DIIdentityElement;

@interface PKIdentityElement : NSObject <NSCopying>

@property (class, readonly, nonatomic) PKIdentityElement *givenNameElement;
@property (class, readonly, nonatomic) PKIdentityElement *familyNameElement;
@property (class, readonly, nonatomic) PKIdentityElement *portraitElement;
@property (class, readonly, nonatomic) PKIdentityElement *addressElement;
@property (class, readonly, nonatomic) PKIdentityElement *issuingAuthorityElement;
@property (class, readonly, nonatomic) PKIdentityElement *documentIssueDateElement;
@property (class, readonly, nonatomic) PKIdentityElement *documentExpirationDateElement;
@property (class, readonly, nonatomic) PKIdentityElement *documentNumberElement;
@property (class, readonly, nonatomic) PKIdentityElement *drivingPrivilegesElement;
@property (class, readonly, nonatomic) PKIdentityElement *ageElement;
@property (class, readonly, nonatomic) PKIdentityElement *dateOfBirthElement;

@property (retain, nonatomic) DIIdentityElement *wrapped;

+ (id)ageThresholdElementWithAge:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDIIdentityElement;
- (id)initWithDIIdentityElement:(id)a0;

@end
