@class NSString;

@interface ATXHeuristicRecentEvent : NSObject <ATXContextHeuristicProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)permanentRefreshTriggers;
- (id)heuristicResultWithEnvironment:(id)a0;

@end
