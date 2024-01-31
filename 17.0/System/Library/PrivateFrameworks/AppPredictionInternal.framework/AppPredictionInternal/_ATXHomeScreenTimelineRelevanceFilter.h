@class ATXInformationStore;

@interface _ATXHomeScreenTimelineRelevanceFilter : NSObject {
    ATXInformationStore *_timelineRelevanceStore;
}

- (id)init;
- (BOOL)_isCurrentTimelineRelevanceScoreZeroForSuggestion:(id)a0 family:(long long)a1 intentIndexingHash:(long long)a2;
- (id)removeSuggestionsByTimelineRelevanceIfNecessary:(id)a0 homeScreenState:(id)a1;
- (id)_nextTimelineRelevanceChangeDateRelatedToSuggestions:(id)a0;
- (BOOL)_widgetExistsOnScreen:(id)a0 homeScreenState:(id)a1;
- (void)_cancelAnyExistingScheduledRefresh;
- (id)initWithTimelineRelevanceStore:(id)a0;
- (void).cxx_destruct;
- (void)_scheduleBlendingRefreshAtDate:(id)a0 reason:(id)a1;
- (void)scheduleBlendingRefreshAtNextTimelineRelevanceChangeRelatedToSuggestions:(id)a0;
- (id)_nextRefreshDateForSuggestion:(id)a0 familyMask:(unsigned long long)a1;

@end
