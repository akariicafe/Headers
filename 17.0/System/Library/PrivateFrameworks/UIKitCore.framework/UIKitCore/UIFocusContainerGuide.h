@interface UIFocusContainerGuide : UIFocusGuide

- (id)init;
- (BOOL)_legacy_isEligibleForFocusInteraction;
- (BOOL)_isEligibleForFocusInteraction;
- (void)_searchForFocusRegionsInContext:(id)a0;

@end
