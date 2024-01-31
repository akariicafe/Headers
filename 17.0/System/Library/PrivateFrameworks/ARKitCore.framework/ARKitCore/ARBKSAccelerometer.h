@class BKSAccelerometer;

@interface ARBKSAccelerometer : NSObject {
    BKSAccelerometer *_accelerometer;
    long long _lastValidDeviceOrientation;
}

+ (id)sharedAccelerometerHandle;
+ (id)sharedWeakAccelerometerHandle;

- (id)initPrivate;
- (void)dealloc;
- (long long)currentOrientation;
- (long long)rawOrientation;
- (void).cxx_destruct;

@end
