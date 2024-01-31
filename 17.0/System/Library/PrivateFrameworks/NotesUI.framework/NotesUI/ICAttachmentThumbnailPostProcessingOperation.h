@class NSString, ICThumbnailDataCache, ICAppearanceInfo, NSURL, NSMutableArray, UIImage;

@interface ICAttachmentThumbnailPostProcessingOperation : NSOperation <ICAttachmentThumbnailOperation>

@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) double scale;
@property (retain, nonatomic) ICAppearanceInfo *appearanceInfo;
@property (retain, nonatomic) ICThumbnailDataCache *cache;
@property (retain, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) id /* block */ fallbackBlock;
@property (copy, nonatomic) id /* block */ processingBlock;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (retain, nonatomic) NSURL *mediaURL;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) BOOL showAsFileIcon;
@property (nonatomic) BOOL isMovie;
@property (retain, nonatomic) UIImage *image;

- (void)main;
- (void)addCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 appearanceInfo:(id)a2 cache:(id)a3 cacheKey:(id)a4 processingBlock:(id /* block */)a5 completionBlocks:(id)a6 fallbackBlock:(id /* block */)a7;
- (BOOL)isMatchingOperationForCacheKey:(id)a0 cache:(id)a1;

@end
