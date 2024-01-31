@class NSString;

@interface PKPassShareActivationOption : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) long long valueLength;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizationKeyPostfix;

+ (id)vehicleEnteredPin;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCarKeyIdentifier:(id)a0;
- (id)initWithDefaultIdentifierForType:(unsigned long long)a0;
- (BOOL)isEqualToPassShareActivationOption:(id)a0;

@end
