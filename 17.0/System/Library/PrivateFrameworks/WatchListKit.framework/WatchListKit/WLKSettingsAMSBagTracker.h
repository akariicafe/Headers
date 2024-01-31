@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject

@property (retain, nonatomic) NSDictionary *trackedBagKeys;

+ (id)sharedTracker;

- (id)init;
- (id)isSportsEnabled;
- (void)_updateKeys:(id)a0;
- (void)updateTrackedBagValues;
- (void)_updateBoolValueForTrackedKey:(id)a0;
- (void)_setIsSportsEnabled:(BOOL)a0;
- (BOOL)_amsBagBoolValueForKey:(id)a0;
- (id)isNowPlayingEnabled;
- (void)updateTrackedBagValuesWithChangedKeys:(id)a0;
- (void).cxx_destruct;
- (void)_setIsNowPlayingEnabled:(BOOL)a0;

@end
