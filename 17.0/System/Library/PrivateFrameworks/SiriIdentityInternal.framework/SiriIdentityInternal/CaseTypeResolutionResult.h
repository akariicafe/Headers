@interface CaseTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithCaseTypeToConfirm:(long long)a0;
+ (id)successWithResolvedCaseType:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
