@class NSString;

@interface SASettingAppearanceEntity : SASettingEntity

@property (copy, nonatomic) NSString *previousValue;
@property (copy, nonatomic) NSString *value;

+ (id)appearanceEntity;
+ (id)appearanceEntityWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
