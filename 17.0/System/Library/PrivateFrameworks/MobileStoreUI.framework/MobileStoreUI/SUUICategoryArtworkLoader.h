@class SUUIImageDataConsumer, NSString, UIImage, SUUIResourceLoader, NSMapTable, NSHashTable;

@interface SUUICategoryArtworkLoader : NSObject <SUUIArtworkRequestDelegate> {
    NSMapTable *_artworkRequestIDs;
    NSHashTable *_observers;
    UIImage *_placeholderImage;
}

@property (readonly, nonatomic) SUUIResourceLoader *artworkLoader;
@property (retain, nonatomic) SUUIImageDataConsumer *imageDataConsumer;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)cachedImageForCategory:(id)a0;
- (id)initWithArtworkLoader:(id)a0;
- (void)loadImageForCategory:(id)a0 reason:(long long)a1;

@end
