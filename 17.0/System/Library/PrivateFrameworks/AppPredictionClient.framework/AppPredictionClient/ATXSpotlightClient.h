@class ATXSpotlightSuggestionProvider;
@protocol ATXSpotlightClientDelegate;

@interface ATXSpotlightClient : NSObject <ATXSpotlightSuggestionProviderDelegate> {
    ATXSpotlightSuggestionProvider *_provider;
}

@property (weak, nonatomic) id<ATXSpotlightClientDelegate> delegate;

+ (id)_responseWithUpcomingMedia;
+ (id)_topicWithSuggestion:(id)a0 layoutUUID:(id)a1;
+ (id)_resultWithAppBundleId:(id)a0;
+ (id)_resultWithATXAction:(id)a0;
+ (id)_fetchSpotlightRecentTopicsWithAlternateRanking:(long long)a0 limit:(long long)a1;
+ (id)detailedRowCardSectionWithTitle:(id)a0 subtitles:(id)a1 thumbnail:(id)a2 trailingImage:(id)a3;
+ (id)_fetchSpotlightRecentTopics:(long long)a0;
+ (id)_contextualActionIconFromLNImage:(id)a0;
+ (id)_resultWithShortcutsActionSuggestion:(id)a0;
+ (id)suggestedResultResponseWithLimit:(long long)a0;
+ (id)_resultWithActionSuggestion:(id)a0;
+ (id)_resultWithSuggestion:(id)a0;
+ (BOOL)topic:(id)a0 isDuplicateComparingTopics:(id)a1;
+ (id)_iconForParameterizedAutoShortcutContextualAction:(id)a0 provider:(id)a1;
+ (id)_resultWithAppClipSuggestion:(id)a0;
+ (id)_imageWithContextualActionIcon:(id)a0;
+ (BOOL)_isValidSuggestion:(id)a0 forWorldState:(id)a1;
+ (id)_imageWithDirectionsContextualAction:(id)a0;
+ (id)_extractTopicsFromRecentTopics:(id)a0;
+ (id)_resultWithLinkActionSuggestion:(id)a0;
+ (id)_resultWithContextualAction:(id)a0 title:(id)a1 subtitle:(id)a2;
+ (id)rerankRecents_Filter:(id)a0 removingType:(int)a1;
+ (id)_symbolImageForName:(id)a0;
+ (id)_descriptionForTopic:(id)a0;
+ (BOOL)isAutoShortcutsEnabledForSpotlightForBundleId:(id)a0;
+ (id)_accessoryImageWithContextualAction:(id)a0;
+ (id)recentUpcomingMediaActionsWithLimit:(unsigned long long)a0;
+ (BOOL)_shouldDisplayUpcomingMediaForTesting;
+ (BOOL)_isEqualRecentTopics:(id)a0 otherRecentTopics:(id)a1;
+ (id)_imageWithLinkImage:(id)a0;
+ (id)_responseWithSpotlightLayout:(id)a0 andSpotlightRecentTopics:(id)a1;
+ (BOOL)_isAutoShortcutEnabledForSpotlight:(id)a0;
+ (id)_resultWithLinkActionContainer:(id)a0;
+ (id)suggestedResultResponseWithLimit:(long long)a0 andSpotlightRecentTopics:(id)a1;
+ (BOOL)isAutoShortcutEnabledForSpotlightForBundleId:(id)a0 signature:(id)a1;
+ (id)rerankRecents_Normal:(id)a0;
+ (id)rerankRecents_LimitCount:(id)a0 oneCountDays:(double)a1 twoCountDays:(double)a2;
+ (id)rerankRecents:(id)a0 withAlternateRanking:(unsigned long long)a1;
+ (id)_resultWithIntent:(id)a0 title:(id)a1 subtitle:(id)a2 bundleIdForDisplay:(id)a3 appIcon:(id)a4;

- (id)init;
- (void).cxx_destruct;
- (void)suggestionProvider:(id)a0 didUpdateSuggestions:(id)a1;

@end
