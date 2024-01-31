@class NSUserDefaults, NSMutableDictionary;

@interface ADDeviceConfiguration : NSObject {
    NSUserDefaults *_globalUserDefaults;
    NSUserDefaults *_appleDepthUserDefaults;
    NSMutableDictionary *_currentDefaults;
    BOOL _ignoreValueUpdate;
}

+ (BOOL)boolForKey:(id)a0;
+ (float)floatForKey:(id)a0;
+ (id)sharedConfiguration;
+ (id)numberForKey:(id)a0;
+ (double)doubleForKey:(id)a0;
+ (BOOL)isInternalBuild;
+ (long long)integerForKey:(id)a0;
+ (id)listForKey:(id)a0;
+ (id)stringForKey:(id)a0;
+ (BOOL)deviceList:(id)a0 containsDeviceName:(id)a1;
+ (id)getDefaultConfiguration;
+ (id)getDeviceName;
+ (unsigned long long)getLidarType:(id)a0;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)createPropertyForKey:(id)a0;
- (void)updateValue:(id)a0 forKey:(id)a1;

@end
