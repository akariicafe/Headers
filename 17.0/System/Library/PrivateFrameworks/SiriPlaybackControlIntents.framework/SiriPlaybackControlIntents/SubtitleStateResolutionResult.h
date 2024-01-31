@interface SubtitleStateResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithSubtitleStateToConfirm:(long long)a0;
+ (id)successWithResolvedSubtitleState:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
