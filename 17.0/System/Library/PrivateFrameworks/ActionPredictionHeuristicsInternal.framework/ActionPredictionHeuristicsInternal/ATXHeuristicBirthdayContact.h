@class NSString;

@interface ATXHeuristicBirthdayContact : NSObject <ATXContextHeuristicProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)permanentRefreshTriggers;
- (id)heuristicResultWithEnvironment:(id)a0;
- (id)_spotlightActionWithName:(id)a0 email:(id)a1 identifier:(id)a2 startDate:(id)a3 endDate:(id)a4 subtitle:(id)a5;

@end
