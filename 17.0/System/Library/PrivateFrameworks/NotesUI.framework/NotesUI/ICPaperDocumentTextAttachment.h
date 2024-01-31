@class ICPDFEncryptionStateChecker, NSURL;

@interface ICPaperDocumentTextAttachment : ICSystemPaperTextAttachment

@property (class, readonly, nonatomic) BOOL isEnabled;

@property (copy, nonatomic) ICPDFEncryptionStateChecker *encryptionStateChecker;
@property (readonly, nonatomic) BOOL isLegacyMediaType;
@property (readonly, nonatomic) NSURL *pdfURL;
@property (nonatomic) BOOL viewportShouldSnapToAttachmentView;

+ (void)initialize;

- (id)fileType;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (id)_paperBundleURL;
- (void)attachmentView:(id)a0 didMoveToWindow:(id)a1;
- (id)attachmentAsNSTextAttachment;
- (void)attachmentView:(id)a0 willMoveToWindow:(id)a1;
- (BOOL)canDragWithoutSelecting;
- (short)effectiveAttachmentViewSizeForTextContainer:(id)a0;
- (id)inlineViews;
- (void)paperDidChange;
- (id)printableTextContentForAppearanceType:(unsigned long long)a0 textContainer:(id)a1;
- (id)supportedPresentationSizes;

@end
