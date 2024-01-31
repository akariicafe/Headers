@class NSArray, _EDThreadPersistence_ThreadMessages, _EDThreadPersistence_SQLHelper, EDMessagePersistence, EMThreadObjectID, EMThread;

@interface _EDThreadPersistence_PersistedThread : NSObject {
    BOOL _didCreateTempMessagesView;
}

@property (readonly, nonatomic) _EDThreadPersistence_ThreadMessages *messages;
@property (readonly, nonatomic) long long threadDatabaseID;
@property (readonly, nonatomic) _EDThreadPersistence_SQLHelper *sqlHelper;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) long long threadScopeDatabaseID;
@property (readonly, nonatomic) EMThreadObjectID *threadObjectID;
@property (readonly, nonatomic) NSArray *wrappedMessages;
@property (readonly, nonatomic) EMThread *thread;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)_ensureTempMessagesView;
- (id)_mailboxDatabaseIDsForWrappedMessages;
- (void)addKeyPathsForDisplayMessageChangeToKeyPaths:(id)a0;
- (BOOL)addMailboxes;
- (BOOL)addRecipients:(id)a0 ofType:(unsigned long long)a1;
- (BOOL)addRecipientsForType:(unsigned long long)a0;
- (BOOL)addSenders;
- (BOOL)addSenders:(id)a0;
- (unsigned long long)currentSenderCounts;
- (void)dropTemporaryView;
- (id)initWithMessages:(id)a0 threadDatabaseID:(long long)a1;
- (id)recipientDatabaseIDsAndDatesForRecipientType:(unsigned long long)a0;
- (id)senderDatabaseIDsAndDates;
- (BOOL)setPriorityForDisplayMessageSender;
- (BOOL)updateDisplayMessageWithUnreadWrappedMessages:(id)a0;
- (id)updateNewestReadAndDisplayMessage;
- (BOOL)updateNewestReadMessage:(id)a0;

@end
