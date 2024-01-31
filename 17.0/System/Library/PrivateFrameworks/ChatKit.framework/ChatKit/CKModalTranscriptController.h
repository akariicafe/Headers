@class CKChatEagerUploadController, NSMutableArray;

@interface CKModalTranscriptController : CKShareSheetChatController

@property (nonatomic) BOOL alreadySetUp;
@property (retain, nonatomic) NSMutableArray *partsToInsert;
@property (retain, nonatomic) NSMutableArray *typesToInsert;
@property (nonatomic) int entryViewInvisible;
@property (nonatomic) BOOL cameraSelectionDisabled;
@property (retain, nonatomic) CKChatEagerUploadController *eagerUploadController;
@property (retain, nonatomic) NSMutableArray *deferredInsertMediaObjectBlocks;
@property (nonatomic) BOOL appearCompleted;
@property (nonatomic) BOOL mimeType;
@property (nonatomic) BOOL forceMMS;

- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNavigationController:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)registerForNotifications;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setComposition:(id)a0;
- (BOOL)_deviceIsLocked;
- (BOOL)_shouldUseExistingConversations;
- (BOOL)_shouldUseDefaultFirstResponder;
- (void)setCompositionForPluginPayload:(id)a0;
- (void)_conversationListDidFinishLoading:(id)a0;
- (BOOL)_insertMediaObject:(id)a0;
- (void)_insertMediaObjectAndReturnFrame:(id)a0 completion:(id /* block */)a1;
- (double)_offsetForScreenWidth:(double)a0 containerWidth:(double)a1 windowOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)_setConversationDeferredSetup;
- (void)_setEntryViewVisible:(BOOL)a0;
- (BOOL)_shouldAllowCameraAttachments;
- (void)createCompositionForPluginPayload:(id)a0 shelfMediaObject:(id)a1 collaborationShareOptions:(id)a2 completionHandler:(id /* block */)a3;
- (void)disableCameraAttachments;
- (void)hideEntryViewContent:(BOOL)a0;
- (void)insertCKShareForCollaboration:(id)a0 containerSetupInfo:(id)a1 collaborationShareOptions:(id)a2 isCollaboration:(BOOL)a3;
- (void)insertCKShareForCollaboration:(id)a0 containerSetupInfo:(id)a1 collaborationShareOptions:(id)a2 isCollaboration:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)insertData:(id)a0 MIMEType:(id)a1 exportedFilename:(id)a2;
- (void)insertFileURL:(id)a0 filename:(id)a1 transcoderUserInfo:(id)a2 fullyRealizedPreview:(id)a3 rawPreview:(id)a4 appendedVideoURL:(id)a5 completion:(id /* block */)a6;
- (void)insertFileURLForCollaboration:(id)a0 collaborationShareOptions:(id)a1 metadata:(id)a2 sendAsCopyURL:(id)a3 isCollaboration:(BOOL)a4;
- (void)insertFileURLForCollaboration:(id)a0 collaborationShareOptions:(id)a1 metadata:(id)a2 sendAsCopyURL:(id)a3 isCollaboration:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)insertGroupActivity:(id)a0;
- (void)insertMessage:(id)a0 bundleProxy:(id)a1;
- (void)insertRichLinkWithCloudKitShare:(id)a0 containerSetupInfo:(id)a1 collaborationShareOptions:(id)a2 isCollaboration:(BOOL)a3;
- (void)insertRichLinkWithCloudKitShare:(id)a0 containerSetupInfo:(id)a1 collaborationShareOptions:(id)a2 isCollaboration:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)insertRichLinkWithURL:(id)a0 data:(id)a1;
- (void)insertRichLinkWithURL:(id)a0 sendAsCopyURL:(id)a1 data:(id)a2 collaborationType:(long long)a3 collaborationShareOptions:(id)a4 metadata:(id)a5 isCollaboration:(BOOL)a6 completionHandler:(id /* block */)a7;
- (void)insertSWYPendingCollaboration:(id)a0 collaborationShareOptions:(id)a1 collaborationMetadata:(id)a2 sendAsCopyURL:(id)a3 isCollaboration:(BOOL)a4 completionHandler:(id /* block */)a5;
- (BOOL)messageEntryViewShouldBeginEditing:(id)a0;
- (BOOL)messageEntryViewWidth:(double *)a0 andOffset:(double *)a1;
- (id)proposedParticipantHandles;
- (void)sendComposition:(id)a0;
- (void)setCanEditRecipients:(BOOL)a0;
- (void)setCompositionForPluginPayload:(id)a0 shelfMediaObject:(id)a1 collaborationShareOptions:(id)a2;
- (void)setCompositionForPluginPayload:(id)a0 shelfMediaObject:(id)a1 collaborationShareOptions:(id)a2 completionHandler:(id /* block */)a3;
- (void)setEntryView:(id)a0;
- (void)setPendingAddresses:(id)a0;
- (void)setShouldDisableEntryField:(BOOL)a0;
- (void)setTextEntryContentsVisible:(BOOL)a0;
- (BOOL)shouldDismissAfterSend;

@end
