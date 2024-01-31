@class NSString, WLKSettingsStore, NSNumber;

@interface VUISettingsManager : NSObject <MCProfileConnectionObserver>

@property (readonly, nonatomic) NSString *restrictions;
@property (copy, nonatomic) NSString *preferredVideoFormat;
@property (nonatomic) BOOL upNextLockupsUseCoverArt;
@property (retain, nonatomic) WLKSettingsStore *settingsStore;
@property (copy, nonatomic) NSNumber *maxMovieRank;
@property (copy, nonatomic) NSNumber *maxTVShowRank;
@property (readonly, nonatomic, getter=isAppInstallationAllowed) BOOL appInstallationAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (id)init;
- (void)dealloc;
- (id)_init;
- (void).cxx_destruct;
- (unsigned long long)_preferredVideoFormat;
- (id)_formatStringForVideoFormat:(unsigned long long)a0;
- (BOOL)_hasPreferredVideoFormatChanged;
- (BOOL)_hasRestrictionsChanged;
- (BOOL)_hasUpNextLockupsUseCoverArtChanged;
- (id)_restrictionsMaximumEffectiveMovieRanking;
- (id)_restrictionsMaximumEffectiveTVShowRanking;
- (void)_sendSettingsValuesToJS:(id /* block */)a0;
- (void)_setupNotificationObservers;
- (void)_teardownNotificationObservers;
- (BOOL)_upNextLockupsUseCoverArt;
- (void)checkAndUpdateSettings;
- (void)createSettingsStore;
- (id)preferencesJSONData;

@end
