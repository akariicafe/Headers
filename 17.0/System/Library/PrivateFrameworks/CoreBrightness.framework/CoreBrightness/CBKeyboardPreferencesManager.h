@class NSMutableDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface CBKeyboardPreferencesManager : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_preferences;
}

+ (id)sharedInstance;
+ (id)copyAllPreferences;
+ (id)copyPreferenceForKey:(id)a0;
+ (id)copyPreferenceForKey:(id)a0 keyboardID:(unsigned long long)a1;
+ (BOOL)getBoolPreference:(BOOL *)a0 forKey:(id)a1;
+ (BOOL)getFloatPreference:(float *)a0 forKey:(id)a1;
+ (BOOL)getIntPreference:(int *)a0 forKey:(id)a1;
+ (BOOL)setBoolPreference:(BOOL)a0 forKey:(id)a1;
+ (BOOL)setFloatPreference:(float)a0 forKey:(id)a1;
+ (BOOL)setIntPreference:(int)a0 forKey:(id)a1;
+ (BOOL)setPreference:(id)a0 forKey:(id)a1;

- (id)init;
- (void)dealloc;
- (id)copyAllPrefereneces;
- (id)copyPreferenceForKey:(id)a0;
- (BOOL)setPreference:(id)a0 forKey:(id)a1;

@end
