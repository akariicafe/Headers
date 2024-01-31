@class EMMessage, EMQuery, NSArray, EMThread, NSMutableArray, EMThreadScope;
@protocol EMMailboxTypeResolver, EMMessageListItem;

@interface EDInMemoryThread : NSObject <NSCopying> {
    NSMutableArray *_messages;
    NSMutableArray *_dateSortedMessages;
}

@property (readonly, nonatomic) EMThreadScope *threadScope;
@property (retain, nonatomic) EMThread *thread;
@property (readonly, nonatomic) EMQuery *originatingQuery;
@property (readonly, nonatomic) id<EMMailboxTypeResolver> mailboxTypeResolver;
@property (readonly, nonatomic) EMMessage *newestMessage;
@property (retain, nonatomic) EMMessage *displayMessage;
@property (readonly, copy, nonatomic) NSArray *messages;
@property (readonly, nonatomic) id<EMMessageListItem> messageListItem;

+ (id)_dateSortDescriptors;

- (void).cxx_destruct;
- (id)addMessages:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_combinedCCList;
- (id)_combinedToList;
- (void)_addMessagesToThread:(id)a0;
- (id)_calculateAndApplyChange;
- (id)_calculateChangesAfterRemovingMessages:(id)a0 applyingChanges:(id)a1 threadIsEmpty:(BOOL *)a2;
- (id)_combinedFlagColors;
- (id)_combinedFlags;
- (BOOL)_combinedHasAttachments;
- (BOOL)_combinedHasUnflagged;
- (BOOL)_combinedIsBlocked;
- (BOOL)_combinedIsVIP;
- (id)_combinedMailboxes;
- (id)_combinedReadLater;
- (long long)_combinedSenderBucket;
- (id)_combinedSenderList;
- (void)_commonInitWithOriginatingQuery:(id)a0 mailboxTypeResolver:(id)a1;
- (id)_createThreadWithObjectID:(id)a0;
- (id)_dateSortedMessages;
- (BOOL)_isSortedByDate:(id)a0;
- (void)_recalculateDisplayMessage;
- (id)changeMessages:(id)a0 forKeyPaths:(id)a1 threadIsEmpty:(BOOL *)a2;
- (id)initWithMessages:(id)a0 originatingQuery:(id)a1 mailboxTypeResolver:(id)a2;
- (id)removeMessages:(id)a0 threadIsEmpty:(BOOL *)a1;
- (id)updateMessage:(id)a0 fromOldObjectID:(id)a1;

@end
