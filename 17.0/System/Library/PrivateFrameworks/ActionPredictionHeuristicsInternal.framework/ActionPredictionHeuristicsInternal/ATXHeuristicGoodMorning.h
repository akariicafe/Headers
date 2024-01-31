@class NSString;

@interface ATXHeuristicGoodMorning : NSObject <ATXContextHeuristicProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextDateInterval;
+ (id)nextDateWithHour:(unsigned long long)a0;

- (id)permanentRefreshTriggers;
- (id)heuristicResultWithEnvironment:(id)a0;
- (void)_addRefreshTimeTriggerWithHour:(unsigned long long)a0 refreshTriggers:(id)a1;

@end
