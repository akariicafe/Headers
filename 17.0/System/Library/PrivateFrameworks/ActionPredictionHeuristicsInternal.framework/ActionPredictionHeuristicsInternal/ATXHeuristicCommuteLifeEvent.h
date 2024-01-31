@class NSString;

@interface ATXHeuristicCommuteLifeEvent : NSObject <ATXContextHeuristicProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)permanentRefreshTriggers;
- (id)heuristicResultWithEnvironment:(id)a0;
- (void)_sendPredictedCommuteNotificationToLocation:(id)a0 from:(id)a1 toDate:(id)a2 confidence:(id)a3;

@end
