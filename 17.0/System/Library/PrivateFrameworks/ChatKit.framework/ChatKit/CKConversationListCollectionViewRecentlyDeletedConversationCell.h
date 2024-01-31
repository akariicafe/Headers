@interface CKConversationListCollectionViewRecentlyDeletedConversationCell : CKConversationListCollectionViewRecoverableConversationCell

- (id)_attributedStringForRecoverableSummaryLabelWithText:(id)a0;
- (unsigned long long)_daysUntilDeletion:(id)a0;
- (BOOL)hasUnreadMessagesForConversation:(id)a0;
- (BOOL)shouldAlwaysHideAvatar;
- (BOOL)shouldAlwaysHideUnreadIndicatorForConversation:(id)a0;
- (void)updateSummaryLabel:(id)a0 conversation:(id)a1 fastPreview:(BOOL)a2;

@end
