@interface MFSwiftIMAPMailboxTaskManager : NSObject <MFIMAPMailboxTaskManager> {
    void /* unknown type, empty encoding */ mailbox;
    void /* unknown type, empty encoding */ taskManager;
}

@property (nonatomic, readonly) BOOL canFetchMessageIDs;
@property (nonatomic, retain) void /* unknown type, empty encoding */ library;

- (void)compact;
- (void)close;
- (id)fetchDataForMessage:(id)a0 partial:(BOOL *)a1;
- (void)updateServerUnreadCountClosingConnection:(BOOL)a0;
- (id)storeSearchResultMatchingCriterion:(id)a0 limit:(unsigned int)a1 offset:(id)a2 error:(id *)a3;
- (void)growFetchWindow;
- (BOOL)fetchDataForMimePart:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isComplete:(BOOL *)a2 consumer:(id)a3;
- (id)fetchHeadersForMessage:(id)a0;
- (void)handleFlagsChangedForMessages:(id)a0 flags:(id)a1 oldFlagsByMessage:(id)a2;
- (void)deleteMessagesOlderThanNumberOfDays:(int)a0 compact:(BOOL)a1;
- (id)replayAction:(id)a0;
- (void)reselectMailbox;
- (long long)fetchMessagesWithMessageIDs:(id)a0 andSetFlags:(unsigned long long)a1;
- (id)fetchDataForMessage:(id)a0 didDownload:(BOOL *)a1;
- (BOOL)downloadMimePartNumber:(id)a0 message:(id)a1 withProgressBlock:(id /* block */)a2;
- (id)messageIdRollCall:(id)a0;
- (long long)fetchNumMessages:(long long)a0 preservingUID:(id)a1 options:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMailbox:(id)a0 taskManager:(id)a1;

@end
