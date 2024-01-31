@interface INSupportedTrafficIncidentTypeResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithSupportedTrafficIncidentTypeToConfirm:(id)a0;
+ (id)disambiguationWithSupportedTrafficIncidentTypesToDisambiguate:(id)a0;
+ (id)successWithResolvedSupportedTrafficIncidentType:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
