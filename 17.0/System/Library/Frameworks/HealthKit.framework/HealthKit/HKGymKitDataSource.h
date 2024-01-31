@class NSUUID, HKTaskServerProxyProvider, HKHealthStore, NSString;

@interface HKGymKitDataSource : NSObject <_HKXPCExportable, HKWorkoutDataSource>

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)defaultConfigurationWithWorkoutConfiguration:(id)a0;

- (id)exportedInterface;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)_startTaskServerIfNeeded;
- (id)initWithHealthStore:(id)a0 workoutConfiguration:(id)a1;
- (void)workoutBuilderDidFinish;

@end
