@class SBBestAppSuggestion, NSString, SBAttentionAwarenessClient, UABestAppSuggestion, ATXProactiveSuggestionClient, NSCountedSet, ATXProactiveSuggestion, UABestAppSuggestionManager;

@interface SBAppSuggestionManager : NSObject <UABestAppSuggestionManagerDelegate, SBAttentionAwarenessClientDelegate> {
    UABestAppSuggestionManager *_continuitySuggestionManager;
    UABestAppSuggestion *_continuityCurrentBestSuggestion;
    ATXProactiveSuggestionClient *_proactiveSuggestionClient;
    ATXProactiveSuggestion *_currentProactiveBestSuggestion;
    int _proactiveSuggestionNotificationToken;
    SBBestAppSuggestion *_currentBestSuggestion;
    NSCountedSet *_listeningReasons;
    BOOL _isListeningForContinuitySuggestion;
    BOOL _isListeningForExpertCenterSuggestion;
    BOOL _screenOnDueToUserEvent;
    BOOL _screenOnAndLookingForEvent;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_createSuggestionSources;
- (void)_evaluateSuggestionUpdates:(id)a0;
- (void)client:(id)a0 attentionLostTimeoutDidExpire:(double)a1 forConfigurationGeneration:(unsigned long long)a2 withAssociatedObject:(id)a3;
- (void)clientDidResetForUserAttention:(id)a0;
- (id)init;
- (void)_registerForProactiveSuggestionNotifications;
- (void)dealloc;
- (void)enableListeningForUpdatesForReason:(id)a0;
- (id)currentSuggestedApp;
- (void)noteActivatingForAppSuggestion:(id)a0 fromSource:(long long)a1;
- (void)_screenDidUndim:(id)a0;
- (void)performWithCurrentSuggestedAppAndApplication:(id /* block */)a0;
- (void)disableListeningForUpdatesForReason:(id)a0;
- (void)_screenDidDim:(id)a0;
- (void)proactiveSuggestionChanged;
- (void)_listenForNotifications;
- (void)_setContinuitySuggestionUpdatesEnabled:(BOOL)a0 expertCenterSuggestionUpdatesEnabled:(BOOL)a1;
- (void)_handleAppUninstall:(id)a0;
- (void).cxx_destruct;
- (void)_calculateBestSuggestionAndNotifyListeners;
- (void)bestAppSuggestionChanged:(id)a0;
- (void)startFetchingPayloadForAppSuggestion:(id)a0;
- (void)noteNotActivatingForAppSuggestion:(id)a0 fromSource:(long long)a1;
- (void)_destroySuggestionSources;
- (void)_deregisterFromProactiveSuggestionNotifications;
- (void)_stopListeningForNotifications;
- (void)_handleInitialSpringBoardLaunch;

@end
