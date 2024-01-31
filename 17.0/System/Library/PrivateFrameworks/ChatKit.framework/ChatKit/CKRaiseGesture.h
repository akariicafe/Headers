@class CMGestureManager;

@interface CKRaiseGesture : NSObject {
    int proximityToken;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (retain, nonatomic) CMGestureManager *gestureManager;
@property (nonatomic) long long gestureState;
@property (nonatomic) BOOL proximityState;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isRecognized) BOOL recognized;

+ (BOOL)isRaiseGestureEnabled;
+ (BOOL)isRaiseGestureSupported;

- (void)dealloc;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)setProximityMonitoringEnabled:(BOOL)a0;
- (void)proximityStateDidChange:(id)a0;

@end
