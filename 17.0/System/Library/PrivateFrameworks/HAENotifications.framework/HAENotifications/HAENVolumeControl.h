@interface HAENVolumeControl : NSObject {
    int _pid;
    BOOL _EUVolumeLimitFlagOn;
    BOOL _SKVolumeLimitFlagOn;
    BOOL _haenFeatureEnabled;
    BOOL _mxVolumeLimitOn;
    BOOL _wiredHeadphoneConnected;
    float _targetVolume80dB;
    float _targetVolume74dB;
    struct { float currVolume; float targetVolume; unsigned int volumeAction; } _stats;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lowerHeadphoneVolumeAtNextSession;
}

+ (id)sharedInstance;

- (void)setDeviceInfo:(id)a0;
- (id)init;
- (struct { float x0; float x1; unsigned int x2; })getStats;
- (void)_updateFlags;
- (BOOL)PME_enabled;
- (BOOL)_RLSAllowsMXVolumeLimit;
- (void)_fetchCategory:(struct __CFString { } *)a0 routeInfo:(struct { struct __CFString *x0; struct __CFString *x1; struct __CFString *x2; } *)a1;
- (void)_setMXVolumeLimit:(BOOL)a0;
- (void)_updateMXVolumeLimit;
- (void)applyVolumeLoweringAtNextSession;
- (float)computeLimitedVolume:(float)a0 event:(id)a1 action:(unsigned int *)a2;
- (float)getCurrentVolumeForCategory:(struct __CFString { } *)a0 route:(struct { struct __CFString *x0; struct __CFString *x1; struct __CFString *x2; } *)a1;
- (unsigned int)limitVolume:(id)a0;
- (void)limitVolumeTo:(float)a0 category:(struct __CFString { } *)a1 route:(struct { struct __CFString *x0; struct __CFString *x1; struct __CFString *x2; } *)a2 actionResult:(unsigned int *)a3;
- (void)updateMXVolumeLimitStatus;
- (void)wiredHeadphoneConnected:(BOOL)a0;

@end
