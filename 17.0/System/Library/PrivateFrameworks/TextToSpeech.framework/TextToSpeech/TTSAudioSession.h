@class NSObject;
@protocol OS_dispatch_queue;

@interface TTSAudioSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _audioSessionIsSetUp;
    struct { long long category; long long activity; } _desiredState;
    struct { long long category; long long activity; } _cachedState;
    BOOL _bluetoothAllowed;
    struct __CFBag { } *_activityBag;
    long long _serverGeneration;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_mediaServicesWereReset:(id)a0;
- (void).cxx_destruct;
- (void)_audioSessionInterrupted:(id)a0;
- (long long)_nextActivityForActive:(BOOL)a0 activity:(long long)a1 serverActivity:(long long)a2;
- (long long)_safeServerGeneration;
- (void)_safeSetActive:(BOOL)a0 withActivity:(long long)a1;
- (void)_safeSetBluetoothInputAllowed:(BOOL)a0;
- (void)_safeSetCategoryForActivity:(long long)a0;
- (void)_safeSetupAudioSession;
- (void)_setCategoryForActivity:(long long)a0;
- (void)_setupAudioSession;

@end
