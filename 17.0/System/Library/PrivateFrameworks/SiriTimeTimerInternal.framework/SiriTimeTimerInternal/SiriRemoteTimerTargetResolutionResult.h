@interface SiriRemoteTimerTargetResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithSiriRemoteTimerTargetToConfirm:(id)a0;
+ (id)disambiguationWithSiriRemoteTimerTargetsToDisambiguate:(id)a0;
+ (id)successWithResolvedSiriRemoteTimerTarget:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
