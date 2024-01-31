@class NSNumber, NSMutableDictionary, NSObject, NSHashTable, NSDate, NSMutableArray, NSLocale;
@protocol OS_os_activity;

@interface AXTapticTimeManager : NSObject {
    NSMutableArray *_enqueuedSounds;
    NSMutableArray *_enqueuedSoundDelays;
    NSHashTable *_observers;
    unsigned int _ssIDHapticFast[24];
    unsigned int _ssIDHapticSlow[24];
    unsigned int _ssIDHapticMorse[10];
    NSMutableDictionary *_soundToPatterns;
    NSMutableDictionary *_hapticsDescriptions;
    BOOL _is24Hour;
    NSNumber *_cachedSpeed;
    long long _currentSsid;
    NSObject<OS_os_activity> *_activity;
    struct os_activity_scope_state_s { unsigned long long opaque[2]; } _scopeState;
}

@property (nonatomic) unsigned int assertionID;
@property (copy, nonatomic) id /* block */ testingQueueCallback;
@property (retain, nonatomic) NSLocale *localeOverride;
@property (retain, nonatomic) NSDate *dateOverride;
@property (readonly, nonatomic) BOOL isCurrentlyOutputting;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_localeDidChange:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (long long)_numberOfTapMinutesForClockTime;
- (id)_atomToLegacyVibePattern:(id)a0;
- (void)_cleanupHapticsDict;
- (void)_clearQueue;
- (id)_convertSoundToStringName:(unsigned int)a0;
- (id)_dateComponentsForClockTime;
- (void)_dequeueSound;
- (void)_enqueueHours:(unsigned long long)a0 encoding:(long long)a1;
- (void)_enqueueMinutes:(unsigned long long)a0 encoding:(long long)a1;
- (void)_handleTestingQueueCallback;
- (void)_informObserversDidOutputSSID:(long long)a0;
- (void)_informObserversDidStart;
- (void)_informObserversDidStop;
- (void)_informObserversWillOutputSSID:(long long)a0 hapticsDescriptions:(id)a1;
- (BOOL)_is24HourTime;
- (long long)_numberOfTapHoursForClockTimeWithEncoding:(long long)a0;
- (long long)_numberOfTapsForHourNumber:(long long)a0 withEncoding:(long long)a1;
- (void)_outputWithEnqueueBlock:(id /* block */)a0;
- (BOOL)_preStartCheck;
- (BOOL)_startPowerAssertion;
- (void)_stopPowerAssertion;
- (void)_updateHapticPatternsIfNecessary:(BOOL)a0;
- (void)_updateIs24HourTime;
- (void)outputHours:(long long)a0;
- (void)outputHoursAndMinutes:(long long)a0;
- (void)outputMinutes:(long long)a0;
- (void)stopCurrentOutput;

@end
