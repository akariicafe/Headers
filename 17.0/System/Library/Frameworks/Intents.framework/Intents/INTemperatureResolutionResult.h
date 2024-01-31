@class NSString;

@interface INTemperatureResolutionResult : INIntentResolutionResult <INTemperatureResolutionResultExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)successWithResolvedTemperature:(id)a0;
+ (id)confirmationRequiredWithTemperatureToConfirm:(id)a0;
+ (id)disambiguationWithTemperaturesToDisambiguate:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
