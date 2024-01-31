@interface iFBKUtils : NSObject

+ (void)setPreferencesValue:(id)a0 forKey:(id)a1 domain:(struct __CFString { } *)a2;
+ (BOOL)deviceSupportsFaceID;
+ (void)addToHomeScreen;
+ (void)exitCaptiveModeRemovingFromHomeScreen:(BOOL)a0;
+ (id)getPreferencesValueforKey:(id)a0 domain:(struct __CFString { } *)a1;
+ (void)removeFromHomeScreen;
+ (void)setFBKVisibleInHomeScreen:(BOOL)a0;

@end
