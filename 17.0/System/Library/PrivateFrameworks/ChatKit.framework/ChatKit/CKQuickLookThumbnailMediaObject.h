@interface CKQuickLookThumbnailMediaObject : CKMediaObject

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;

- (id)attachmentSummary:(unsigned long long)a0;
- (id)diskCachedThumbnailForOrientation:(char)a0;
- (BOOL)isPreviewable;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (BOOL)shouldSuppressPreview;

@end
