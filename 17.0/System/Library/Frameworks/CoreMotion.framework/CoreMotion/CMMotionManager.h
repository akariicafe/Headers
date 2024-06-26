@class CMGyroData, CMMagnetometerData, CMAccelerometerData, CMAmbientPressureData, CMDeviceMotion;

@interface CMMotionManager : NSObject {
    id _internal;
}

@property (readonly, nonatomic, getter=isSidebandSensorFusionAvailable) BOOL sidebandSensorFusionAvailable;
@property (readonly, nonatomic, getter=isPredictedDeviceMotionAvailable) BOOL predictedDeviceMotionAvailable;
@property (readonly) CMAmbientPressureData *ambientPressureData;
@property (readonly) CMAmbientPressureData *compensatedAmbientPressureData;
@property (readonly, nonatomic, getter=isDeviceMotionLiteAvailable) BOOL isDeviceMotionLiteAvailable;
@property (nonatomic) double accelerometerUpdateInterval;
@property (readonly, nonatomic, getter=isAccelerometerAvailable) BOOL accelerometerAvailable;
@property (readonly, nonatomic, getter=isAccelerometerActive) BOOL accelerometerActive;
@property (readonly) CMAccelerometerData *accelerometerData;
@property (nonatomic) double gyroUpdateInterval;
@property (readonly, nonatomic, getter=isGyroAvailable) BOOL gyroAvailable;
@property (readonly, nonatomic, getter=isGyroActive) BOOL gyroActive;
@property (readonly) CMGyroData *gyroData;
@property (nonatomic) double magnetometerUpdateInterval;
@property (readonly, nonatomic, getter=isMagnetometerAvailable) BOOL magnetometerAvailable;
@property (readonly, nonatomic, getter=isMagnetometerActive) BOOL magnetometerActive;
@property (readonly) CMMagnetometerData *magnetometerData;
@property (nonatomic) double deviceMotionUpdateInterval;
@property (readonly, nonatomic) unsigned long long attitudeReferenceFrame;
@property (readonly, nonatomic, getter=isDeviceMotionAvailable) BOOL deviceMotionAvailable;
@property (readonly, nonatomic, getter=isDeviceMotionActive) BOOL deviceMotionActive;
@property (readonly) CMDeviceMotion *deviceMotion;
@property (nonatomic) BOOL showsDeviceMovementDisplay;

+ (id)virtualAlmondDevice;
+ (void)initialize;
+ (void)setAllowInBackground:(BOOL)a0;
+ (struct { int x0; double x1; double x2; float x3; float x4; union { struct { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; } x0; struct { BOOL x0; char x1[282]; } x1; } x5; })gyroCalibrationDatabaseGetBiasFitAndEstimate:(struct { double x0; double x1; double x2; } *)a0 atTemperature:(float)a1;
+ (BOOL)supportsGyroMiniCalibration;
+ (void)setVirtualAlmondDevice:(id)a0;
+ (BOOL)hasRunMiniCal;
+ (BOOL)startGyroMiniCalibration;
+ (BOOL)northAlignedReferenceFrame:(unsigned long long)a0;
+ (unsigned long long)availableAttitudeReferenceFrames;
+ (BOOL)configureM7Activity:(BOOL)a0 stepCounting:(BOOL)a1 activityForceCodeTransition:(BOOL)a2 stepCountingForceCodeTransition:(BOOL)a3 threshold:(BOOL)a4 onBodyDetection:(BOOL)a5 ispMode:(unsigned char)a6 predictionInterval:(float)a7 logLevel:(char)a8 proactiveRevisitTime:(unsigned short)a9;
+ (BOOL)deviceMotionInitialized:(struct Sample { double x0; struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; float x8; BOOL x9; BOOL x10; int x11; } x1; struct { float x0; } x2; BOOL x3; unsigned int x4; unsigned char x5; struct Status { unsigned short x0; } x6; float x7; } *)a0;
+ (struct { int x0; double x1; double x2; float x3; float x4; union { struct { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; } x0; struct { BOOL x0; char x1[282]; } x1; } x5; })gyroCalibrationDatabaseGetBiasFit;
+ (void)dumpDb:(long long)a0 toURL:(id)a1 onCompletion:(id /* block */)a2;
+ (void)dummySelector:(id)a0;

- (id)initPrivate;
- (void)rebuildGytt;
- (void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(unsigned long long)a0 toQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)stopMagnetometerUpdates;
- (void)setUseAccelerometer:(BOOL)a0;
- (id)init;
- (void)onFactoryGyro:(const struct Sample { double x0; struct { float x0; float x1; float x2; } x1; unsigned short x2; BOOL x3; } *)a0;
- (id)initUsingGyroOnlySensorFusion;
- (void)didBecomeActive:(id)a0;
- (void)dealloc;
- (void)onAmbientPressure:(const struct Sample { double x0; struct { float x0; float x1; } x1; } *)a0;
- (void)startAccelerometerUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopAmbientPressureUpdates;
- (void)stopAccelerometerUpdatesPrivate;
- (double)accelerometerUpdateInterval;
- (id)gyroData;
- (void)setAmbientPressureUpdateIntervalPrivate:(double)a0;
- (void)startMagnetometerUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopDeviceMotionUpdatesForKeyboardMotionPrivate;
- (BOOL)isAmbientPressureActive;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)a0 toQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)stopCompensatedAmbientPressureUpdates;
- (void)stopFactoryGyroUpdatesPrivate;
- (void)startMagnetometerUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)setAccelerometerDataCallback:(void /* function */ *)a0 info:(void *)a1 interval:(double)a2;
- (void)startCompensatedAmbientPressureUpdates;
- (void)setSidebandTimeSyncHandler:(id /* block */)a0;
- (void)startDeviceMotionUpdatesForKeyboardMotionToQueue:(id)a0 withGravityDeltaThreshold:(double)a1 sendFrequency:(double)a2 andHandler:(id /* block */)a3;
- (void)startDeviceMotionUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)willResignActivePrivate:(id)a0;
- (void)onDeviceMotion:(const struct Sample { double x0; struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; float x8; BOOL x9; BOOL x10; int x11; } x1; struct { float x0; } x2; BOOL x3; unsigned int x4; unsigned char x5; struct Status { unsigned short x0; } x6; float x7; } *)a0;
- (id)initUsing6AxisSensorFusion;
- (void)startAmbientPressureUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)connect;
- (void)startFactoryGyroUpdatesToQueue:(id)a0 atUpdateInterval:(double)a1 withHandler:(id /* block */)a2;
- (void)startFactoryGyroUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startGyroUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startAmbientPressureUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopDeviceMotionUpdatesPrivate;
- (void)applyNorthReference:(struct Sample { double x0; struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; float x8; BOOL x9; BOOL x10; int x11; } x1; struct { float x0; } x2; BOOL x3; unsigned int x4; unsigned char x5; struct Status { unsigned short x0; } x6; float x7; } *)a0;
- (void)stopCompensatedAmbientPressureUpdatesPrivate;
- (void)_startDeviceMotionErrorUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)onFactoryGyroTemperature:(const struct Temperature { double x0; float x1; } *)a0;
- (void)startAccelerometerUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)setMotionThreadPriority:(int)a0;
- (void)stopGyroUpdatesPrivate;
- (void)startCompensatedAmbientPressureUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdates;
- (void)stopAccelerometerUpdates;
- (void)stopGyroUpdates;
- (BOOL)isAmbientPressureAvailable;
- (void)stopDeviceMotionLiteUpdatesForDeviceID:(id)a0;
- (void)startAccelerometerUpdates;
- (void)stopDeviceMotionUpdatesForKeyboardMotion;
- (void)applyInitialReference:(struct Sample { double x0; struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; float x8; BOOL x9; BOOL x10; int x11; } x1; struct { float x0; } x2; BOOL x3; unsigned int x4; unsigned char x5; struct Status { unsigned short x0; } x6; float x7; } *)a0;
- (void)onDeviceMotionForKeyboardMotion:(const struct Sample { double x0; struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; float x8; BOOL x9; BOOL x10; int x11; } x1; struct { float x0; } x2; BOOL x3; unsigned int x4; unsigned char x5; struct Status { unsigned short x0; } x6; float x7; } *)a0;
- (void)stopAmbientPressureUpdatesPrivate;
- (BOOL)isCompensatedAmbientPressureActive;
- (unsigned long long)attitudeReferenceFrame;
- (int)gyttNumTemperatures;
- (id)computeNonlinearPRTTFromDB:(id)a0 where:(id)a1;
- (id)deviceMotion;
- (void)startMagnetometerUpdates;
- (void)deallocPrivate;
- (id)accelerometerData;
- (void)setMagnetometerDataCallback:(void /* function */ *)a0 info:(void *)a1 interval:(double)a2;
- (void)startGyroUpdates;
- (double)gyroUpdateInterval;
- (void)stopMagnetometerUpdatesPrivate;
- (void)dismissDeviceMovementDisplay;
- (void)onMagnetometer:(const struct Sample { double x0; struct { float x0; float x1; float x2; } x1; float x2; } *)a0;
- (void)setGyroDataCallback:(void /* function */ *)a0 info:(void *)a1 interval:(double)a2;
- (void)startDeviceMotionLiteFusedUpdatesForDeviceID:(id)a0 toQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)setPowerConservationMode:(int)a0;
- (void)startGyroUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startDeviceMotionUpdatesForKeyboardMotionPrivateToQueue:(id)a0 withGravityDeltaThreshold:(double)a1 notificationFrequency:(double)a2 andHandler:(id /* block */)a3;
- (BOOL)sendDeviceMotionHostGravityToKeyboard:(const struct { unsigned char x0[3]; unsigned char x1; unsigned char x2; } *)a0;
- (void)startAmbientPressureUpdates;
- (void)setGyroUpdateIntervalPrivate:(double)a0;
- (void)setAmbientPressureUpdateInterval:(double)a0;
- (BOOL)setSidebandSensorFusionEnable:(BOOL)a0 withSnoopHandler:(id /* block */)a1;
- (void)startDeviceMotionLiteUpdatesForDeviceID:(id)a0 usingConfiguration:(struct { int x0; })a1 toQueue:(id)a2 withFusedHandler:(id /* block */)a3;
- (void)setDeviceMotionUpdateInterval:(double)a0;
- (void)onCompensatedAmbientPressure:(const struct Sample { double x0; struct { float x0; float x1; } x1; } *)a0;
- (void)willResignActive:(id)a0;
- (BOOL)sendDeviceMotionError:(int)a0;
- (void)setGyroUpdateInterval:(double)a0;
- (BOOL)setSidebandSensorFusionEnable:(BOOL)a0;
- (void)setAccelerometerUpdateInterval:(double)a0;
- (void)showDeviceMovementDisplay;
- (double)compensatedAmbientPressureUpdateInterval;
- (void)didBecomeActivePrivate:(id)a0;
- (void)onGyro:(const struct Sample { double x0; struct { float x0; float x1; float x2; } x1; unsigned short x2; BOOL x3; } *)a0;
- (double)deviceMotionUpdateInterval;
- (void)setDeviceMotionCallback:(void /* function */ *)a0 info:(void *)a1 interval:(double)a2 fsync:(BOOL)a3;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)a0;
- (BOOL)readRawAmbientPressureSamplesFromDB:(id)a0 toQueue:(id)a1 where:(id)a2 withHandler:(id /* block */)a3;
- (void)startCompensatedAmbientPressureUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (double)ambientPressureUpdateInterval;
- (void)setCompensatedAmbientPressureUpdateIntervalPrivate:(double)a0;
- (void)setDeviceMotionUpdateIntervalPrivate:(double)a0;
- (id)predictedDeviceMotionAtTimestamp:(double)a0 error:(out id *)a1;
- (void)setShowsDeviceMovementDisplayPrivate:(BOOL)a0;
- (void)setAccelerometerUpdateIntervalPrivate:(double)a0;
- (void)startFactoryGyroUpdatesPrivateToQueue:(id)a0 atUpdateInterval:(double)a1 withHandler:(id /* block */)a2;
- (void)stopFactoryGyroUpdates;
- (void)_stopDeviceMotionErrorUpdates;
- (BOOL)useAccelerometer;
- (void)setMagnetometerUpdateIntervalPrivate:(double)a0;
- (BOOL)setSidebandSensorFusionEnable:(BOOL)a0 measureLatency:(BOOL)a1 withSnoopHandler:(id /* block */)a2;
- (void)setNotificationCallback:(void /* function */ *)a0 info:(void *)a1;
- (void)onAccelerometer:(const struct Sample { double x0; struct { float x0; float x1; float x2; } x1; } *)a0;
- (void)setCompensatedAmbientPressureUpdateInterval:(double)a0;

@end
