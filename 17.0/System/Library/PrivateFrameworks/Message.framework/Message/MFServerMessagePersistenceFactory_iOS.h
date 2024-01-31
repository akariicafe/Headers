@class MFMailMessageLibrary;

@interface MFServerMessagePersistenceFactory_iOS : EDServerMessagePersistenceFactory

@property (weak, nonatomic) MFMailMessageLibrary *library;

- (id)initWithLibrary:(id)a0 database:(id)a1;
- (void).cxx_destruct;
- (long long)mailboxIDForMailboxURL:(id)a0 useNumericSearch:(BOOL *)a1 supportsLabels:(BOOL *)a2;

@end
