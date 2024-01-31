@class NSSet;

@interface MOWebDomainSetSettingMetadata : MOSetSettingMetadata

@property (readonly, nonatomic) NSSet *defaultValue;

- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;
- (id)persistableValueFromValue:(id)a0;

@end
