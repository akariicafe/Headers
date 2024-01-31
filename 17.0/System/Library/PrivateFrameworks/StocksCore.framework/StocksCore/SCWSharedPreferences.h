@class NSUserDefaults;

@interface SCWSharedPreferences : NSObject {
    NSUserDefaults *_sharedDefaults;
}

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)synchronize;
- (id)objectForKey:(id)a0;

@end
