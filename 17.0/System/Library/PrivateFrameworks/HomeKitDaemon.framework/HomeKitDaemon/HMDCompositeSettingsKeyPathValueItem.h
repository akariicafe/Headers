@class NSString, HMDCompositeSettingValue;

@interface HMDCompositeSettingsKeyPathValueItem : NSObject

@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) HMDCompositeSettingValue *value;

- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0 value:(id)a1;

@end
