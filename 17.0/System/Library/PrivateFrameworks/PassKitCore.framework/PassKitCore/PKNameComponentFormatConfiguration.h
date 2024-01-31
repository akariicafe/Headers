@class PKContactFieldConfiguration;

@interface PKNameComponentFormatConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKContactFieldConfiguration *givenNameFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *familyNameFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *phoneticGivenNameFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *phoneticFamilyNameFieldConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
