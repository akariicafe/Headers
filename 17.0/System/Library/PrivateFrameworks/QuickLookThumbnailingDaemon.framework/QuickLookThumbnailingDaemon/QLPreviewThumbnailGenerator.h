@class QLPlatformImage, NSString, QLThumbnailGenerationRequest, QLThumbnailItem, NSObject, QLThumbnailMetadata;
@protocol OS_dispatch_queue;

@interface QLPreviewThumbnailGenerator : NSObject

@property BOOL resultIsLowQuality;
@property BOOL wantsLowQuality;
@property (retain) QLThumbnailMetadata *generatedProperties;
@property int status;
@property (retain) QLPlatformImage *thumbnailImage;
@property (retain) QLThumbnailItem *item;
@property BOOL resultHasIconModeApplied;
@property (copy) NSString *extensionBadge;
@property (retain) QLThumbnailGenerationRequest *request;
@property int flavor;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *generationQueue;
@property unsigned long long sandboxExtension;

+ (double)cornerRadiusForSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)canGenerateThumbnailForURL:(id)a0;
+ (id)generateIconDataFromThumbnailData:(id)a0 inputFormat:(id)a1 outputFormat:(id *)a2 outputContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 desiredSize:(struct CGSize { double x0; double x1; })a4 desiredScale:(double)a5 desiredFlavor:(int)a6 extensionBadge:(id)a7 wantsLowQuality:(BOOL)a8 iconVariant:(long long)a9;

- (void).cxx_destruct;
- (void)cancel;
- (struct CGSize { double x0; double x1; })_pixelSize;
- (struct CGImage { } *)_createThumbnailForPDFInProcess;
- (struct CGImage { } *)_createThumbnailForImageSource:(struct CGImageSource { } *)a0;
- (struct CGContext { } *)_beginContext;
- (struct CGContext { } *)_beginContextWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGContext { } *)_beginContextWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)_createThumbnailForIWorkFile;
- (struct CGImage { } *)_createThumbnailForImage;
- (struct CGImage { } *)_createThumbnailForLivePhoto;
- (struct CGImage { } *)_createThumbnailForMovie;
- (void)_createThumbnailForPDF:(id /* block */)a0;
- (struct CGImage { } *)_createThumbnailForText;
- (struct CGImage { } *)_drawRTFThumbnailFromAttributedString:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (void)_drawRemotePDFPage:(id)a0 atIndex:(long long)a1 completionHandler:(id /* block */)a2;
- (struct CGImage { } *)_drawTextThumbnailFromAttributedString:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (void)_generateThumbnailFromThirdPartyExtensionAndReplyWith:(id /* block */)a0;
- (void)_generateThumbnailWithWillStartBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (double)_minimumDimensionForPDFPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 requestThumbnailSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (void)_replyWithImage:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateWithCompletionBlock:(id /* block */)a0;
- (void)generateWithWillStartBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (id)initWithGenerationRequest:(id)a0 lowQuality:(BOOL)a1 thumbnailItem:(id)a2;

@end
