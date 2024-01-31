@class NSString;

@interface INPlacemarkResolutionResult : INIntentResolutionResult <INPlacemarkResolutionResultExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)confirmationRequiredWithPlacemarkToConfirm:(id)a0;
+ (id)disambiguationWithPlacemarksToDisambiguate:(id)a0;
+ (id)successWithResolvedPlacemark:(id)a0;
+ (id)unsupportedWithReason:(unsigned long long)a0 alternativePlacemarks:(id)a1;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
