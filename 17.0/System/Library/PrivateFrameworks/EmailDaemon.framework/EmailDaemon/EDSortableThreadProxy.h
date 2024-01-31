@class EMThreadObjectID, NSArray, ECMessageFlags, NSIndexSet, EDSortableThreadProxyAdditionalProperties, EDSortableThreadItem, NSDate;
@protocol EDSortableMessage;

@interface EDSortableThreadProxy : NSObject

@property (readonly, copy, nonatomic) EDSortableThreadItem *threadItem;
@property (retain, nonatomic) EDSortableThreadProxyAdditionalProperties *properties;
@property (nonatomic) unsigned long long numberOfMessagesInThread;
@property (nonatomic) long long displayMessageGlobalID;
@property (nonatomic) BOOL hasUnflagged;
@property (nonatomic) BOOL isVIP;
@property (nonatomic) BOOL isBlocked;
@property (nonatomic) BOOL hasAttachments;
@property (nonatomic) long long senderBucket;
@property (retain, nonatomic) NSDate *readLaterDate;
@property (copy, nonatomic) NSArray *senderList;
@property (copy, nonatomic) NSArray *toList;
@property (copy, nonatomic) NSArray *ccList;
@property (retain, nonatomic) ECMessageFlags *flags;
@property (copy, nonatomic) NSIndexSet *flagColors;
@property (retain, nonatomic) NSArray *mailboxObjectIDs;
@property (readonly, copy, nonatomic) id<EDSortableMessage> sortableItem;
@property (readonly, copy, nonatomic) EMThreadObjectID *threadObjectID;
@property (readonly) long long conversationID;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)_addSortableDatesForSortDescriptors:(id)a0;
- (void)_addSortableMessages:(id)a0;
- (id)_targetForSelector:(SEL)a0;
- (id)calculateChangeFromThread:(id)a0;
- (id)initWithConversationID:(long long)a0 sortableMessages:(id)a1 originatingQuery:(id)a2 mailboxTypeResolver:(id)a3;
- (id)sortableItem;
- (void)updateFromThread:(id)a0 addingAdditionalInformation:(BOOL)a1;

@end
