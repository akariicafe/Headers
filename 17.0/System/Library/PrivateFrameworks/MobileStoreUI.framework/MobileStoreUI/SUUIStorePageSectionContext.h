@class SUUILayoutCache, SUUIClientContext, SUUIMetricsController, SUUIMetricsImpressionSession, SUUIStorePageSectionsViewController, SUUIColorScheme, SUUIItemOfferButtonAppearance, UICollectionView, SUUIResourceLoader, UIColor;

@interface SUUIStorePageSectionContext : NSObject {
    SUUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    UIColor *_placeholderColor;
}

@property (readonly, nonatomic) SUUIMetricsImpressionSession *activeMetricsImpressionSession;
@property (readonly, nonatomic) SUUIClientContext *clientContext;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) SUUIColorScheme *colorScheme;
@property (readonly, nonatomic) UIColor *placeholderColor;
@property (readonly, nonatomic) long long defaultPinningTransitionStyle;
@property (readonly, nonatomic) SUUIItemOfferButtonAppearance *itemOfferButtonAppearance;
@property (readonly, nonatomic) double activePageWidth;
@property (readonly, nonatomic) double landscapePageWidth;
@property (readonly, nonatomic) double portraitPageWidth;
@property (readonly, nonatomic) double horizontalPadding;
@property (readonly, nonatomic) long long layoutStyle;
@property (readonly, nonatomic) SUUIMetricsController *metricsController;
@property (readonly, weak, nonatomic) SUUIStorePageSectionsViewController *parentViewController;
@property (readonly, nonatomic) SUUIResourceLoader *resourceLoader;
@property (readonly, nonatomic) SUUILayoutCache *textLayoutCache;

- (void)_setLayoutStyle:(long long)a0;
- (id)init;
- (void)_setCollectionView:(id)a0;
- (void).cxx_destruct;
- (void)_setActiveMetricsImpressionSession:(id)a0;
- (void)_setActivePageWidth:(double)a0;
- (void)_setColorScheme:(id)a0;
- (void)_setDefaultPinningTransitionStyle:(long long)a0;
- (void)_setLandscapePageWidth:(double)a0;
- (void)_setMetricsController:(id)a0;
- (void)_setParentViewController:(id)a0;
- (void)_setPortraitPageWidth:(double)a0;
- (void)_setResourceLoader:(id)a0;
- (void)_setTextLayoutCache:(id)a0;

@end
