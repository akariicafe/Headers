@class MFMailboxUid, MailAccount;

@interface MFMailDataMessageStore : MFDataMessageStore <MFMailMessageStore>

@property (readonly, nonatomic) MailAccount *account;
@property (readonly, nonatomic) MFMailboxUid *mailboxUid;
@property (readonly, nonatomic) MFMailboxUid *mailbox;

+ (Class)classForMimePart;

- (BOOL)shouldDownloadBodyDataForMessage:(id)a0;
- (id)storageLocationForAttachment:(id)a0 withMessage:(id)a1;
- (id)storeData:(id)a0 forMimePart:(id)a1 isComplete:(BOOL)a2;

@end
