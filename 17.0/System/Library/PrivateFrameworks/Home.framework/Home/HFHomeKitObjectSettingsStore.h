@interface HFHomeKitObjectSettingsStore : NSObject

+ (id)stringValueForSetting:(long long)a0 onObject:(id)a1;
+ (id)setTileSize:(id)a0 forObject:(id)a1;
+ (id)setValue:(id)a0 forSetting:(long long)a1 onObject:(id)a2;
+ (id)setValue:(id)a0 forSetting:(long long)a1 onObject:(id)a2 inLocation:(long long)a3;
+ (id)tileSizeForObject:(id)a0;
+ (id)valueForSetting:(long long)a0 onObject:(id)a1;
+ (id)valueForSetting:(long long)a0 onObject:(id)a1 inLocation:(long long)a2;

- (id)init;
- (void).cxx_destruct;

@end
