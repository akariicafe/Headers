@class NSString, MFDAMessageStore;

@interface MFDATransferActionReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods>

@property (retain, nonatomic) MFDAMessageStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isRecoverableError:(id)a0;
- (void).cxx_destruct;
- (id)appendItem:(id)a0 mailboxURL:(id)a1;
- (id)copyItems:(id)a0 destinationMailboxURL:(id)a1;
- (BOOL)deleteSourceMessagesFromTransferItems:(id)a0;
- (BOOL)downloadFailed;
- (id)fetchBodyDataForRemoteID:(id)a0 mailboxURL:(id)a1;
- (id)moveItems:(id)a0 destinationMailboxURL:(id)a1;
- (id)replayActionUsingStore:(id)a0;

@end
