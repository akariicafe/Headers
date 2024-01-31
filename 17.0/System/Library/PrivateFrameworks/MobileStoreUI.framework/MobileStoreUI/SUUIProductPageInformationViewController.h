@class SUUIProductPageProductInfo, SUUIClientContext, NSString, NSOperationQueue, SUUIContentRatingArtworkResourceLoader, SUUIProductPageItem, SUUIProductInformationView;

@interface SUUIProductPageInformationViewController : UIViewController <SUUIContentRatingArtworkLoaderObserver> {
    SUUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SUUIProductInformationView *_informationView;
    SUUIProductPageProductInfo *_productInfo;
}

@property (readonly, nonatomic) SUUIClientContext *clientContext;
@property (readonly, nonatomic) SUUIProductPageItem *item;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (id)_contentRatingResourceLoader;
- (id)_informationLinesWithItem:(id)a0 ratingImage:(id)a1;
- (id)_informationLinesWithProductInfo:(id)a0;
- (void)_updateLinesWithRatingImage:(id)a0;
- (void)contentRatingArtworkLoader:(id)a0 didLoadImage:(id)a1 forContentRating:(id)a2;
- (id)initWithItem:(id)a0 clientContext:(id)a1;
- (id)initWithProductInformation:(id)a0 clientContext:(id)a1;

@end
