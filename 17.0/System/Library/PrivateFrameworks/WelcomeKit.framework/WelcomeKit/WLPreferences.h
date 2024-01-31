@interface WLPreferences : NSObject

+ (void)setString:(id)a0 forKey:(id)a1;
+ (char)boolForKey:(id)a0;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (id)stringForKey:(id)a0;
+ (void)removeForKey:(id)a0;

@end
