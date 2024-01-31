@class NSString;

@interface INStringResolutionResult : INIntentResolutionResult <INStringResolutionResultExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)confirmationRequiredWithStringToConfirm:(id)a0;
+ (id)disambiguationWithStringsToDisambiguate:(id)a0;
+ (id)successWithResolvedString:(id)a0;
+ (id)unsupportedWithReason:(unsigned long long)a0 alternativeStrings:(id)a1;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
