@interface UtsSearchParamResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithUtsSearchParamToConfirm:(id)a0;
+ (id)disambiguationWithUtsSearchParamsToDisambiguate:(id)a0;
+ (id)successWithResolvedUtsSearchParam:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
