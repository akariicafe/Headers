@interface CKMovieAttachmentItem : CKAttachmentItem

+ (id)UTITypes;

- (struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })_defaultSize;
- (id)previewItemTitle;
- (id)_generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0;
- (void)generatePreviewWithCompletion:(id /* block */)a0;
- (BOOL)isIrisAsset;
- (BOOL)isJellyfishVideo;

@end
