@interface RepeatStateResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedRepeatState:(long long)a0;
+ (id)confirmationRequiredWithRepeatStateToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
