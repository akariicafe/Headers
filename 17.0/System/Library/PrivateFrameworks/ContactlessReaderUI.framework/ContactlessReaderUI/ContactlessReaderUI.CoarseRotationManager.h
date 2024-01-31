@interface ContactlessReaderUI.CoarseRotationManager : NSObject <BKSAccelerometerDelegate> {
    void /* unknown type, empty encoding */ _orientation;
    void /* unknown type, empty encoding */ orientations;
    void /* unknown type, empty encoding */ accelerometer;
    void /* unknown type, empty encoding */ deviceOrientation;
}

- (void)accelerometer:(id)a0 didAccelerateWithTimeStamp:(double)a1 x:(float)a2 y:(float)a3 z:(float)a4 eventType:(int)a5;
- (id)init;
- (void)dealloc;
- (void)accelerometer:(id)a0 didChangeDeviceOrientation:(long long)a1;
- (void).cxx_destruct;

@end
