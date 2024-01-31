@class CIImage, NSError, _TtC11DockKitCore16FollowerMetadata;

@interface DockKitCore.TrackingStand : DockKitCore.DockCoreAccessory {
    void /* unknown type, empty encoding */ actuationController;
    void /* unknown type, empty encoding */ sensorController;
    void /* unknown type, empty encoding */ _trackingButtonSemaphore;
    void /* unknown type, empty encoding */ _trackingButtonEnabled;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ assertion;
    void /* unknown type, empty encoding */ videoCheckTimer;
    void /* unknown type, empty encoding */ videoLock;
    void /* unknown type, empty encoding */ videoStreamConnected;
    void /* unknown type, empty encoding */ motionStopped;
    void /* unknown type, empty encoding */ useDeviceMotion;
    void /* unknown type, empty encoding */ inference;
    void /* unknown type, empty encoding */ trackerLock;
    void /* unknown type, empty encoding */ trackingTimer;
    void /* unknown type, empty encoding */ trackingQueue;
    void /* unknown type, empty encoding */ rateControl;
    void /* unknown type, empty encoding */ trackerTimerInterval;
    void /* unknown type, empty encoding */ timeElapsedSinceStartup;
    void /* unknown type, empty encoding */ observations;
    void /* unknown type, empty encoding */ observationsLock;
    void /* unknown type, empty encoding */ maxObservations;
    void /* unknown type, empty encoding */ appID;
    void /* unknown type, empty encoding */ aspectRatio;
    void /* unknown type, empty encoding */ userOverridedAspectRatio;
    void /* unknown type, empty encoding */ enableRecognition;
    void /* unknown type, empty encoding */ processingQueue;
    void /* unknown type, empty encoding */ debugMessageCallbacks;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)pauseTracking;
- (void)stopTracking;
- (void)startTracking;
- (id)getConfig;
- (BOOL)resumeTracking;
- (id)dumpStateWithDirectory:(id)a0;
- (id)getDiagnostics;
- (id)initWithInfo:(id)a0 systems:(id)a1;
- (BOOL)returnToBase;
- (BOOL)searchWithCalibrate:(BOOL)a0;
- (BOOL)setConfigWithKey:(id)a0 value:(id)a1;
- (BOOL)stopReturnToBase;
- (BOOL)stopSearchWithCalibrate:(BOOL)a0;
- (void)trackObservationsWithMetadata:(_TtC11DockKitCore16FollowerMetadata *)a0 image:(CIImage *)a1 completionHandler:(void (^)(NSError *))a2;

@end
