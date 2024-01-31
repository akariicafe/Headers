@interface NCNotificationManagementCuratedContactMatchSuggestionContentProvider : NCNotificationManagementSuggestionContentProvider

- (id)auxiliaryOptionActions;
- (void)handleConfirmAction:(id)a0;
- (void)handleRejectAction:(id)a0;
- (id)initWithNotificationRequest:(id)a0 bundleDisplayName:(id)a1 managementDelegate:(id)a2 suggestionDelegate:(id)a3 contactName:(id)a4;

@end
