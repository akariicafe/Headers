@class NSString, NSDateFormatter;

@interface WBSOfflineSearchSuggestionsModelUpdateManager : NSObject {
    BOOL _googleWasADefaultSearchProvider;
    BOOL _googleIsADefaultSearchProvider;
    BOOL _offlineSuggestionsRemotelyDisabled;
    NSDateFormatter *_dateFormatter;
    NSString *_lastUsedLocaleIdentifier;
}

- (id)init;
- (void)_localeChanged:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_checkForModelUpdates;
- (void)_clearModels;
- (void)_disconnectFromSearchHelper;
- (void)_doUpdates;
- (void)_recordUpdateResultWithError:(id)a0;
- (void)_searchEngineChangedToOrFromGoogle:(id)a0;
- (id)_searchHelperProxy;
- (BOOL)_shouldCheckForModelUpdates;
- (double)_timeIntervalSinceLastUpdate;
- (void)_updateDefaultSearchEnginePreferencesState;
- (void)checkForModelUpdatesOrRemoteDisablementIfNeeded;

@end
