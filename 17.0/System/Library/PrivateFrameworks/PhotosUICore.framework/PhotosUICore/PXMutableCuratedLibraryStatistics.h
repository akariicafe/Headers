@interface PXMutableCuratedLibraryStatistics : PXCuratedLibraryStatistics {
    long long *_counts;
}

- (id)init;
- (void)dealloc;
- (long long)_coutIndexForPlaybackStyle:(long long)a0 displayProminence:(long long)a1 autoPlaybackEligibility:(long long)a2;
- (void)_incrementCountForPlaybackStyle:(long long)a0 displayProminence:(long long)a1 autoPlaybackEligibility:(long long)a2;
- (void)appendStatisticsForSection:(long long)a0 assetsDataSource:(id)a1 playbackController:(id)a2 visibleItems:(id)a3 heroItems:(id)a4 keyItem:(long long)a5;
- (long long)numberOfAssetsWithPlaybackStyle:(long long)a0 displayProminence:(long long)a1 autoPlaybackEligibility:(long long)a2;

@end
