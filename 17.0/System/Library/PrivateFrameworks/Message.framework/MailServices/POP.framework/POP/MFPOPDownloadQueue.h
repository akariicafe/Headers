@class MFMailboxUid, MFMailMessageLibrary, MFSqliteMessageIDStore, NSDate;

@interface MFPOPDownloadQueue : MFBufferedQueue {
    MFSqliteMessageIDStore *_uidStore;
    MFMailMessageLibrary *_library;
    MFMailboxUid *_mailbox;
    NSDate *startDate;
}

- (unsigned long long)sizeForItem:(id)a0;
- (id)init;
- (BOOL)addItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)handleItems:(id)a0;

@end
