@class NSOperationQueue;

@interface CMAudioAccessoryManagerInternal : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fSampleLock;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryAccelerometerDispatcher;
    double fAudioAccessoryAccelerometerUpdateInterval;
    id /* block */ fAudioAccessoryAccelerometerHandler;
    NSOperationQueue *fAudioAccessoryAccelerometerQueue;
    struct Sample { double timestamp; struct { float x; float y; float z; } acceleration; unsigned long long sensorTime; unsigned short sequenceNumber; } fLatestAudioAccessoryAccelerometerSample;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryGyroDispatcher;
    double fAudioAccessoryGyroUpdateInterval;
    id /* block */ fAudioAccessoryGyroHandler;
    NSOperationQueue *fAudioAccessoryGyroQueue;
    struct Sample { double timestamp; struct { float x; float y; float z; } gyro; unsigned long long sensorTime; unsigned short sequenceNumber; float temperature; } fLatestAudioAccessoryGyroSample;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryMagnetometerDispatcher;
    double fAudioAccessoryMagnetometerUpdateInterval;
    id /* block */ fAudioAccessoryMagnetometerHandler;
    NSOperationQueue *fAudioAccessoryMagnetometerQueue;
    struct Sample { double timestamp; struct { float x; float y; float z; } magneticField; unsigned long long sensorTime; unsigned short sequenceNumber; float temperature; } fLatestAudioAccessoryMagnetometerSample;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryDeviceMotionDispatcher;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryDeviceMotionConfigDispatcher;
    double fAudioAccessoryDeviceMotionUpdateInterval;
    id /* block */ fAudioAccessoryDeviceMotionHandler;
    NSOperationQueue *fAudioAccessoryDeviceMotionQueue;
    struct CMOQuaternion { float elements[4]; } fFrameRotation;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryDeviceMotionStatusDispatcher;
    id /* block */ fAudioAccessoryDeviceMotionStatusHandler;
    NSOperationQueue *fAudioAccessoryDeviceMotionStatusQueue;
    BOOL fAudioAccessoryAccelerometerAvailable;
    BOOL fAudioAccessoryGyroAvailable;
    BOOL fAudioAccessoryMagnetometerAvailable;
    BOOL fAudioAccessoryDeviceMotionAvailable;
}

- (id)init;
- (id).cxx_construct;

@end
