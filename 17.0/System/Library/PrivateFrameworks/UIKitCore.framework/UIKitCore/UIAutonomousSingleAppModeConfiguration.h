@class NSDictionary, NSMutableDictionary;

@interface UIAutonomousSingleAppModeConfiguration : NSObject <NSCopying> {
    NSMutableDictionary *_propertiesAsDictionary;
}

@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL allowsLockButton;
@property (nonatomic) BOOL allowsAutoLock;
@property (nonatomic) BOOL allowsAccessibilityShortcut;
@property (nonatomic) BOOL automaticallyRelaunchesAfterAppCrash;
@property (retain, nonatomic) NSDictionary *managedConfigurationSettings;
@property (readonly, nonatomic) NSDictionary *propertiesAsDictionary;

+ (id)defaultConfiguration;
+ (id)defaultConfigurationForStyle:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)__gaxTrampoline_defaultBoolValueForFeatureKey:(id)a0;
- (BOOL)_boolValueForFeatureKey:(id)a0;
- (void)_setBoolValue:(BOOL)a0 forFeatureKey:(id)a1;

@end
