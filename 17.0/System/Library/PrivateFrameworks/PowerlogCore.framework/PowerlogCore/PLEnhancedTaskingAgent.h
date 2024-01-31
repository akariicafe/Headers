@interface PLEnhancedTaskingAgent : PLAgent

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)allowlistForSignpostAggregatedData;
+ (id)entryEventIntervalDefinitionInProcessAnimation;
+ (void)logAggregatedDataFromSignpostWithStartDate:(id)a0 withEndDate:(id)a1;
+ (id)entryEventNoneDefinitionAppSwitchTrigger;
+ (id)entryEventIntervalDefinitionScrollView;
+ (id)entryEventIntervalDefinitionUINavigationController;

- (id)init;
- (void)log;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)logAggregatedDataFromSignpostWithPayload:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (int)getSignpostNameValueGroupTypeFor:(id)a0;
- (id)aggregatedSignpostDataWithEntryKey:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2 withSignpostName:(id)a3 withProcess:(id)a4 withDataDict:(id)a5;

@end
