@class UICollectionView, PXSearchCPAnalyticsSession, NSObject, UISearchController, UISearchBar, PXSearchQuery, PXSearchComposableDataSource, UIScrollView, NSString, PXViewControllerPresenter, PXSearchResultsOneUpViewModel, PXSearchQueryController, PXPhotosProgressBannerView, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PXUISearchResultsViewController : UIViewController <PXOneUpPresentationDelegate, PXSearchTapToRadarSectionProviderDelegate, UICollectionViewDelegate, UIScrollViewDelegate, PXSettingsKeyObserver, UIScrollViewDelegate, ParsecReportingDelegate, UISearchResultsUpdating, UISearchBarDelegate>

@property (readonly, nonatomic) UIScrollView *ppt_scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) PXSearchComposableDataSource *dataSource;
@property (retain, nonatomic) PXSearchQueryController *queryController;
@property (copy, nonatomic) PXSearchQuery *currentSearchQuery;
@property (retain, nonatomic) PXSearchCPAnalyticsSession *analyticsSession;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (copy, nonatomic) id /* block */ resultsHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *biomeRequestQueue;
@property (nonatomic) BOOL isIndexingPaused;
@property (readonly, nonatomic) BOOL showsIndexingFooter;
@property (nonatomic) unsigned long long itemsRemainingCount;
@property (retain, nonatomic) PXPhotosProgressBannerView *indexingBanner;
@property (retain, nonatomic) PXSearchResultsOneUpViewModel *oneUpViewModel;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (copy, nonatomic) id /* block */ searchDidEndHandler;
@property (nonatomic) BOOL automaticallyPerformSearches;
@property (nonatomic) BOOL showTopAssets;
@property (weak, nonatomic) UISearchController *searchController;
@property (nonatomic) BOOL searchBarWantsFirstResponder;
@property (nonatomic) unsigned long long nextAnalyticsSessionBeginType;
@property (retain, nonatomic) PXViewControllerPresenter *viewControllerPresenter;
@property (copy, nonatomic) id /* block */ cancelButtonHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_analyticsSessionResultTypeForCollectionType:(unsigned long long)a0;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (long long)oneUpPresentationOrigin:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)oneUpPresentation:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (long long)oneUpPresentationActionContext:(id)a0;
- (void).cxx_destruct;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (void)searchBarSearchButtonClicked:(id)a0;
- (id)oneUpPresentationSearchQueryMatchInfo:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (unsigned long long)_searchResultTypes;
- (void)_scrollViewStoppedScrolling;
- (id)initWithSearchBar:(id)a0 photoLibrary:(id)a1;
- (id)_collectionViewLayoutWithProviders:(id)a0;
- (void)_configureCollectionViewWithSectionProviders:(id)a0;
- (void)_configureDataSourceForCollectionView:(id)a0 sectionProviders:(id)a1;
- (void)_configureQueryControllerWithResultsSectionProvider:(id)a0 suggestionsSectionProvider:(id)a1 queryStatusSectionProvider:(id)a2 tapToRadarSectionProvider:(id)a3 indexStatusSectionProvider:(id)a4;
- (long long)_contentInsetsReferenceForTraitCollection:(id)a0;
- (void)_didSelectAlbumSearchResult:(id)a0 searchQueryMatchInfo:(id)a1;
- (void)_didSelectCollectionsSeeAllButtonForSection:(id)a0 sectionProvider:(id)a1 searchResultsHeaderView:(id)a2;
- (void)_didSelectDetailCollectionSearchResult:(id)a0;
- (void)_didSelectItemIdentifier:(id)a0 inResultsSectionProvider:(id)a1;
- (void)_didSelectItemIdentifier:(id)a0 inSuggestionsSectionProvider:(id)a1;
- (void)_didSelectMemoryCollectionSearchResult:(id)a0;
- (void)_didSelectTapToRadar:(id)a0;
- (void)_didSelectTopAssetsSeeAllButtonForSection:(id)a0 allAssetResultUUIDs:(id)a1 title:(id)a2 searchQueryMatchInfo:(id)a3;
- (id)_emptyPhotosViewControllerForSearchResult:(id)a0;
- (void)_endAnalyticsSession;
- (id)_keywordForRadarRoute:(id)a0;
- (void)_notifyAnalyticsInteractedWithCurrentSearch;
- (void)_notifyAnalyticsNoResultsForSearch;
- (void)_notifyAnalyticsOneUpTopAssets;
- (void)_notifyAnalyticsSearchChanged;
- (void)_notifyAnalyticsSearchResultSelected:(id)a0;
- (void)_notifyAnalyticsSeeAllSelectedWithResultType:(unsigned long long)a0;
- (void)_notifyAnalyticsSuggestionSelectedWithType:(unsigned long long)a0;
- (void)_notifyAnalyticsWordEmbeddingPresented;
- (id)_ppt_resultsSectionProvider;
- (void)_pushViewController:(id)a0;
- (id)_radarInfoForRadarRoute:(id)a0 searchQuery:(id)a1;
- (id)_radarRoutes;
- (id)_radarRoutesDescription;
- (void)_registerNotificationsForAnalytics;
- (void)_reportTraitCollectionChangeToParsec;
- (void)_reportVisibleSearchResultsToParsec:(id)a0;
- (unsigned long long)_searchAnalyticsSessionResultTypeForSearchResult:(id)a0;
- (unsigned long long)_searchAnalyticsSessionResultTypeForSearchResultType:(unsigned long long)a0 subtype:(unsigned long long)a1;
- (void)_searchIndexStatusDidChange:(id)a0;
- (id)_searchResultsSectionProvider;
- (unsigned long long)_searchSuggestionLimit;
- (void)_sendSearchResultSelectionEventToBiomeWithAssetUUID:(id)a0;
- (void)_shouldEndAnalyticsSession:(id)a0;
- (id)_templateForRadarRoute:(id)a0;
- (id)_titleForRadarRoute:(id)a0 searchQuery:(id)a1;
- (void)_unregisterNotificationsForAnalytics;
- (void)_updateIndexingBannerConstraints;
- (void)_updateIndexingBannerView;
- (void)_updateSearchResults:(id)a0;
- (void)didSelectAssetAggregationSearchResult:(id)a0 searchQueryMatchInfo:(id)a1;
- (void)didSelectAssetSearchResult:(id)a0 searchQueryMatchInfo:(id)a1;
- (void)didSelectCollectionSearchResult:(id)a0 searchQueryMatchInfo:(id)a1;
- (void)didSelectPersonSearchResult:(id)a0;
- (void)didSelectSeeAllForAssetUUIDs:(id)a0 title:(id)a1 searchQueryMatchInfo:(id)a2;
- (void)didSelectTapToRadar;
- (void)ppt_expandAllSections;
- (void)reportVisibleSearchResultsToParsec;
- (void)setResultsStatus:(unsigned long long)a0 queryResult:(id)a1;
- (void)showOneUpForAssetSearchResult:(id)a0 searchQueryMatchInfo:(id)a1;

@end
