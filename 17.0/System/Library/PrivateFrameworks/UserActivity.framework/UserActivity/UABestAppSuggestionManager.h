@class NSString, NSXPCConnection, UABestAppSuggestionManagerProxy, UABestAppSuggestion;
@protocol UABestAppSuggestionManagerDelegate;

@interface UABestAppSuggestionManager : NSObject <UABestAppSuggestionManagerResponseProtocol> {
    BOOL _listeningForBestAppSuggestions;
    int _bestAppNotificationCount;
    UABestAppSuggestion *_lastBestAppSuggestion;
}

@property (retain) NSXPCConnection *connection;
@property (retain) UABestAppSuggestionManagerProxy *proxyManager;
@property (weak) id<UABestAppSuggestionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bestAppSuggestion;
- (void)bestAppSuggestionLaunchWasCancelled:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)fetchAllNearbyAppSuggestions;
- (void)launchAppWithBundleIdentifier:(id)a0 taskContinuationIdentifier:(id)a1;
- (void)invalidate;
- (void)bestAppSuggestionWasLaunched:(id)a0 withInteractionType:(unsigned long long)a1;
- (void)stopListeningForBestAppSuggestions;
- (BOOL)isActivityInfo:(id)a0 atTime:(id)a1 similarToAppSuggestion:(id)a2;
- (void)launchAppWithBundleIdentifier:(id)a0 userActivityUniqueIdentifier:(id)a1 userActivityTypeIdentifier:(id)a2;
- (void)removeBestApp:(id)a0 options:(id)a1;
- (void).cxx_destruct;
- (void)startListeningForBestAppSuggestions;
- (void)queueFetchOfPayloadForBestAppSuggestion:(id)a0;
- (void)launchAppWithBundleIdentifier:(id)a0 userActivityUniqueIdentifier:(id)a1 userActivityTypeIdentifier:(id)a2 deviceName:(id)a3 deviceIdentifier:(id)a4 deviceType:(id)a5;
- (id)createAppSuggestionFromActivityInfo:(id)a0 atTime:(id)a1;
- (void)removeBestAppByUUID:(id)a0 options:(id)a1;
- (id)bestAppSuggestions:(long long)a0;
- (BOOL)determineBestAppWithDelay:(double)a0 withBlock:(id /* block */)a1;
- (void)launchAppWithBestAppSuggestion:(id)a0;
- (void)notifyBestAppsChanged:(id)a0 when:(id)a1 confidence:(double)a2;

@end
