@interface ICAttachmentSystemPaperModel : ICAttachmentPaperBundleModel

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } paperContentBoundsHint;
@property (nonatomic) BOOL hasDeepLink;
@property (nonatomic) BOOL paperHasEnhancedCanvas;
@property (nonatomic) BOOL paperHasNewInks2022;
@property (nonatomic) BOOL paperHasNewInks2023;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)account;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (void)updateMinimumSupportedVersionIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)addMergeableDataToCloudKitRecord:(id)a0 approach:(long long)a1 mergeableFieldState:(id)a2;
- (id)additionalIndexableTextContentInNote;
- (id)correctedHardlinkURLFileExtensionForExtension:(id)a0;
- (void)fixupMetadataAndMinimumSupportedNotesVersion;
- (BOOL)isIncludedInGenericAttachmentCount;
- (BOOL)preferLocalPreviewImages;
- (BOOL)previewsSupportMultipleAppearances;
- (id)searchableTextContentInNote;
- (BOOL)shouldShowInContentInfoText;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;
- (void)updateAttachmentMetadataWithBlock:(id /* block */)a0;

@end
