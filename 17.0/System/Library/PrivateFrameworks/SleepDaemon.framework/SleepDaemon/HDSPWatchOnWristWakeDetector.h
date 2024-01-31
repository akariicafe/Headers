@class NSString, HDSPEnvironment;
@protocol HDSPWakeDetectorDelegate;

@interface HDSPWatchOnWristWakeDetector : NSObject <HDSPWatchOnWristObserver, HDSPWakeDetector, HDSPEnvironmentAware>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isDetecting;
@property (readonly, nonatomic) unsigned long long type;
@property (weak, nonatomic) id<HDSPWakeDetectorDelegate> wakeDetectorDelegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (id)initWithEnvironment:(id)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (void)startDetecting;
- (void)stopDetecting;
- (void).cxx_destruct;
- (void)detectedOffWristOnDate:(id)a0;
- (void)detectedOnWristOnDate:(id)a0;
- (id)onWristMonitor;

@end
