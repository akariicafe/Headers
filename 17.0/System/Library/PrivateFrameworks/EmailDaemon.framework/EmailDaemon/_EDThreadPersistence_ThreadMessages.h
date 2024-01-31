@class NSArray, EDMessagePersistence, _EDThreadPersistence_SQLHelper, EMThread, EMThreadObjectID;

@interface _EDThreadPersistence_ThreadMessages : NSObject {
    EMThread *_thread;
}

@property (readonly, nonatomic) _EDThreadPersistence_SQLHelper *sqlHelper;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) long long threadScopeDatabaseID;
@property (readonly, nonatomic) EMThreadObjectID *threadObjectID;
@property (readonly, nonatomic) NSArray *wrappedMessages;
@property (readonly, nonatomic) EMThread *thread;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)updateThreadTableWithJournaled:(BOOL)a0;
- (id)_displayWrappedMessageWithNewestReadWrappedMessage:(id *)a0;
- (id)_iterateNewestUnreadWrappedMessagesInWrappedMessages:(id)a0 iteratorBlock:(id /* block */)a1;
- (id)_newestUnreadWrappedMessagesWithNewestReadWrappedMessage:(id *)a0;
- (id)_threadQuery;
- (BOOL)addThreadReplacingExisting:(BOOL)a0 journaled:(BOOL)a1;
- (id)initWithSQLHelper:(id)a0 messagePersistence:(id)a1 threadScopeDatabaseID:(long long)a2 threadObjectID:(id)a3 wrappedMessages:(id)a4;

@end
