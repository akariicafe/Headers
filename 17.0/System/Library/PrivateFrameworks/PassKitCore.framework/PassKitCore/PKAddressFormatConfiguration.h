@class PKContactFieldConfiguration;

@interface PKAddressFormatConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKContactFieldConfiguration *streetFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *subLocalityFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *cityFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *subAdministrativeAreaFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *stateFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *postalCodeFieldConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
