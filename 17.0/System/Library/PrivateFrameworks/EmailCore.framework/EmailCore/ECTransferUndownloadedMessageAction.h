@class NSURL, NSString, NSArray;

@interface ECTransferUndownloadedMessageAction : ECLocalMessageAction <ECTransferUndownloadedMessageActionBuilder>

@property (nonatomic) long long transferType;
@property (retain, nonatomic) NSURL *sourceMailboxURL;
@property (retain, nonatomic) NSURL *destinationMailboxURL;
@property (copy, nonatomic) NSString *oldestPersistedRemoteID;
@property (retain, nonatomic) NSArray *itemsToDelete;
@property (retain, nonatomic) NSString *messageActionPersistentID;
@property (retain, nonatomic) NSURL *mailboxURL;
@property (nonatomic) BOOL userInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBuilder:(id /* block */)a0;
- (void).cxx_destruct;
- (void)updateWithCompletedCopyItems:(id)a0;

@end
