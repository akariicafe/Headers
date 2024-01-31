@interface CKAnimatedImageMediaObject : CKImageMediaObject <IMAnimatedImagePreviewGeneratorProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long stickerEffectType;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (double)maxPixelDimensionOfThumbnailWithImagePixelSize:(struct CGSize { double x0; double x1; })a0 forWidth:(double)a1 isSticker:(BOOL)a2;

- (id)notificationCenter;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)animatedImageForWidth:(double)a0;
- (id)bbPreviewFillToSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canPerformQuickAction;
- (id)generateAndPersistAnimatedPreviewFromImageData:(id)a0 forWidth:(double)a1 withTransferGUID:(id)a2 isSticker:(BOOL)a3;
- (id)generateAndPersistAnimatedPreviewFromSourceURL:(id)a0 senderContext:(id)a1 forWidth:(double)a2 withTransferGUID:(id)a3 isSticker:(BOOL)a4;
- (id)generateThumbnailsForWidth:(double)a0 isSticker:(BOOL)a1 orientation:(char)a2;
- (id /* block */)imageEdgeEnhancementBlockIfNecessary;
- (id)initWithTransfer:(id)a0 context:(id)a1 forceInlinePreview:(BOOL)a2;
- (id)metricsCollectorMediaType;
- (BOOL)needsAnimation;
- (unsigned long long)oopPreviewRequestBudget;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (void)prewarmPreviewForWidth:(double)a0 orientation:(char)a1;
- (void)saveAnimatedPreview:(id)a0 toURL:(id)a1 forOrientation:(char)a2;
- (id)savedAnimatedPreviewFromURL:(id)a0 forOrientation:(char)a1;
- (id)savedPreviewFromURL:(id)a0 forOrientation:(char)a1;
- (id)scaledThumbnailFromThumbnail:(id)a0 forWidth:(double)a1 isSticker:(BOOL)a2;
- (id)thumbnailAtIndex:(unsigned long long)a0 forWidth:(double)a1 imageData:(id)a2 isSticker:(BOOL)a3 orientation:(char)a4;
- (BOOL)validPreviewExistsAtURL:(id)a0;
- (BOOL)validatePreviewFormat;

@end
