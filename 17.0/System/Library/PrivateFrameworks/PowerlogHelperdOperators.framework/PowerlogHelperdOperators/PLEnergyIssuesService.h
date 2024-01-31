@class PLXPCListenerOperatorComposition;

@interface PLEnergyIssuesService : PLService

@property (retain) PLXPCListenerOperatorComposition *eventListener;
@property (retain) PLXPCListenerOperatorComposition *xpcListenerEnergyIssueTrigger;

+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionHighPowerDetection;
+ (id)entryEventPointDefinitionEnergySignatures;

- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (struct __CFDictionary { } *)createAssertionThreshold:(int)a0 withAggregateLimit:(int)a1;
- (void)handleAssertionNotifications;
- (void)setAssertionThresholds;

@end
