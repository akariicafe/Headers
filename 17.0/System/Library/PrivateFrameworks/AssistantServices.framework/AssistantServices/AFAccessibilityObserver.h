@class NSObject, NSHashTable, AFAccessibilityState;
@protocol OS_dispatch_queue;

@interface AFAccessibilityObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    AFAccessibilityState *_state;
    unsigned long long _stateDirtyFlags;
    NSHashTable *_listeners;
}

@property (readonly, copy, nonatomic) AFAccessibilityState *state;

+ (id)sharedObserver;

- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)getStateWithCompletion:(id /* block */)a0;
- (id)init;
- (id)currentState;
- (void).cxx_destruct;
- (BOOL)_fetchIsVibrationDisabled;
- (BOOL)_fetchIsVoiceOverTouchEnabled;
- (void)_setState:(id)a0 clearDirtyFlags:(unsigned long long)a1;
- (void)_updateVibrationDisabledPreference;
- (void)_updateVoiceOverTouchEnabledPreference;
- (void)vibrationDisabledPreferenceDidChange:(id)a0;
- (void)voiceOverTouchEnabledPreferenceDidChange:(id)a0;

@end
