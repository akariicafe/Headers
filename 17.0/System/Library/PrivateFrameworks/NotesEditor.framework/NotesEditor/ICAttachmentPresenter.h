@class NSString, NSArray, ICNAEventReporter, ICViewControllerManager, NSDictionary, ICQLPreviewController, UIViewController, ICAttachment, ICGalleryAttachmentEditorController, UIBarButtonItem;
@protocol ICAttachmentPresenterDelegate;

@interface ICAttachmentPresenter : NSObject <QLPreviewControllerDataSource, QLPreviewControllerDelegate, ICGalleryAttachmentEditorControllerDelegate, MFMailComposeViewControllerDelegate>

@property (retain, nonatomic) ICGalleryAttachmentEditorController *galleryAttachmentEditorController;
@property (readonly, nonatomic) ICAttachment *displayedAttachment;
@property (readonly, nonatomic) ICAttachment *selectedSubAttachment;
@property (readonly, nonatomic) NSDictionary *presentedAttachmentUIState;
@property (weak, nonatomic) ICViewControllerManager *ic_viewControllerManager;
@property (retain, nonatomic) NSArray *attachments;
@property (nonatomic) unsigned long long startingIndex;
@property (retain, nonatomic) NSArray *quickLookFilteredAttachments;
@property (nonatomic) unsigned long long quickLookFilteredStartingIndex;
@property (weak, nonatomic) id<ICAttachmentPresenterDelegate> delegate;
@property BOOL displayShowInNote;
@property (getter=isAttachmentEditable) BOOL attachmentEditable;
@property (weak) UIViewController *presentingViewController;
@property (retain) ICQLPreviewController *qlPreviewController;
@property (retain, nonatomic) UIBarButtonItem *showInNoteButton;
@property (retain, nonatomic) ICGalleryAttachmentEditorController *galleryAttachmentEditorController;
@property (readonly, nonatomic) BOOL isAttachmentBrowser;
@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) ICNAEventReporter *eventReporter;
@property (retain) UIViewController *presentedViewController;
@property (readonly, nonatomic) BOOL isAttachmentPresentedInProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)previewViewControllerWithViewControllerManager:(id)a0 attachments:(id)a1 startingAtIndex:(unsigned long long)a2 delegate:(id)a3 editable:(BOOL)a4 isFromAttachmentBrowser:(BOOL)a5;
+ (BOOL)shouldCommitPreviewViewController:(id)a0;

- (id)previewController:(id)a0 transitionViewForPreviewItem:(id)a1;
- (void)previewControllerDidDismiss:(id)a0;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)prefersStatusBarHidden;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (long long)previewController:(id)a0 editingModeForPreviewItem:(id)a1;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)attachment;
- (void)dismiss:(id)a0;
- (void)previewController:(id)a0 didSaveEditedCopyOfPreviewItem:(id)a1 atURL:(id)a2;
- (BOOL)previewController:(id)a0 canShareItem:(id)a1;
- (id)excludedActivityTypesForPreviewController:(id)a0;
- (void)presentPreview;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)attachmentWillBeDeletedNotification:(id)a0;
- (void)eventReporterLostSession:(id)a0;
- (void)applyPresentedAttachmentUIStateIfNecessary:(id)a0;
- (void)galleryAttachmentEditorControllerDeleteAttachment;
- (void)galleryAttachmentEditorControllerDidDismiss;
- (void)hardLinksDidDelete:(id)a0;
- (id)initWithViewControllerManager:(id)a0 attachments:(id)a1 startingAtIndex:(unsigned long long)a2 delegate:(id)a3 displayShowInNote:(BOOL)a4 editable:(BOOL)a5 presentingViewController:(id)a6;
- (void)notifyDelegateDidDismiss;
- (void)presentAttachmentViewController:(id)a0;
- (void)presentAttachmentWithSelectedSubAttachment:(id)a0;
- (void)presentGalleryAttachmentWithSelectedSubAttachment:(id)a0;
- (void)presentMovie;
- (void)presentQuickLook;
- (void)presentReadOnlyAlertIfNecessaryForAttachment:(id)a0;
- (void)presentSynapseLink;
- (void)presentURL;
- (void)previewControllerDidChangeCurrentItem;
- (void)scrollCollectionViewToIndexPath:(id)a0;
- (void)showInNote:(id)a0;
- (id)transitionViewForAttachment:(id)a0;
- (id)transitionViewForAttachment:(id)a0 atIndexPath:(id)a1;
- (void)updateEditedPreviewItem:(id)a0 atURL:(id)a1 shouldAttemptToWriteDataFromURL:(BOOL)a2 previewController:(id)a3;
- (void)updateEditedPreviewItemAtURL:(id)a0;
- (void)updateQuickLookFilteredAttachments;

@end
