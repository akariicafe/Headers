@class BRCItemID, NSString, CKShare, BRCServerZone, CKRecord;

@interface BRCSharingModifyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    BRCServerZone *_serverZone;
    CKShare *_share;
    BRCItemID *_itemID;
    CKRecord *_sharingIdentityPreparedRecord;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (oneway void)invalidate;
- (void).cxx_destruct;
- (id)createActivity;
- (void)_performAfterCopyingPublicSharingKeyWithRecordID:(id)a0 completion:(id /* block */)a1;
- (void)_performAfterFetchingSharingIdentityOnDirectoryItem:(id)a0 wantRoutingKey:(BOOL)a1 completion:(id /* block */)a2;
- (void)_performAfterFetchingSharingIdentityOnDocumentItem:(id)a0 wantRoutingKey:(BOOL)a1 completion:(id /* block */)a2;
- (void)_performAfterFetchingiWorkRoutingTokenIfNecessary:(id)a0 completion:(id /* block */)a1;
- (void)_performAfterFetchingiWorkSharingIdentityOnItem:(id)a0 wantRoutingKey:(BOOL)a1 completion:(id /* block */)a2;
- (void)_performAfterGettingPublicSharingKeyForRecord:(id)a0 completion:(id /* block */)a1;
- (void)_performAfterPreparingSharingIdentityIfNecessaryWhenWantRoutingKey:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)_shouldFetchSharingIdentity:(BOOL)a0;
- (void)_updateDBAndSyncDownIfNeededWithShare:(id)a0 recordsToLearnCKInfo:(id)a1;
- (id)initWithName:(id)a0 zone:(id)a1 share:(id)a2;
- (void)performAfterPreparingSharingIdentityIfNecessary:(id /* block */)a0;

@end
