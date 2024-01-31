@class NSString;

@interface INDateComponentsRangeResolutionResult : INIntentResolutionResult <INDateComponentsRangeResolutionResultExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)confirmationRequiredWithDateComponentsRangeToConfirm:(id)a0;
+ (id)disambiguationWithDateComponentsRangesToDisambiguate:(id)a0;
+ (id)successWithResolvedDateComponentsRange:(id)a0;
+ (id)unsupportedWithReason:(unsigned long long)a0 alternativeDateComponentsRanges:(id)a1;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
