@class NSHashTable;

@interface PXUserEventTracker : PXUserEventTrackerCommon {
    double _timeLoggedOnDetailViewWillAppear;
    double _timeLoggedOnMemoriesFeedWillAppear;
    unsigned long long _totalNumberOfRelatedJumps;
    unsigned long long _MaxDepthOfRelatedJumps;
}

@property (class, readonly) PXUserEventTracker *sharedInstance;

@property (retain, nonatomic, setter=_setRelatedLookupTable:) NSHashTable *_relatedLookupTable;

- (void)_applicationWillEnterForeground:(id)a0;
- (id)init;
- (void)_aggdDurationLoggingDryrun:(unsigned long long)a0 duration:(double)a1;
- (void)_resetDetailViewTraversalStatistics;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)_logAggdAddValueForScalarKey:(struct __CFString { } *)a0 value:(long long)a1;
- (void)logForYouSharedAlbumInvitationDeclinedCount;
- (void)logViewCountForLogSubSubState:(unsigned long long)a0;
- (void)logForYouMemoriesFeedCount;
- (void)didConfirmDeleteOfMemory;
- (void)willViewMemoriesFeedView;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromRecentActivityEntry;
- (void)didPlayMovieForAssetCollection:(id)a0;
- (void)logViewCountForLogState:(unsigned long long)a0;
- (void)didFinishViewingDetailsWithCurrentContext:(id)a0;
- (void)_aggdDurationLoggingDryrunForSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouInboxItemSelectedWithType:(long long)a0;
- (void)_logAggdDurationCounterForLogSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouSuggestionSavedCount;
- (void)logUserDidSelectGadgetAccessoryButtonWithKey:(struct __CFString { } *)a0;
- (void)didViewDetailsForAssetCollection:(id)a0;
- (void)logCounterValuesForLogState:(unsigned long long)a0 duration:(double)a1;
- (void)didFinishViewingMemoriesFeedView;
- (void)logInterestingMemoryNotificationSeenCount;
- (void)willViewDetailsWithCurrentContext:(id)a0;
- (void)logForYouSharedAlbumInvitationReportedAsJunkCount;
- (void)logForYouMemoriesDetailsCount;
- (void)logNavigationListViewTapWithKey:(struct __CFString { } *)a0;
- (void)_logAggdDurationCounterForLogState:(unsigned long long)a0 duration:(double)a1;
- (void).cxx_destruct;
- (void)logForYouSuggestionSharedCount;
- (void)didCreateMemoryViaAddToMemories;
- (void)_aggdJumpCountLoggingDryrun:(unsigned long long)a0 totalJumpCount:(unsigned long long)a1;
- (BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)a0;
- (void)_logAggdDurationCounterForLogSubSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouSuggestionViewedCount;
- (void)logFirstTimeExpericeReadiness:(BOOL)a0 forLibrarySize:(long long)a1;
- (void)logViewCountForLogSubState:(unsigned long long)a0;
- (struct __CFString { } *)_aggdKeyForFirstTimeExperienceIsReady:(BOOL)a0 librarySize:(long long)a1;
- (void)didPresentOneUpFromOrigin:(long long)a0;
- (void)logImpressionCountForEventSource:(unsigned long long)a0;
- (void)logForYouSharedAlbumInvitationAcceptedCount;
- (void)_logAggdRelatedJumpStatistics:(unsigned long long)a0 totalJumpCount:(unsigned long long)a1;
- (void)logForYouInboxViewedCount;
- (void)didFavoriteMemory;
- (void)logCounterValuesForLogSubSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouSuggestionViewed1UpCount;
- (void)didNavigateInOneUpFromOrigin:(long long)a0;
- (void)logCounterValuesForLogSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouContextualMemoriesDetailsCount;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromCollageView;
- (void)logInterestingMemoryNotificationRespondedCount;

@end
