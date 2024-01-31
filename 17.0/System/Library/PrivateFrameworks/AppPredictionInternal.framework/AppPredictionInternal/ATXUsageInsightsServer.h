@class NSString, NSXPCListener;

@interface ATXUsageInsightsServer : NSObject <ATXUsageInsightsInterface, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)fetchAllContinuousUsageSessionsWithCompletion:(id /* block */)a0;
- (void)fetchAllDeliveredNotificationsWithCompletion:(id /* block */)a0;
- (void)fetchAllInterruptingAppSessionsWithCompletion:(id /* block */)a0;
- (void)fetchAllMindlessCyclingSessionsWithCompletion:(id /* block */)a0;
- (void)fetchAllPhubbingSessionsWithCompletion:(id /* block */)a0;
- (void)fetchSuggestedBundleIDsForAllowListForAllModesWithCompletion:(id /* block */)a0;
- (void)fetchSuggestedBundleIDsForDenyListForAllModesWithCompletion:(id /* block */)a0;
- (void)fetchUsageInsightsInferredATXModeEventsWithCompletion:(id /* block */)a0;

@end
