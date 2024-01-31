@class NSString, RMConfigurationUIDetails;

@interface RMConfigurationUIItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *declarationIdentifier;
@property (readonly, nonatomic) NSString *declarationServerToken;
@property (readonly, nonatomic) NSString *declarationType;
@property (readonly, nonatomic) RMConfigurationUIDetails *declarationDetails;

+ (id)configurationUIItemWithConfiguration:(id)a0 details:(id)a1;
+ (id)configurationUIItemWithIdentifier:(id)a0 serverToken:(id)a1 type:(id)a2 details:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0 details:(id)a1;
- (id)initWithIdentifier:(id)a0 serverToken:(id)a1 type:(id)a2 details:(id)a3;
- (BOOL)isEqualToConfigurationUI:(id)a0;

@end
