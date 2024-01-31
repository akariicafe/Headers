@class NSArray, NSMutableDictionary;

@interface _UIPrototypingSettingsManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *storedSettings;
@property (readonly, nonatomic) NSArray *allSettings;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)deleteAllStoredSettings;
- (id)settingOfType:(long long)a0 withName:(id)a1;
- (void)synchronizeStoredSettings;

@end
