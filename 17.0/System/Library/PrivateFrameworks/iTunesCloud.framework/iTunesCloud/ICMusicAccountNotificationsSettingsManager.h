@interface ICMusicAccountNotificationsSettingsManager : NSObject

@property (class, readonly, nonatomic) ICMusicAccountNotificationsSettingsManager *sharedManager;

- (void)getAccountNotificationsWithCompletionHandler:(id /* block */)a0;
- (void)setAccountNotificationsArtistContentFeature:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)setCachedAccountNotificationsShowInLibraryEnabled:(BOOL)a0;
- (id)_getSwitchesDependingOnSubscriptionStatus:(id)a0 withResponse:(id)a1 togglingSwitchesToValue:(BOOL)a2;
- (id)cachedAccountNotificationsShowInLibrarySwitch;
- (id)storeRequestContext;

@end
