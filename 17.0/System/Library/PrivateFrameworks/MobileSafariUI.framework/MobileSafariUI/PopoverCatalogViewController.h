@class CatalogViewController;

@interface PopoverCatalogViewController : AbstractCatalogViewController {
    double _startPagePreferredHeight;
}

@property (weak, nonatomic) CatalogViewController *primaryCatalogViewController;

- (id)universalSearchFirstTimeExperienceViewController;
- (void)didGainOwnershipOfCompletionsViewController;
- (double)requiredContentWidth;
- (id)startPageViewController;
- (id)completionsViewController;
- (void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;
- (double)maxContentHeight;
- (void)viewWillLayoutSubviews;
- (double)_preferredHeightForStartPage;
- (void)didGainOwnershipOfStartPageViewController;
- (id)completionsViewControllerIfLoaded;
- (void).cxx_destruct;
- (void)updateStartPagePreferredContentSize;
- (void)resetStartPagePreferredHeight;

@end
