@class HDCarouselServicesManager, HDAlertSuppressor, HDDaemon, NSString, HDBackgroundWorkoutRunner, HDCoreMotionWorkoutInterface, HDAppLauncher, HDHeartRateRecoveryManager;

@interface HDWorkoutPluginDaemonExtension : NSObject <HDHealthDaemonExtension>

@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly, nonatomic) HDAlertSuppressor *alertSuppressor;
@property (readonly, nonatomic) HDAppLauncher *appLauncher;
@property (readonly, nonatomic) HDBackgroundWorkoutRunner *backgroundWorkoutRunner;
@property (readonly, nonatomic) HDCarouselServicesManager *carouselServicesManager;
@property (readonly, nonatomic) HDCoreMotionWorkoutInterface *coreMotionWorkoutInterface;
@property (readonly, nonatomic) HDHeartRateRecoveryManager *heartRateRecoveryManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDaemon:(id)a0;
- (void).cxx_destruct;

@end
