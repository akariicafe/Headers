@interface WFChooseFromListItemResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)confirmationRequiredWithChooseFromListItemToConfirm:(id)a0;
+ (id)disambiguationWithChooseFromListItemsToDisambiguate:(id)a0;
+ (id)successWithResolvedChooseFromListItem:(id)a0;

@end
