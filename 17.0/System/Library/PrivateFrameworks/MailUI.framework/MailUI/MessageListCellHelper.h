@class NSString, EMCachingContactStore, UIView, EFFuture;
@protocol MessageListCellHelperApplicationProxy, MessageListCellViewable, EMMessageListItem;

@interface MessageListCellHelper : NSObject <MessageListCellDisclosureUpdatable>

@property (retain, nonatomic) id<MessageListCellHelperApplicationProxy> applicationProxy;
@property (readonly, weak, nonatomic) UIView *parentView;
@property (readonly, weak, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView<MessageListCellViewable> *cellView;
@property (readonly, nonatomic) id<EMMessageListItem> messageListItem;
@property (readonly, nonatomic) long long style;
@property (retain, nonatomic) EMCachingContactStore *contactStore;
@property (nonatomic, getter=isCompact) BOOL compact;
@property (nonatomic) BOOL disclosureEnabled;
@property (nonatomic) BOOL shouldAnnotateReplyOrForward;
@property (nonatomic) BOOL shouldDisplayUnreadAndVIP;
@property (nonatomic, getter=isOutgoingMailbox) BOOL outgoingMailbox;
@property (nonatomic, getter=isInbox) BOOL inbox;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) BOOL canShowReadLaterDate;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=shouldHideFollowUp) BOOL hideFollowUp;
@property (retain, nonatomic) EFFuture *predictedMailbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (void)_significantTimeChange;
- (void).cxx_destruct;
- (void)updateViewContentConfiguration:(id)a0;
- (id)_cellViewModelForMessageListItem:(id)a0 style:(long long)a1 hintsBySnippetZone:(id)a2;
- (long long)_cellViewRelationshipTypeForFlags:(id)a0;
- (void)_updateViewsToMatchMessageListItem:(id)a0 style:(long long)a1 hintsBySnippetZone:(id)a2;
- (id)backgroundConfigurationForState:(id)a0;
- (id)configurationStateForCellConfigurationState:(id)a0;
- (id)contentConfigurationForState:(id)a0;
- (id)initWithParentView:(id)a0 contentView:(id)a1 cellView:(id)a2 applicationProxy:(id)a3;
- (void)setDisclosureEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)setMessageListItem:(id)a0 style:(long long)a1;
- (void)setMessageListItem:(id)a0 style:(long long)a1 hintsBySnippetZone:(id)a2;
- (void)setShowsAccessory:(BOOL)a0 showingDetail:(BOOL)a1;
- (void)updateViewBackgroundConfiguration:(id)a0;
- (void)updateViewConfigurationForState:(id)a0;

@end
