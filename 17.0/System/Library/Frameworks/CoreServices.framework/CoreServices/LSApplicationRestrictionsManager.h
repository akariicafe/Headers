@class NSSet, NSString, MOEffectiveSettings, NSNumber, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface LSApplicationRestrictionsManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _restrictionsAccessLock;
    NSObject<OS_dispatch_queue> *_signerIdentitySyncQueue;
    NSObject<OS_dispatch_source> *_signerIdentitySyncSource;
    NSNumber *_allowlistState;
    unsigned long long _knownSystemAppDeletionState;
    BOOL _server_newsWidgetIsRestricted;
    NSSet *_allowlistedBundleIDs;
    NSSet *_restrictedBundleIDs;
    NSNumber *_maximumRating;
    NSString *_systemMode;
}

@property (retain) MOEffectiveSettings *effectiveSettings;

- (id)_LSResolveIdentifiers:(id)a0;
- (id)init;
- (void)_pruneObsoleteTrustedSignerIdentities;
- (void)clearAllValues;
- (BOOL)isFeatureAllowed:(id)a0;
- (BOOL)_LSApplyRestrictedSet:(id)a0 forRestriction:(id)a1;
- (id)_LSResolveIdentifiers:(id)a0 context:(struct LSContext { id x0; } *)a1;
- (void).cxx_destruct;
- (void)handleMCEffectiveSettingsChanged;
- (id)_MCRestrictionManager;
- (void)handleSystemModeChangeTo:(id)a0;
- (id)_MCProfileConnection;
- (id)calculateSetDifference:(id)a0 and:(id)a1;

@end
