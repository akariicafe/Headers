@class NSFileCoordinator, NSString, FPItem, NSURL, FPProviderDomain, FPItemID;

@interface FPUnarchiveOperation : FPActionOperation <DSArchiveServiceUnarchivingDelegate> {
    FPItem *_item;
    NSURL *_itemURL;
    FPItemID *_placeholderID;
    FPItem *_destinationFolder;
    BOOL _hasStitchedUnarchivedItems;
    NSFileCoordinator *_coordinator;
    id _coordinationAccessToken;
    FPProviderDomain *_providerDomain;
}

@property (copy, nonatomic) id /* block */ passphraseRequestBlock;
@property (copy, nonatomic) id /* block */ unarchiveCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)_unarchiveURL:(id)a0 archiveName:(id)a1 service:(id)a2 passphrase:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithItem:(id)a0 destinationFolder:(id)a1;
- (void)_importUnarchivedContentAtURL:(id)a0 archiveName:(id)a1 completionHandler:(id /* block */)a2;
- (id)_newParentProgressWithCompletedUnitCount:(long long)a0;
- (void)_unarchiveAndHandleIncorrectPassphraseURL:(id)a0 archiveName:(id)a1 service:(id)a2 passphrase:(id)a3 completionHandler:(id /* block */)a4;
- (void)_unarchiveURLInDSEnumeratedDomain:(id)a0 service:(id)a1 passphrase:(id)a2 completionHandler:(id /* block */)a3;
- (void)_unarchiveURLInFPEnumeratedDomain:(id)a0 archiveName:(id)a1 service:(id)a2 passphrase:(id)a3 completionHandler:(id /* block */)a4;
- (void)actionMain;
- (id)findUniqueUnarchivedName:(id)a0 isFolder:(BOOL)a1 parent:(id)a2;
- (BOOL)getHasUnarchivedMultipleItems:(BOOL *)a0 firstUnarchivedItemURL:(id *)a1 forArchiveFolderURL:(id)a2 error:(id *)a3;
- (void)service:(id)a0 didReceiveArchivedItemsDescriptors:(id)a1;

@end
