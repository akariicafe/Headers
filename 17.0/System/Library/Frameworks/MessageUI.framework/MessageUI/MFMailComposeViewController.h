@class NSString, _UIRemoteViewController;
@protocol MFMailComposeViewControllerDelegate;

@interface MFMailComposeViewController : UINavigationController <_UIRemoteViewControllerContaining> {
    id _internal;
    id /* block */ _setupAnimationBlock;
    BOOL _didChangeStatusBarStyle;
    long long _savedStatusBarStyle;
}

@property (weak, nonatomic) id<MFMailComposeViewControllerDelegate> mailComposeDelegate;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (BOOL)canSendMail;
+ (void)removeAutosavedMessageWithIdentifier:(id)a0;
+ (BOOL)hasAutosavedMessageWithIdentifier:(id)a0;
+ (BOOL)_canSendMailInNewScene;
+ (BOOL)canSendMailSourceAccountManagement:(int)a0;
+ (BOOL)isMailDropConfigured;
+ (unsigned long long)maximumAttachmentSize;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)setSubject:(id)a0;
- (id)initWithURL:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)setContentVisible:(BOOL)a0;
- (long long)preferredStatusBarStyle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)_impl;
- (void)__viewControllerWillBePresented:(BOOL)a0;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)setContentText:(id)a0;
- (id)contentText;
- (void)setContentURLs:(id)a0;
- (id)UTITypes;
- (id)cloudPhotoIDs;
- (id)contentURLs;
- (id)photoIDs;
- (void)setCloudPhotoIDs:(id)a0;
- (void)setKeyboardVisible:(BOOL)a0;
- (void)setPhotoIDs:(id)a0;
- (void)setShareSheetSessionID:(id)a0;
- (void)setUTITypes:(id)a0;
- (id)shareSheetSessionID;
- (void)setToRecipients:(id)a0;
- (id)_addAttachmentWithFileURL:(id)a0 mimeType:(id)a1;
- (void)_presentComposeInNewWindowWithCompletion:(id /* block */)a0;
- (void)_setCKShare:(id)a0 setupContainerInfo:(id)a1 permissionType:(long long)a2 allowOthersToInvite:(BOOL)a3;
- (void)addAttachmentData:(id)a0 mimeType:(id)a1 fileName:(id)a2;
- (void)autosaveWithHandler:(id /* block */)a0;
- (id)initWithURL:(id)a0 sourceAccountManagement:(int)a1;
- (void)recoverAutosavedMessageWithIdentifier:(id)a0;
- (void)setMessageBody:(id)a0 isHTML:(BOOL)a1;
- (void)setSourceAccountManagement:(int)a0;
- (id)_internalViewController;
- (void)_addAttachmentDataItemProvider:(id)a0 mimeType:(id)a1 fileName:(id)a2 forContentVariation:(id)a3;
- (id)_addAttachmentItemProvider:(id)a0 mimeType:(id)a1 fileName:(id)a2;
- (id)_addContentVariationWithName:(id)a0;
- (void)_setDefaultContentVariation:(id)a0;
- (void)_setMessageBody:(id)a0 isHTML:(BOOL)a1 forContentVariation:(id)a2;
- (id)_validEmailAddressesFromArray:(id)a0;
- (void)addSetupAnimationBlock:(id /* block */)a0;
- (void)currentAttachmentLimitWithHandler:(id /* block */)a0;
- (void)finalizeCompositionValues;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)a0 resultHandler:(id /* block */)a1;
- (void)setAutorotationDelegate:(id)a0;
- (void)setBccRecipients:(id)a0;
- (void)setCaretPosition:(unsigned long long)a0;
- (void)setCcRecipients:(id)a0;
- (void)setHideMyEmailFrom:(id)a0;
- (void)setPreferredSendingEmailAddress:(id)a0;

@end
