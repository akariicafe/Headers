@class NSString, TLAlertConfiguration;
@protocol TLAlertPlaybackObserver;

@interface TLAlert : NSObject {
    long long _instanceIndex;
}

@property (readonly, nonatomic) BOOL _hasSynchronizedVibrationUnmatchedWithTone;
@property (weak, nonatomic) id<TLAlertPlaybackObserver> playbackObserver;
@property (readonly, nonatomic) TLAlertConfiguration *configuration;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *toneIdentifier;
@property (readonly, nonatomic) NSString *vibrationIdentifier;

+ (id)alertWithConfiguration:(id)a0;
+ (BOOL)_stopAllAlerts;
+ (long long)_currentOverridePolicyForType:(long long)a0;
+ (void)_setCurrentOverridePolicy:(long long)a0 forType:(long long)a1;
+ (void)_setWatchPrefersSalientToneAndVibration:(BOOL)a0;
+ (BOOL)_watchPrefersSalientToneAndVibration;
+ (void)playAlertForType:(long long)a0;
+ (void)playToneAndVibrationForType:(long long)a0;

- (void)play;
- (void)stop;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)debugDescription;
- (void)playWithCompletionHandler:(id /* block */)a0;
- (void)preheatWithCompletionHandler:(id /* block */)a0;
- (void)_updateAudioVolumeDynamicallyToValue:(float)a0;
- (id)_descriptionForDebugging:(BOOL)a0;
- (id)initWithType:(long long)a0 accountIdentifier:(id)a1;
- (id)_initWithConfiguration:(id)a0 toneIdentifier:(id)a1 vibrationIdentifier:(id)a2 hasSynchronizedVibrationUnmatchedWithTone:(BOOL)a3;
- (id)initWithType:(long long)a0 toneIdentifier:(id)a1 vibrationIdentifier:(id)a2;
- (BOOL)playWithCompletionHandler:(id /* block */)a0 targetQueue:(id)a1;
- (void)stopWithOptions:(id)a0;

@end
