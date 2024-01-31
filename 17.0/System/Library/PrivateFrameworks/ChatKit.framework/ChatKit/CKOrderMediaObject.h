@class FKOrderMessagesPreviewMetadata, NSString, NSURL, LPWebLinkPresentationProperties;

@interface CKOrderMediaObject : CKMediaObject <CKMediaObjectMetadataPreview>

@property (retain, nonatomic) LPWebLinkPresentationProperties *presentationProperties;
@property (retain, nonatomic) NSURL *overrideFileURL;
@property (retain, nonatomic) FKOrderMessagesPreviewMetadata *metadata;
@property (retain, nonatomic) NSURL *overrideMetadataProperties;
@property (readonly, nonatomic) BOOL supportsPreviewMetadata;
@property (readonly, copy, nonatomic) NSString *previewMetadataFilenameExtension;

+ (id)UTITypes;
+ (id)_modifyColor:(id)a0 lighten:(BOOL)a1;
+ (id)_paddedImage:(id)a0 imageType:(unsigned char)a1 bubbleWidth:(double)a2;
+ (void)_setTextForPresentationRow:(id)a0 representation:(id)a1;
+ (void)_updatePresentationPropertiesForRow:(id)a0 representation:(id)a1;
+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;

- (int)mediaType;
- (void).cxx_destruct;
- (BOOL)isSupported;
- (id)previewItemTitle;
- (id)presentationPropertiesForWidth:(double)a0;
- (id)previewMetadata;
- (id)_initWithOverrideFileURL:(id)a0;
- (id)attachmentSummary:(unsigned long long)a0;
- (Class)balloonViewClassForWidth:(double)a0 orientation:(char)a1;
- (id)generatePreviewMetadata;
- (BOOL)generatePreviewOutOfProcess;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (id)metricsCollectorMediaType;
- (id)presentationPropertiesForReplyPreview;
- (id)presentationPropertiesForWidth:(double)a0 orientation:(char)a1;
- (Class)previewBalloonViewClass;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (id)previewMetadataWithContentsOfURL:(id)a0 error:(out id *)a1;
- (BOOL)shouldBeQuickLooked;
- (BOOL)shouldShowDisclosure;
- (BOOL)shouldShowViewer;
- (BOOL)writePreviewMetadata:(id)a0 toURL:(id)a1 error:(out id *)a2;

@end
