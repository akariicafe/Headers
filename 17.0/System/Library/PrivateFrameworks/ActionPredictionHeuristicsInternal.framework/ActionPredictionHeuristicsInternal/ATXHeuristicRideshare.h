@class NSString, NSObject;
@protocol OS_nw_path_monitor, OS_nw_path, OS_dispatch_queue;

@interface ATXHeuristicRideshare : NSObject <ATXContextHeuristicProtocol> {
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_nw_path> *_networkPath;
    NSObject<OS_dispatch_queue> *_accessQueue;
    int _currentStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_appRegistrationChange:(id)a0;
+ (void)subscribeNotification;

- (void)setupCellularNetworkMonitoring;
- (id)init;
- (void)dealloc;
- (id)suggestionForUpcomingFlightWithHeuristicDevice:(id)a0;
- (id)rideShareSuggestionActionForEvent:(id)a0 heuristicDevice:(id)a1 predictionReasons:(unsigned long long)a2 score:(double)a3 validFromStartDate:(id)a4 validToEndDate:(id)a5;
- (void)sendRefreshNotificationIfRequired:(id)a0;
- (id)_rideShareSuggestionActionForDestination:(id)a0 heuristicDevice:(id)a1 flightInformationSchema:(id)a2 predictionReasons:(unsigned long long)a3 score:(double)a4 validFromStartDate:(id)a5 validToEndDate:(id)a6 dateInterval:(id)a7;
- (id)_dateIntervalWithEvent:(id)a0;
- (id)permanentRefreshTriggers;
- (id)heuristicResultWithEnvironment:(id)a0;
- (id)suggestionForConcludedFlightWithHeuristicDevice:(id)a0;
- (id)rideShareAppWithHeuristicDevice:(id)a0;
- (void).cxx_destruct;

@end
