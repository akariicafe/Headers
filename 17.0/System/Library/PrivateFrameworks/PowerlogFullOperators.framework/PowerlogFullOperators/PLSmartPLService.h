@class NSMutableDictionary;

@interface PLSmartPLService : PLService

@property (retain) NSMutableDictionary *smartPLHelpers;

+ (id)defaults;
+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionSample;
+ (id)entryEventPointDefinitionSmartTrigger;

- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)logEventPointHeap;
- (void)logEventPointHeapForProcessName:(id)a0;
- (void)logEventPointSample;
- (void)logEventPointSampleForProcessName:(id)a0;
- (void)logEventPointSmartPLFiredFromAuxilary:(Class)a0 withReason:(id)a1;
- (void)logEventPointStackShot;
- (void)logEventPointStackShotWithReason:(id)a0;
- (void)logEventPointVMMap;
- (void)logEventPointVMMapForProcessName:(id)a0;
- (void)vmmapProcessName:(id)a0;

@end
