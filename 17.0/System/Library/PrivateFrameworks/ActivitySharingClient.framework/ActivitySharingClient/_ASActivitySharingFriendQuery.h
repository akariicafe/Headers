@interface _ASActivitySharingFriendQuery : NSObject <FIFitnessAppsStateObserverDelegate> {
    void /* unknown type, empty encoding */ activitySharingClient;
    void /* unknown type, empty encoding */ updateHandler;
    void /* unknown type, empty encoding */ fitnessAppsStateObserver;
}

- (void)fitnessAppsStateObserver:(id)a0 applicationInstallStateDidChangeForBundleIdentifiers:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithActivitySharingClient:(id)a0 updateHandler:(id /* block */)a1;
- (void)fetchAllFriends;

@end
