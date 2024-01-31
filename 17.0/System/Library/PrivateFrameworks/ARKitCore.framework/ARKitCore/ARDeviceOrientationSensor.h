@class NSString, CMMotionManager, NSOperationQueue;
@protocol ARSensorDelegate;

@interface ARDeviceOrientationSensor : NSObject <ARSensor> {
    CMMotionManager *_motionManager;
    NSOperationQueue *_taskDeviceMotion;
    double _previousCaptureEndingTimestamp;
}

@property (nonatomic) double interval;
@property (weak, nonatomic) id<ARSensorDelegate> delegate;
@property (readonly, nonatomic) long long worldAlignment;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)changeReferenceFrame:(unsigned long long)a0;
- (void)handleDeviceMotionUpdateWithMotion:(id)a0 error:(id)a1;
- (id)initWithMotionManager:(id)a0 alignment:(long long)a1;
- (double)preferredInterval;
- (unsigned long long)providedDataTypes;
- (void)waitForOutstandingCallbacks;

@end
