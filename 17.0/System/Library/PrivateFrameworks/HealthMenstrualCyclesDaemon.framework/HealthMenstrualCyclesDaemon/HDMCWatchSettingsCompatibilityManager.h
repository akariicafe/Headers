@class NSString, HDProfile, NSArray, NSObject, NSUserDefaults;
@protocol HDMCWatchSettingsCompatibilityManagerDelegate, OS_dispatch_queue;

@interface HDMCWatchSettingsCompatibilityManager : NSObject <HDFeatureSettingsManagerObserver, HDHealthDaemonReadyObserver, HDProfileReadyObserver> {
    HDProfile *_profile;
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_managedFeatures;
}

@property (weak, nonatomic) id<HDMCWatchSettingsCompatibilityManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void)daemonReady:(id)a0;
- (void)featureSettingsManager:(id)a0 didUpdateSettingsForFeatureIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_queue_computeAndApplyChangesForAllFeatures;
- (void)_queue_computeAndApplyChangesForFeature:(id)a0;
- (id)initWithProfile:(id)a0 userDefaults:(id)a1;

@end
