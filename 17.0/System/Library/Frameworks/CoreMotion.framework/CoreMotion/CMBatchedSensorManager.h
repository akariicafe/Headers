@class NSArray, CMBatchedSensorManagerInternal;

@interface CMBatchedSensorManager : NSObject {
    CMBatchedSensorManagerInternal *_internal;
}

@property (class, readonly, nonatomic) long long authorizationStatus;
@property (class, readonly, nonatomic, getter=isAccelerometerSupported) BOOL accelerometerSupported;
@property (class, readonly, nonatomic, getter=isDeviceMotionSupported) BOOL deviceMotionSupported;

@property (readonly, nonatomic, getter=isAccelerometerActive) BOOL accelerometerActive;
@property (readonly, nonatomic) long long accelerometerDataFrequency;
@property (readonly) NSArray *accelerometerBatch;
@property (readonly, nonatomic) long long deviceMotionDataFrequency;
@property (readonly, nonatomic, getter=isDeviceMotionActive) BOOL deviceMotionActive;
@property (readonly) NSArray *deviceMotionBatch;

- (id)init;
- (void)dealloc;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdates;
- (void)stopAccelerometerUpdates;
- (void)startAccelerometerUpdates;
- (void)startAccelerometerUpdatesWithHandler:(id /* block */)a0;
- (void)startDeviceMotionUpdatesWithHandler:(id /* block */)a0;

@end
