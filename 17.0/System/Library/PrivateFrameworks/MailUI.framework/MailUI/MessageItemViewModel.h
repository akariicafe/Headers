@class NSIndexSet, EMFollowUp, NSString, NSDate;

@interface MessageItemViewModel : NSObject <MessageItemViewModelBuilder>

@property (nonatomic, getter=isRead) BOOL read;
@property (nonatomic, getter=isFlagged) BOOL flagged;
@property (copy, nonatomic) NSIndexSet *flagColors;
@property (nonatomic, getter=isReplied) BOOL replied;
@property (nonatomic, getter=isForwarded) BOOL forwarded;
@property (nonatomic, getter=isVIP) BOOL VIP;
@property (nonatomic, getter=isNotify) BOOL notify;
@property (nonatomic, getter=isMute) BOOL mute;
@property (copy, nonatomic) NSDate *readLaterDate;
@property (copy, nonatomic) NSDate *sendLaterDate;
@property (copy, nonatomic) NSDate *displayDate;
@property (copy, nonatomic) EMFollowUp *followUp;
@property (nonatomic, getter=isBlockedSender) BOOL blockedSender;
@property (nonatomic) long long unsubscribeType;
@property (nonatomic) BOOL hasAttachments;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isUnscreenedSender) BOOL unscreenedSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithItemBuilder:(id /* block */)a0;

@end
