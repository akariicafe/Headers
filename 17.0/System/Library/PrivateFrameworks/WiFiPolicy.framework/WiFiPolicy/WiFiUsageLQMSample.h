@interface WiFiUsageLQMSample : NSObject

+ (void)initialize;
+ (id)featureFromFieldName:(id)a0;
+ (id)allLQMProperties;
+ (id)binLabelfromFieldName:(id)a0 value:(long long)a1;
+ (BOOL)isPerSecond:(id)a0;
+ (long long)subtract:(long long)a0 From:(long long)a1;

- (id)description;
- (id)asDictionaryInto:(id)a0;
- (id)numberForKeyPath:(id)a0;

@end
