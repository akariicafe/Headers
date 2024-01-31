@class SiriUICardSectionView, SiriUISnippetViewController;

@interface SiriUILegacyStocksChartCardSectionViewController : CRKCardSectionViewController {
    SiriUISnippetViewController *_snippetViewController;
}

@property (retain, nonatomic) SiriUICardSectionView *view;

+ (id)cardSectionClasses;

- (void)_updateContentSize;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)_loadCardSectionView;
- (BOOL)_shouldRenderButtonOverlay;

@end
