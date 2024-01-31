@class PKPassSecurePreviewContext, NSString, NSURL, LPWebLinkPresentationProperties;

@interface CKPassPreviewMediaObject : CKPassbookMediaObject <CKMediaObjectMetadataPreview>

@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;

@property (retain, nonatomic) LPWebLinkPresentationProperties *presentationProperties;
@property (retain, nonatomic) PKPassSecurePreviewContext *passPreview;
@property (retain, nonatomic) NSURL *overrideFileURL;
@property (retain, nonatomic) NSURL *overrideMetadataProperties;
@property (readonly, nonatomic) BOOL supportsPreviewMetadata;
@property (readonly, copy, nonatomic) NSString *previewMetadataFilenameExtension;

+ (id)_colorFromColorString:(id)a0;
+ (id)_darkenColor:(id)a0;
+ (void)_setTextForPresentationRow:(id)a0 representation:(id)a1;
+ (void)_updatePresentationPropertiesForRow:(id)a0 representation:(id)a1;
+ (void)_updatePresentationPropertiesForRow:(id)a0 text:(id)a1 color:(id)a2;
+ (BOOL)isPreviewable;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;

- (id)fileURL;
- (void).cxx_destruct;
- (id)previewMetadata;
- (id)_initWithOverrideFileURL:(id)a0;
- (Class)balloonViewClassForWidth:(double)a0 orientation:(char)a1;
- (id)generatePreviewMetadata;
- (BOOL)generatePreviewOutOfProcess;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)presentationPropertiesForReplyPreview;
- (id)presentationPropertiesForWidth:(double)a0 orientation:(char)a1;
- (Class)previewBalloonViewClass;
- (id)previewMetadataWithContentsOfURL:(id)a0 error:(out id *)a1;
- (BOOL)writePreviewMetadata:(id)a0 toURL:(id)a1 error:(out id *)a2;

@end
