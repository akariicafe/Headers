@class ATXLockscreenBlacklist, NSString, ATXNotificationsLoggingServer, ATXActionToWidgetConverter, ATXBlendingLayerHyperParameters, ATXEngagementRecordManager, ATXSuggestionModeFilter;

@interface ATXSuggestionPreprocessor : NSObject <ATXSuggestionModeFilterObserver, ATXSuggestionPreprocessorProtocol> {
    ATXActionToWidgetConverter *_converter;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXNotificationsLoggingServer *_notificationsLoggingServer;
    ATXLockscreenBlacklist *_lockscreenBlacklist;
    ATXBlendingLayerHyperParameters *_hyperParameters;
    ATXSuggestionModeFilter *_modeFilter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bundleIdAssociatedWithSuggestion:(id)a0;
+ (id)contactIdsAssociatedWithSuggestion:(id)a0;
+ (id)contactIdsAssociatedWithContactsWidgetIntent:(id)a0;

- (id)initWithEngagementRecordManager:(id)a0 notificationsLoggingServer:(id)a1 lockscreenBlacklist:(id)a2 actionToWidgetConverter:(id)a3;
- (id)suggestionsByPreprocessingRankedSuggestions:(id)a0 forConsumerSubType:(unsigned char)a1;
- (id)init;
- (void)configurationDidChangeForFilter:(id)a0;
- (id)filterOutSuggestionsForUninstalledOrRestrictedApps:(id)a0;
- (id)filterOutRecentlyEngagedSuggestions:(id)a0;
- (id)preprocessedSuggestionsForMediaControlsConsumer:(id)a0;
- (BOOL)_bundleSupportsINPlayMediaIntentForBundleId:(id)a0 fromUnitTest:(BOOL)a1;
- (id)preprocessedSuggestionsForAppSwitcherConsumer:(id)a0;
- (void).cxx_destruct;
- (id)suggestionsWithInvalidSuggestionsRemoved:(id)a0;

@end
