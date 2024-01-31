@class NSArray, NEPerApp;

@interface NERelayConfiguration : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (getter=isEnabled) BOOL enabled;
@property (copy) NSArray *relays;
@property (copy) NSArray *matchDomains;
@property (copy) NSArray *excludedDomains;
@property (copy) NEPerApp *perApp;
@property (copy) NSArray *onDemandRules;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)init;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)overlapsWithRelayConfiguration:(id)a0;
- (BOOL)overlapsWithAppVPNConfiguration:(id)a0;
- (BOOL)overlapsWithVPNConfiguration:(id)a0;

@end
