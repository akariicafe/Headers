@class NSXPCConnection;
@protocol ProxyAnalyticsDelegate;

@interface ProxyAnalytics : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain) id<ProxyAnalyticsDelegate> delegate;

- (void)performAppPeriodicTasks;
- (void)dealloc;
- (void)performAppEndpointTrackingPeriodicTasks;
- (void)performPersistentStoreHealthCheck;
- (void)performAppExperiencePeriodicTasks;
- (void).cxx_destruct;
- (void)donateBiomeEventForEdgeSelectionWithPrefix:(id)a0 interfaceType:(id)a1 radioType:(id)a2 radioBand:(id)a3;
- (void)trainModelAndScore:(BOOL)a0 lastScoreDate:(id)a1;
- (void)performAppTrackingPeriodicTasks;

@end
