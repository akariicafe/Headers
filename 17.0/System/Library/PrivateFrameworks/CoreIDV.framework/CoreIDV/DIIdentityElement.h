@class NSString;

@interface DIIdentityElement : NSObject <NSCopying>

@property (class, readonly, nonatomic) DIIdentityElement *givenNameElement;
@property (class, readonly, nonatomic) DIIdentityElement *familyNameElement;
@property (class, readonly, nonatomic) DIIdentityElement *portraitElement;
@property (class, readonly, nonatomic) DIIdentityElement *addressElement;
@property (class, readonly, nonatomic) DIIdentityElement *issuingAuthorityElement;
@property (class, readonly, nonatomic) DIIdentityElement *documentIssueDateElement;
@property (class, readonly, nonatomic) DIIdentityElement *documentExpirationDateElement;
@property (class, readonly, nonatomic) DIIdentityElement *documentNumberElement;
@property (class, readonly, nonatomic) DIIdentityElement *drivingPrivilegesElement;
@property (class, readonly, nonatomic) DIIdentityElement *ageElement;
@property (class, readonly, nonatomic) DIIdentityElement *dateOfBirthElement;

@property (readonly, nonatomic) NSString *identifier;

+ (id)ageThresholdElementWithAge:(long long)a0;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
