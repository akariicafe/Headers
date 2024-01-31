@class RMRelativeMotionManager;

@interface RMMediaSession : NSObject

@property (retain, nonatomic) RMRelativeMotionManager *manager;
@property (nonatomic) double sessionStartTimestamp;
@property BOOL sessionStartedWithTracking;
@property (nonatomic) long long clientMode;

+ (BOOL)isAvailable;
+ (BOOL)_isClientModeAvailable:(long long)a0;

- (id)_initWithOptions:(id)a0;
- (BOOL)_start;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_stop;
- (long long)_currentAudioListenerPose:(struct { double x0; double x1; double x2; double x3; } *)a0 timestamp:(double *)a1;
- (void)_resetTrackingForAllClients;
- (long long)_currentAudioListenerPose:(id *)a0;
- (BOOL)isAXHeadTrackingSettingEnabled;
- (void)startMonitoringAXHeadTrackingSetting;
- (void)stopMonitoringAXHeadTrackingSetting;

@end
