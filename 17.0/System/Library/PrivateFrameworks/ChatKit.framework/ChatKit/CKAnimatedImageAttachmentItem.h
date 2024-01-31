@class NSURL;

@interface CKAnimatedImageAttachmentItem : CKImageAttachmentItem

@property (retain, nonatomic) NSURL *animatedPreviewURL;
@property struct CGSize { double width; double height; } imageSize;

+ (id)UTITypes;
+ (BOOL)shouldScaleUpPreview;

- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (id)_newImageData;
- (id)_savedPreviewFromURL:(id)a0;
- (id)animatedPreviewURL:(BOOL)a0;
- (id)generatePreviewFromThumbnail:(id)a0 width:(double)a1;
- (void)generatePreviewWithCompletion:(id /* block */)a0;
- (id)thumbnailAtIndex:(unsigned long long)a0 forWidth:(double)a1 withImageData:(id)a2;

@end
