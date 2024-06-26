@class UIView, NSString, NSArray, _WKRemoteObjectInterface, NSMutableDictionary, UIButton, UIBarButtonItem, UIBarButtonItemGroup;
@protocol MFMailSignatureController, MFComposeWebViewDelegate, MFComposeBodyFieldController, MFMailComposeViewDelegate;

@interface MFComposeWebView : WKWebView <MFComposeBodyFieldObserver, WKNavigationDelegate, _WKInputDelegate, WKUIDelegatePrivate, MFMailMenuCommandProvider> {
    id<MFMailComposeViewDelegate> _mailComposeViewDelegate;
    NSString *_compositionContextID;
    id<MFMailSignatureController> _signatureControllerProxy;
    id<MFComposeBodyFieldController> _bodyFieldProxy;
    BOOL _shouldShowStandardButtons;
    unsigned long long _imageCount;
    BOOL _dirty;
    unsigned long long _dirtyChangeIgnoreCount;
    _WKRemoteObjectInterface *_bodyFieldObserverInterface;
    _WKRemoteObjectInterface *_richLinkGeneratorInterface;
    NSArray *_selectedAttachmentIdentifiers;
    unsigned long long _attachmentSequenceNumber;
    NSMutableDictionary *_attachmentsByUniqueIdentifier;
    NSMutableDictionary *_attachmentCIDsByIdentifier;
    NSArray *_originalAttachmentWrappers;
    BOOL _selectionContainsLink;
    BOOL _isFinishing;
    BOOL _originalAttachmentsWereRestored;
    BOOL _attachmentDataMissingAlertDisplayed;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _richLinkSourceRect;
    UIButton *_makeLinkAccessoryButton;
    BOOL __didUpdateInputAssistantItem;
    BOOL __didReloadInputAssistantItemOnFocus;
}

@property (class, readonly, nonatomic) NSArray *menuCommands;

@property (retain, nonatomic) UIView *inputViewForPreservingFocus;
@property (retain, nonatomic) UIBarButtonItem *textFromCameraButtonItem;
@property (retain, nonatomic) UIBarButtonItemGroup *photoAndCameraGroup;
@property (retain, nonatomic) NSMutableDictionary *richLinkActivityIndicators;
@property (retain, nonatomic) NSArray *_leadingInputAssistantItemGroups;
@property (retain, nonatomic) NSArray *_trailingInputAssistantItemGroups;
@property (weak, nonatomic) id<MFComposeWebViewDelegate> composeWebViewDelegate;
@property (weak, nonatomic) id<MFMailComposeViewDelegate> mailComposeViewDelegate;
@property (readonly, nonatomic) id<MFMailSignatureController> signatureControllerProxy;
@property (nonatomic, getter=isDirty) BOOL dirty;
@property (nonatomic) BOOL isQuickReply;
@property (weak, nonatomic) NSString *compositionContextID;
@property (readonly, nonatomic) BOOL allowsAttachmentElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_basicWebViewConfiguration;
+ (id)_webViewConfiguration:(BOOL)a0;
+ (void)setURLCacheBlock:(id /* block */)a0;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (void)_close;
- (long long)_webView:(id)a0 dataOwnerForDropSession:(id)a1;
- (void)_webView:(id)a0 takeFocus:(long long)a1;
- (void)_webView:(id)a0 didStartInputSession:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (long long)_webView:(id)a0 decidePolicyForFocusedElement:(id)a1;
- (long long)_webView:(id)a0 dataOwnerForDragSession:(id)a1;
- (BOOL)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buildMenuWithBuilder:(id)a0;
- (id)keyCommands;
- (void)_webView:(id)a0 willStartInputSession:(id)a1;
- (void).cxx_destruct;
- (id)_textInputTraits;
- (BOOL)becomeFirstResponder;
- (id)inputView;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)htmlString;
- (void)_findInteraction:(id)a0 navigatorPlacementWillChange:(id)a1;
- (id)_findInteractionScrollViewForInsetAdjustment:(id)a0;
- (BOOL)_sourceIsManaged;
- (void)_webView:(id)a0 didChangeFontAttributes:(id)a1;
- (void)_webView:(id)a0 didInsertAttachment:(id)a1 withSource:(id)a2;
- (void)_webView:(id)a0 didInvalidateDataForAttachment:(id)a1;
- (void)_webView:(id)a0 didRemoveAttachment:(id)a1;
- (void)composeBodyFieldIsDirtyChanged:(BOOL)a0;
- (void)_addAttachment:(id)a0;
- (id)_bodyFieldProxy;
- (void)_didTapAddLink:(id)a0;
- (void)removeMediaWithAssetIdentifier:(id)a0;
- (void)_addContextMenusToBuilder:(id)a0;
- (id)_addInlineAttachmentWithData:(id)a0 fileName:(id)a1 type:(id)a2 contentID:(id)a3;
- (id)_attachmentInfoByIdentifier;
- (id)_attachmentInfoByURL;
- (BOOL)_canPerformCommandAction:(SEL)a0 withSender:(id)a1;
- (void)_captureTextFromCamera;
- (void)_changeQuoteLevelBy:(long long)a0;
- (void)_composeWebView:(id)a0 composeBodyIsEmpty:(BOOL)a1;
- (void)_composeWebView:(id)a0 didChangeHeight:(double)a1;
- (void)_decreaseQuoteLevel:(id)a0;
- (void)_decreaseQuoteLevelKeyCommandInvoked:(id)a0;
- (void)_didTapCameraButton:(id)a0;
- (void)_didTapEditLink:(id)a0;
- (void)_didTapEditTextDescription:(id)a0;
- (void)_didTapInsertDrawing:(id)a0;
- (void)_didTapInsertDrawingOrMarkupButton:(id)a0;
- (void)_didTapInsertPhotoButton:(id)a0;
- (void)_didTapMarkupButton:(id)a0;
- (void)_didTapRemoveLink;
- (id)_filenameForVideoAttachmentAtURL:(id)a0;
- (BOOL)_getExtensionAndMimeTypeForImageData:(id)a0 outExtension:(id *)a1 outMimeType:(id *)a2;
- (void)_importDocumentCommandInvoked:(id)a0;
- (void)_increaseQuoteLevel:(id)a0;
- (void)_increaseQuoteLevelKeyCommandInvoked:(id)a0;
- (void)_insertDocumentFromData:(id)a0 isImage:(BOOL)a1 contentID:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_linkAccessoryButtonFrameForSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_mailComposeEditingLeadingInputAssistantGroups;
- (id)_mailComposeEditingTrailingInputAssistantGroups;
- (id)_makeAttachmentDataWithFileURL:(id)a0 type:(id)a1;
- (id)_makeRichLinkTemplateButtonWithOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)_menuDidHide:(id)a0;
- (void)_pasteAsQuotationKeyCommandInvoked:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectFromMessageDict:(id)a0;
- (void)_removeAttachment:(id)a0;
- (void)_removeInlineAttachment:(id)a0;
- (void)_scanDocumentCommandInvoked:(id)a0;
- (BOOL)_shouldShowAddLinkButton;
- (BOOL)_shouldShowInsertPhotosButton;
- (BOOL)_shouldShowMarkupButton;
- (void)_showmakeLinkAccessoryButton;
- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(BOOL)a0 shouldQuote:(BOOL)a1;
- (void)appendMarkupString:(id)a0 quote:(BOOL)a1;
- (void)appendOrReplace:(id)a0 withMarkupString:(id)a1 quote:(BOOL)a2 completion:(id /* block */)a3;
- (void)attachmentTapped:(id)a0;
- (void)changeQuoteLevel:(long long)a0;
- (void)composeBodyFieldAddAttachmentWithData:(id)a0 filename:(id)a1 mimeType:(id)a2 uniqueID:(id)a3;
- (void)composeBodyFieldAddLinkPreviewsEnabled:(id /* block */)a0;
- (void)composeBodyFieldDidChange;
- (void)composeBodyFieldDidThrowException:(id)a0;
- (void)composeBodyFieldQuickReplyEnabled:(id /* block */)a0;
- (void)composeBodyFieldSelectedLinkTextDidChange;
- (void)composeBodyFieldSelectionContainsLinkStateDidChange:(BOOL)a0;
- (void)composeBodyIsEmpty:(BOOL)a0;
- (void)compositionDidFailToFinish;
- (void)compositionWillFinish;
- (id)containsRichText;
- (id)contentIDsForMediaAttachments;
- (void)enableQuickReply:(BOOL)a0;
- (void)getHTMLDataObject:(id /* block */)a0;
- (void)getHTMLDataObjectRemovingSignature:(BOOL)a0 completion:(id /* block */)a1;
- (void)getHTMLDataObjectRemovingSignature:(BOOL)a0 removeQuotes:(BOOL)a1 completion:(id /* block */)a2;
- (void)hideMakeLinkAccessoryButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isQuickReply:(BOOL)a1;
- (void)insertDocumentWithData:(id)a0 fileName:(id)a1 mimeType:(id)a2 contentID:(id)a3;
- (void)insertDocumentWithURL:(id)a0 isDrawingFile:(BOOL)a1;
- (void)insertPhotoOrVideoWithAssetIdentifier:(id)a0 infoDictionary:(id)a1 completion:(id /* block */)a2;
- (void)insertRichLinkWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)insertScannedDocumentWithData:(id)a0;
- (id)makeLinkAccessoryButton;
- (void)makeRichLinkFromSelection;
- (void)markupSelectedAttachment;
- (id)mimeTypeForFilename:(id)a0;
- (id)nextAttachmentName;
- (void)pasteRichLink;
- (void)placeCaretAtStartOfBodyField;
- (id)plainTextContent;
- (void)prepareDataForDocumentAtURLForInsertion:(id)a0 completion:(id /* block */)a1;
- (void)prependMarkupString:(id)a0 quote:(BOOL)a1;
- (void)prependPreamble:(id)a0 quote:(BOOL)a1;
- (void)prependString:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfElementWithID:(id)a0;
- (void)releaseFocusAfterDismissing:(BOOL)a0;
- (void)removeRichLinkFromSelection;
- (void)replaceAttachment:(id)a0 withDocumentAtURL:(id)a1 completion:(id /* block */)a2;
- (void)replaceFilenamePlaceholderWithAttachment:(id)a0 fileName:(id)a1 mimeType:(id)a2 contentID:(id)a3;
- (void)replaceImagesIfNecessary;
- (void)retainFocusAfterPresenting;
- (void)richLinkDidFinishLoading:(id)a0;
- (void)richLinkDidStartLoading:(id)a0;
- (void)scaleImagesToScale:(unsigned long long)a0;
- (void)selectedAttachmentIdentifiersDidChange:(id)a0;
- (void)setCaretPosition:(unsigned long long)a0;
- (void)setMarkupString:(id)a0;
- (void)setMarkupString:(id)a0 quote:(BOOL)a1;
- (void)setOriginalAttachmentInfo:(id)a0;
- (void)setPrefersFirstLineSelection;
- (void)setReplacementFilenamesByContentID:(id)a0;
- (void)showOriginalAttachments;
- (void)showRichLinkAccessoryButtonForExistingRichLink:(BOOL)a0 message:(id)a1;
- (void)stripCustomBodyIdentifiers;
- (void)unscaleImages;
- (void)updateInputAssistantItem;

@end
