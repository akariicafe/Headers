@interface MTIntentRepeatDayResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)confirmationRequiredWithRepeatDayToConfirm:(id)a0;
+ (id)disambiguationWithRepeatDaysToDisambiguate:(id)a0;
+ (id)successWithResolvedRepeatDay:(id)a0;

@end
