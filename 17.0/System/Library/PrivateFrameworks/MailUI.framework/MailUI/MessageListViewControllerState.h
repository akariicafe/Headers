@interface MessageListViewControllerState : NSObject

@property (nonatomic) BOOL isCompact;
@property (nonatomic) BOOL useSplitViewStyling;
@property (nonatomic) BOOL shouldDisplayUnreadAndVIP;
@property (nonatomic) BOOL canShowReadLaterDate;
@property (nonatomic) BOOL containsInbox;
@property (nonatomic) BOOL containsSent;
@property (nonatomic) BOOL containsOnlyInboxScope;
@property (nonatomic) BOOL containsArchiveMailbox;
@property (nonatomic) BOOL containsDraftsMailbox;
@property (nonatomic) BOOL containsOutbox;
@property (nonatomic) BOOL containsDraftsOrOutbox;
@property (nonatomic) BOOL isOutgoingMailbox;
@property (nonatomic) BOOL containsTrashMailbox;
@property (nonatomic) BOOL isUnifiedMailbox;
@property (nonatomic) BOOL containsSmartMailbox;
@property (nonatomic) BOOL containsReadLaterMailbox;
@property (nonatomic) BOOL containsSendLaterMailbox;
@property (nonatomic) BOOL containsFollowUpMailbox;
@property (nonatomic) BOOL isEditing;
@property (nonatomic) BOOL didAlertOnBlankCell;
@property (nonatomic) BOOL didRecordTailspin;
@property (nonatomic) BOOL isSearch;

- (void)updateWithMailboxes:(id)a0;

@end
