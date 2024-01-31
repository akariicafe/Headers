@class MFMailboxUid, NSDate, NSArray, NSIndexSet, NSString, ECSubject, EFFuture, EMFollowUp, MFAddressAtomStatusManager, EFObservable;
@protocol EMCollectionItemID, EFObserver;

@interface MessageHeaderViewModel : MessageItemViewModel <MessageHeaderViewModelBuilder, NSCopying>

@property (copy, nonatomic) id<EMCollectionItemID> itemID;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) ECSubject *subject;
@property (copy, nonatomic) MFMailboxUid *mailbox;
@property (copy, nonatomic) NSArray *senderList;
@property (copy, nonatomic) NSArray *toList;
@property (copy, nonatomic) NSArray *ccList;
@property (copy, nonatomic) NSArray *bccList;
@property (retain, nonatomic) MFAddressAtomStatusManager *atomManager;
@property (retain, nonatomic) EFObservable<EFObserver> *observableObserver;
@property (retain, nonatomic) EFFuture *brandIndicatorFuture;
@property (readonly, nonatomic) EFObservable *modelObservable;
@property (nonatomic, getter=isBlockedSender) BOOL blockedSender;
@property (nonatomic) long long unsubscribeType;
@property (nonatomic) BOOL hasAttachments;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *displayDate;
@property (copy, nonatomic) NSDate *readLaterDate;
@property (copy, nonatomic) NSDate *sendLaterDate;
@property (copy, nonatomic) EMFollowUp *followUp;
@property (nonatomic, getter=isRead) BOOL read;
@property (nonatomic, getter=isFlagged) BOOL flagged;
@property (copy, nonatomic) NSIndexSet *flagColors;
@property (nonatomic, getter=isReplied) BOOL replied;
@property (nonatomic, getter=isForwarded) BOOL forwarded;
@property (nonatomic, getter=isVIP) BOOL VIP;
@property (nonatomic, getter=isNotify) BOOL notify;
@property (nonatomic, getter=isMute) BOOL mute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBuilder:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItemBuilder:(id /* block */)a0;
- (id)updatedFlagsModelWithBuilder:(id /* block */)a0;
- (id)updatedModelWithBuilder:(id /* block */)a0;
- (id)updatedModelWithMessage:(id)a0 brandIndicatorFuture:(id)a1;

@end
