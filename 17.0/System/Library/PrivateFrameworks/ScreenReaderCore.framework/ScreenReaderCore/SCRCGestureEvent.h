@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject {
    unsigned long long _deviceIdentifier;
    SCRCGestureFinger *_finger[8];
    unsigned long long _fingerCount;
    struct CGPoint { double x; double y; } _averageLocation;
}

@property (nonatomic) double time;

- (void)dealloc;
- (unsigned long long)deviceIdentifier;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)fingerCount;
- (id)initWithDeviceIdentifier:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })averageLocation;
- (id)fingers;
- (void)addFingerWithIdentifier:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 pressure:(double)a2;
- (void)addStylusWithIdentifier:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 pressure:(double)a2 altitude:(double)a3 azimuth:(double)a4;
- (struct CGPoint { double x0; double x1; })balancedLocation;
- (id)fingerAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fingerFrame;
- (id)fingerWithIdentifier:(unsigned long long)a0;
- (id)fingerWithoutIdentifier:(unsigned long long)a0;
- (BOOL)isCancelEvent;
- (struct CGPoint { double x0; double x1; })magneticLocation;
- (void)removeFingerWithIdentifier:(unsigned long long)a0;

@end
