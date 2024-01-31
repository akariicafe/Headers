@class MFMailboxUidTransformer;

@interface MFMailboxProvider : EDMailboxProvider

@property (retain, nonatomic) MFMailboxUidTransformer *mailboxUidTransformer;

- (id)legacyMailboxForObjectID:(id)a0;
- (void)_fetchMailboxesForAccount:(id)a0;
- (id)initWithAccountsProvider:(id)a0;
- (id)_transformMailbox:(id)a0 legacyMailboxToMailboxMap:(id)a1 objectIDToLegacyMailboxMap:(id)a2;
- (void).cxx_destruct;
- (void)test_tearDown;

@end
