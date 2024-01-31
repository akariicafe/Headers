@class PLXPCResponderOperatorComposition;

@interface PLBLDService : PLBatteryBreakdownService

@property (retain) PLXPCResponderOperatorComposition *batteryBreakdownResponder;
@property (retain) PLXPCResponderOperatorComposition *logBUIResultsResponder;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointBLD;

- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (id)batteryBreakdownWithPayload:(id)a0;
- (id)bldEntryWithBatteryBreakdown:(id)a0;

@end
