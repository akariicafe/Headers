@class NSDictionary;

@interface DNDAppConfigurationTargetContentIdentifierPrefixesBox : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *appConfigurationTargetContentIdentifierPrefixesForModeIdentifier;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
