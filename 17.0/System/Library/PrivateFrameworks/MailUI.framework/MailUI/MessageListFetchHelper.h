@class EMFetchController, NSArray;

@interface MessageListFetchHelper : NSObject {
    BOOL _mailboxesNeedFetching;
}

@property (retain, nonatomic) EMFetchController *fetchController;
@property (copy, nonatomic) NSArray *mailboxes;

- (void).cxx_destruct;
- (BOOL)fetchMailboxesIsUserInitiated:(BOOL)a0;
- (id)initWithFetchController:(id)a0 mailboxes:(id)a1;

@end
