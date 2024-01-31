@interface INPlayMediaPlaybackSpeedResolutionResult : INDoubleResolutionResult

+ (id)unsupportedForReason:(long long)a0;

- (id)initWithDoubleResolutionResult:(id)a0;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)a0;
- (id)_initWithIntentSlotResolutionResult:(id)a0 slotDescription:(id)a1;

@end
