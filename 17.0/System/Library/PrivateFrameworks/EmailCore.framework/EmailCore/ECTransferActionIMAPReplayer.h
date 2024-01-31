@class NSString;
@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@interface ECTransferActionIMAPReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods, ECIMAPLocalActionReplayer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ECIMAPLocalActionReplayerDelegate> delegate;
@property (retain, nonatomic) id<ECIMAPServerInterface> serverInterface;

- (BOOL)isRecoverableError:(id)a0;
- (void).cxx_destruct;
- (id)appendItem:(id)a0 mailboxURL:(id)a1;
- (id)copyItems:(id)a0 destinationMailboxURL:(id)a1;
- (BOOL)deleteSourceMessagesFromTransferItems:(id)a0;
- (BOOL)downloadFailed;
- (id)fetchBodyDataForRemoteID:(id)a0 mailboxURL:(id)a1;
- (id)moveItems:(id)a0 destinationMailboxURL:(id)a1;
- (id)_transferItems:(id)a0 destinationMailboxURL:(id)a1 isMove:(BOOL)a2;

@end
