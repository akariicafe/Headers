@interface CKConversationListCollectionViewRecoverableConversationCell : CKConversationListCollectionViewConversationCell

+ (id)reuseIdentifier;
+ (id)reuseIdentifierForAXFontSize:(BOOL)a0;
+ (id)reuseIdentifiers;

- (unsigned long long)_daysUntilDeletion:(id)a0;
- (BOOL)shouldAlwaysHideAvatar;
- (BOOL)shouldAlwaysHideUnreadIndicatorForConversation:(id)a0;
- (BOOL)shouldAppearAsRecoverableConversation;
- (void)updateDateLabel:(id)a0 conversation:(id)a1;

@end
