@protocol KGPropertyTypeProtocol;

@interface KGPropertyValue : NSObject

@property (readonly, nonatomic) unsigned long long dataType;
@property (readonly, nonatomic) id<KGPropertyTypeProtocol> kgPropertyValue;

+ (id)kgPropertiesWithMAProperties:(id)a0;
+ (id)kgPropertyValueWithMAPropertyValue:(id)a0;

- (id)description;
- (id)initForSubclasses;

@end
