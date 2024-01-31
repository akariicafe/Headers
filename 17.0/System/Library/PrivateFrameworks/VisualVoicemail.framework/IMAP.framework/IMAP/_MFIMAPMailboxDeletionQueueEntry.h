@class NSArray, IMAP_Account;

@interface _MFIMAPMailboxDeletionQueueEntry : NSObject

@property (copy) NSArray *urls;
@property (copy) NSArray *paths;
@property (retain) IMAP_Account *account;

- (void)dealloc;
- (void).cxx_destruct;

@end
