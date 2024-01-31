@class NSUUID, HKTaskServerProxyProvider, NSString;
@protocol HKWorkoutRouteDataSourceDelegate;

@interface HKWorkoutRouteDataSource : NSObject <_HKXPCExportable, HKWorkoutRouteDataSourceClientInterface, HKWorkoutDataSource>

@property (retain, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (weak, nonatomic) id<HKWorkoutRouteDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverIdentifier;
+ (id)serverInterface;

- (id)exportedInterface;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)clientRemote_didUpdateAltitude:(id)a0;
- (void)clientRemote_didUpdateElevation:(id)a0;
- (void)clientRemote_didUpdateRoute:(id)a0;
- (id)initWithWorkoutSession:(id)a0;
- (void)workoutBuilderDidFinish;

@end
