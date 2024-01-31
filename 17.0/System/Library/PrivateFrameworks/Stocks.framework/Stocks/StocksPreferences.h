@class NSUserDefaults;

@interface StocksPreferences : NSObject {
    NSUserDefaults *_sharedDefaults;
}

@property (readonly, nonatomic, getter=isChangeColorSwapped) BOOL changeColorSwapped;
@property (readonly, nonatomic) unsigned long long textDirection;
@property (readonly, nonatomic) BOOL textAttachmentDirectionIsRightToLeft;

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (id)init;
- (BOOL)boolForKey:(id)a0;
- (void)resetLocale;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (long long)integerForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)synchronize;
- (id)stringForKey:(id)a0;
- (id)objectForKey:(id)a0;

@end
