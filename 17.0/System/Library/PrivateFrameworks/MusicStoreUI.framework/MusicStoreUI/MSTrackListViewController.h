@class NSString, MSTrackListHeaderView;

@interface MSTrackListViewController : MSStructuredPageViewController <MSTrackListHeaderDelegate> {
    MSTrackListHeaderView *_headerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reloadData;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_reloadHeaderView;
- (void)_restrictionsChangedNotification:(id)a0;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;
- (id)newTermsAndConditionsFooter;
- (void)_delayedReloadForWebViews;
- (id)_headerArtworkImage;
- (id)_headerArtworkItemImage;
- (id)_newImageDataProvider;
- (id)_newPlaceholderImage;
- (void)_reloadFooterView;
- (void)_webViewsLoaded:(id)a0;
- (id)purchasableItemsForHeaderView:(id)a0;

@end
