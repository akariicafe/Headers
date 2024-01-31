@class NSDictionary, _UIPhysicalButtonConfigurationSet;

@interface _UIPhysicalButtonConfigurationResolutionContext : NSObject <NSCopying>

@property (copy, nonatomic) _UIPhysicalButtonConfigurationSet *configurations;
@property (copy, nonatomic) NSDictionary *configurationToInteractionMap;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
