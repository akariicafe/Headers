@interface LiveServiceResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)successWithResolvedLiveService:(id)a0;
+ (id)confirmationRequiredWithLiveServiceToConfirm:(id)a0;
+ (id)disambiguationWithLiveServicesToDisambiguate:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
