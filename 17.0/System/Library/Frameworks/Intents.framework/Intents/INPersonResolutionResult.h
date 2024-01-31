@class NSString;

@interface INPersonResolutionResult : INIntentResolutionResult <INPersonResolutionResultExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)confirmationRequiredWithPersonToConfirm:(id)a0;
+ (id)disambiguationWithPeopleToDisambiguate:(id)a0;
+ (id)successWithResolvedPerson:(id)a0;
+ (id)unsupportedWithReason:(unsigned long long)a0 alternativePeople:(id)a1;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
