@interface NCNotificationManagementQuietingSuggestionContentProvider : NCNotificationManagementSuggestionContentProvider

- (id)auxiliaryOptionActions;
- (void)handleKeepAction:(id)a0;
- (id)initWithNotificationRequest:(id)a0 bundleDisplayName:(id)a1 managementDelegate:(id)a2 suggestionDelegate:(id)a3;

@end
