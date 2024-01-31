@interface PeriodFlowResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithPeriodFlowToConfirm:(long long)a0;
+ (id)successWithResolvedPeriodFlow:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
