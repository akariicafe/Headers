@class NSSet, NSMutableDictionary;

@interface PLAccountingOperator : PLOperator

@property (retain, nonatomic) NSSet *rules;
@property (retain) NSMutableDictionary *ruleIDToPendingJobs;

+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitionPowerEvents;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryEventPointDefinitionDistributionEvents;
+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitionEnergy;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryEventBackwardDefinitionDistributionEvents;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryAggregateDefinitionQualificationEnergy;

- (id)init;
- (void)initOperatorDependancies;
- (void)stopAccounting;
- (void).cxx_destruct;
- (void)startAccounting;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;

@end
