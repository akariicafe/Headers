@interface ConfigurationListResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithConfigurationListToConfirm:(id)a0;
+ (id)disambiguationWithConfigurationListsToDisambiguate:(id)a0;
+ (id)successWithResolvedConfigurationList:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
