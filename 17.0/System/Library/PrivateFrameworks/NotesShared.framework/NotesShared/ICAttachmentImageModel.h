@interface ICAttachmentImageModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)previewItemTitle;
- (double)placeholderHeight;
- (BOOL)hasThumbnailImage;
- (BOOL)shouldCropImage;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (id)generateHardLinkURLIfNecessaryForURL:(id)a0;
- (BOOL)hasPreviews;
- (BOOL)needsFullSizePreview;
- (long long)previewImageOrientation;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })previewImageOrientationTransform;
- (id)previewImageTypeUTI;
- (BOOL)showThumbnailInNoteList;
- (BOOL)supportsImageClassification;
- (BOOL)supportsOCR;
- (BOOL)supportsQuickLook;
- (void)updateFileBasedAttributes;
- (id)saveURL;
- (void)addLocation;
- (BOOL)canMarkup;
- (BOOL)canSaveURL;
- (id)placeholderImageSystemName;
- (double)placeholderWidth;
- (BOOL)shouldUsePlaceholderBoundsIfNecessary;
- (struct CGSize { double x0; double x1; })sizeByCroppingSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateAttachmentSize;

@end
