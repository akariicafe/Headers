@class PLDuetServiceDAS, PLDuetServiceImpl, PLDuetServiceLpmSource;

@interface PLDuetService : PLService

@property (readonly) PLDuetServiceLpmSource *lpmSource;
@property (readonly) PLDuetServiceDAS *dasEvent;
@property (readonly) PLDuetServiceImpl *impl;

+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)aggregateNameDuetEnergyAccumulator;
+ (id)entryEventForwardDefinitionBatterySaverMode;
+ (id)eventIntervalDefinitionComplicationEvents;
+ (id)eventIntervalDefinitionDuetEvents;

- (id)init;
- (void)dealloc;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)handleBatterySaverModeToken:(int)a0 withNotification:(id)a1;
- (void)logEventForwardBatterySaverModeWithState:(BOOL)a0 fromNotification:(id)a1;
- (long long)registrationModeStringToEnum:(id)a0;
- (void)setupBatterySaverModeForNotification:(id)a0;

@end
