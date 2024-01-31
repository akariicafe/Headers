@class NSString;

@interface SFCollaborationUtilities : NSObject

@property (class, readonly, copy, nonatomic) NSString *_copyRepresentationTypeIdentifier;
@property (class, readonly, copy, nonatomic) NSString *defaultCKOptionsSummary;

+ (void)addParticipantsAllowedForCollaborationItem:(id)a0 collaborationService:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)canDeleteShareForCollaborationItem:(id)a0;
+ (void)canShowShareOptionsForCollaborationItem:(id)a0 service:(id)a1 completionHandler:(id /* block */)a2;
+ (void)createSharingURLForCollaborationRequest:(id)a0 completionHandler:(id /* block */)a1;
+ (void)deleteSharingURL:(id)a0 containerSetupInfo:(id)a1 completionHandler:(id /* block */)a2;
+ (id)fileCollaborationItemFromActivityItems:(id)a0;
+ (void)findOriginatingSharedItemForSubitemURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getCKSharingOptionsFromOptions:(id)a0 accessType:(id *)a1 permissionType:(id *)a2 allowOthersToInvite:(id *)a3;
+ (void)getFailureTitle:(id *)a0 message:(id *)a1 error:(id)a2;
+ (BOOL)hasiWorkSendCopyRepresentationForItemProvider:(id)a0;
+ (BOOL)isHeroCollaborationActivityType:(id)a0;
+ (BOOL)isPostCKShareItemProvider:(id)a0;
+ (BOOL)isSWYActivityItemProvider:(id)a0;
+ (void)isShareOwnerOrAdminForFileURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)isShareOwnerOrAdminForShare:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)isSharedFileURL:(id)a0 isLocalStorageFileURL:(BOOL *)a1 isiCloudDriveFileURL:(BOOL *)a2 isInSharedFolder:(BOOL *)a3;
+ (void)loadSendCopyRepresentationIfNeededForActivityItems:(id)a0 completion:(id /* block */)a1;
+ (void)loadiWorkCopyRepresentationURLForItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)requestSharedURLForCollaborationItem:(id)a0 collaborationService:(id)a1 completionHandler:(id /* block */)a2;
+ (void)shareStatusForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)urlRequestsForCollaborationItems:(id)a0;
+ (void)_processRemainingActivityItems:(id)a0 toFinalActivityItems:(id)a1 completion:(id /* block */)a2;
+ (void)_addParticipantsAllowedForShare:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_addParticipantsAllowedForURL:(id)a0 share:(id)a1 collaborationService:(id)a2 completionHandler:(id /* block */)a3;
+ (id)_dataForFilepath:(id)a0;
+ (void)_findOriginatingSharedItemInParentItems:(id)a0 forSubitem:(id)a1 completionHandler:(id /* block */)a2;
+ (void)_loadCKShareWithMetadataForItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_loadShareOptionsForCKShareItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_loadShareOptionsForSWYItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)addParticipantsAllowedForURL:(id)a0 share:(id)a1 completionHandler:(id /* block */)a2;
+ (id)baseCollaborationDictionaryFromCollaborationItem:(id)a0;
+ (id)ckShareDictionaryFromCKShare:(id)a0 setupInfo:(id)a1;
+ (id)createItemProviderForFileURL:(id)a0;
+ (id)createLinkMetadataWithCKShareItemProvider:(id)a0;
+ (void)createMailContentForRequest:(id)a0 completionHandler:(id /* block */)a1;
+ (id)descriptionForShareOptions:(id)a0;
+ (id)fileShareDictionaryFromFileURLItems:(id)a0;
+ (BOOL)isCKShareItemProvider:(id)a0;
+ (BOOL)isCollaborationItemPrivateShare:(id)a0;
+ (BOOL)isPreCKShareItemProvider:(id)a0;
+ (BOOL)isServiceManateeCKShareItemProvider:(id)a0;
+ (void)isShareOwnerOrAdminForCollaborationItem:(id)a0 service:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)isThirdPartyFileProviderBackedURL:(id)a0;
+ (void)loadCKContainerForItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadCKShareItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadCKShareItemProvider:(id)a0 onlyPostShare:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (void)loadMetadataForFileURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadMetadataForItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadPendingCollaborationForItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadSendCopyRepresentationIfNeededForItemProvider:(id)a0 completion:(id /* block */)a1;
+ (void)loadShareOptionsForItemProvider:(id)a0 completionHandler:(id /* block */)a1;
+ (void)requestSharedURLForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)urlFromActivityItem:(id)a0;

@end
