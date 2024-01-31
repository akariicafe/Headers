@protocol CKPinnedConversationContactItem;

@interface CKPinnedConversationContactItemAvatarView : CKAvatarView <CKPinnedConversationContactItemView>

@property (retain, nonatomic) id<CKPinnedConversationContactItem> pinnedConversationContactItem;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateContactItemViewShadows;

@end
