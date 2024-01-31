@class CHHapticEngine, NSString, AVSystemController, NSDictionary, NSDate, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface _UIKBFeedbackGenerator : NSObject <_UIKBFeedbackGenerating> {
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_soundsDefaults;
    int _ringerStateNotifyToken;
    BOOL _isActive;
    NSDate *_engineStartDate;
    double _engineActiveDuration;
    unsigned long long _engineStartCount;
    unsigned long long _actionCount;
    AVSystemController *_avSystemController;
    float _volume;
    BOOL _isFeedbackDisabled;
    BOOL _isAudioOnly;
    BOOL _usesCoreHapticsForAudioOnly;
    CHHapticEngine *_engine;
    NSDictionary *_players;
    NSDictionary *_systemSounds;
    double _lastActionTime;
    BOOL __isEngineRunning;
    long long __mode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_serverConnectionDiedNotification:(id)a0;
- (void)actionOccurred:(long long)a0;
- (void)_stopEngineDueToIdle;
- (void)_effectiveVolumeDidChangeNotification:(id)a0;
- (void)activateWithCompletionBlock:(id /* block */)a0;
- (void)_keyboardPreferencesDidUpdateNotification:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)isActive;
- (void)actionOccurred:(long long)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_stopEngineForApplicationNotification:(id)a0;
- (void)deactivate;
- (void)_dictationDidEndNotification:(id)a0;
- (void)_dictationDidBeginNotification:(id)a0;

@end
