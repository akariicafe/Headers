@class HUComfortSound;

@interface HUComfortSoundsSettings : HCSettings

@property (nonatomic) BOOL comfortSoundsEnabled;
@property (nonatomic) BOOL mixesWithMedia;
@property (nonatomic) BOOL stopsOnLock;
@property (retain, nonatomic) HUComfortSound *selectedComfortSound;
@property (nonatomic) double relativeVolume;
@property (nonatomic) double mediaVolume;
@property (nonatomic) double lastEnablementTimestamp;
@property (nonatomic) BOOL forceMixingBehavior;

+ (id)sharedInstance;

- (BOOL)shouldStoreLocally;
- (id)keysToSync;
- (void)logMessage:(id)a0;
- (void)reset;
- (double)mediaVolume;
- (double)relativeVolume;
- (void)setMediaVolume:(double)a0;
- (void)setForceMixingBehavior:(BOOL)a0;
- (void)setStopsOnLock:(BOOL)a0;
- (double)lastEnablementTimestamp;
- (BOOL)comfortSoundsAvailable;
- (void)setMixesWithMedia:(BOOL)a0;
- (BOOL)stopsOnLock;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)setRelativeVolume:(double)a0;
- (void)setLastEnablementTimestamp:(double)a0;
- (BOOL)forceMixingBehavior;
- (BOOL)comfortSoundsEnabled;
- (void)setComfortSoundsEnabled:(BOOL)a0;
- (BOOL)mixesWithMedia;
- (id)preferenceDomainForPreferenceKey:(id)a0;

@end
