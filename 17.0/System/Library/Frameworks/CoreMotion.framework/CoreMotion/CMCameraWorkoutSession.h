@class CMAudioAccessoryManager, NSObject;
@protocol OS_dispatch_source;

@interface CMCameraWorkoutSession : NSObject {
    struct unique_ptr<CMCameraWorkoutLogger, std::default_delete<CMCameraWorkoutLogger>> { struct __compressed_pair<CMCameraWorkoutLogger *, std::default_delete<CMCameraWorkoutLogger>> { struct CMCameraWorkoutLogger *__value_; } __ptr_; } _logger;
    CMAudioAccessoryManager *_audioAccessoryManager;
    struct Dispatcher { void /* function */ **x0; id x1; } *_deviceMotionDispatcher;
    struct Dispatcher { void /* function */ **x0; id x1; } *_accelerometerDispatcher;
    struct Dispatcher { void /* function */ **x0; id x1; } *_gyroDispatcher;
    struct Dispatcher { void /* function */ **x0; id x1; } *_gyroTemperatureDispatcher;
    BOOL _logAirpodsDM;
    BOOL _logDM;
    BOOL _logAccel;
    BOOL _logGyro;
    NSObject<OS_dispatch_source> *_logCountersTimer;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _accelCount;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _gyroCount;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _dmCount;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _airpodsDmCount;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _skeletonCount;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _facePoseCount;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _watchActiveCalorieCount;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _watchBasalCalorieCount;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _watchHeartRateCount;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _heartRateReferenceCount;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _fitnessMachineSampleCount;
}

- (id)stats;
- (id)init;
- (void)dealloc;
- (void)start;
- (id).cxx_construct;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)_feedHeadAccessoryDeviceMotion:(id)a0;
- (void)_feed2DSkeleton:(id)a0 localMachtime:(double)a1 globalMachtime:(double)a2;
- (void)_feed3DLiftedSkeleton:(id)a0 localMachtime:(double)a1 globalMachtime:(double)a2;
- (void)_feed3DRetargetedSkeleton:(id)a0 localMachtime:(double)a1 globalMachtime:(double)a2;
- (void)_feedAccel:(const struct Sample { double x0; struct { float x0; float x1; float x2; } x1; } *)a0;
- (void)_feedAccessoryConfig:(const void *)a0;
- (void)_feedAccessoryInEarStatus:(int)a0;
- (void)_feedDeviceMotion:(const struct Sample { double x0; struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; float x8; BOOL x9; BOOL x10; int x11; } x1; struct { float x0; } x2; BOOL x3; unsigned int x4; unsigned char x5; struct Status { unsigned short x0; } x6; float x7; } *)a0;
- (void)_feedGyro:(const struct Sample { double x0; struct { float x0; float x1; float x2; } x1; unsigned short x2; BOOL x3; } *)a0;
- (void)_feedGyroTemperature:(const struct Temperature { double x0; float x1; } *)a0;
- (void)feedBodyMetrics:(id)a0;
- (void)feedFacePose:(id)a0;
- (void)feedFitnessMachineSample:(id)a0;
- (void)feedHeartRateReference:(unsigned short)a0 localMachtime:(double)a1 globalMachtime:(double)a2;
- (void)feedSkeleton:(id)a0;
- (void)feedWatchActiveCalories:(float)a0 localMachtime:(double)a1 globalMachtime:(double)a2;
- (void)feedWatchBasalCalories:(float)a0 localMachtime:(double)a1 globalMachtime:(double)a2;
- (void)feedWatchHeartRate:(float)a0 confidence:(float)a1 localMachtime:(double)a2 globalMachtime:(double)a3;
- (void)feedWorkoutEvent:(id)a0;
- (void)flushMsl;
- (void)logCounters;

@end
