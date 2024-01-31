@class NSMutableIndexSet, NSString, SKUISwooshViewController, SKUIResourceLoader, UIImage, SKUIImageDataConsumer, NSMapTable;

@interface SKUISwooshArtworkLoader : NSObject <SKUIArtworkRequestDelegate> {
    NSMapTable *_artworkRequestIDs;
    NSMutableIndexSet *_outstandingRequestIDs;
    UIImage *_placeholderImage;
}

@property (readonly, nonatomic) SKUIResourceLoader *artworkLoader;
@property (readonly, nonatomic) SKUISwooshViewController *swooshViewController;
@property (retain, nonatomic) SKUIImageDataConsumer *imageDataConsumer;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (unsigned long long)artworkRequestIdentifierForObject:(id)a0;
- (id)cachedImageForObject:(id)a0;
- (void)cancelImageLoading;
- (void)deprioritizePendingImageLoads;
- (id)initWithArtworkLoader:(id)a0 swoosh:(id)a1;
- (BOOL)loadImageForObject:(id)a0 URL:(id)a1 reason:(long long)a2;
- (BOOL)loadImageForObject:(id)a0 artworkRequest:(id)a1 reason:(long long)a2;
- (void)loadImagesForNextPageWithReason:(long long)a0;
- (void)setImage:(id)a0 forRequest:(id)a1;
- (void)setPlaceholderColorWithColorScheme:(id)a0;

@end
