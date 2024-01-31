@class NSNumber;

@interface HPSNumberSetting : HPSSetting

@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, nonatomic) float floatValue;
@property (readonly, nonatomic) double doubleValue;

+ (Class)valueClass;
+ (id)settingWithKeyPath:(id)a0 numberValue:(id)a1;

- (id)homeAdapterLegacySettingValue;
- (id)initWithKeyPath:(id)a0 numberValue:(id)a1;

@end
