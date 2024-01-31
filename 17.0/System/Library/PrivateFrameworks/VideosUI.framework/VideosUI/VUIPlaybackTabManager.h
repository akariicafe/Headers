@class VUIPlaybackTabInfo, NSMutableDictionary, NSString, UIImage;
@protocol VUIPlaybackTabManagerDelegate;

@interface VUIPlaybackTabManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *hudViewControllers;
@property (weak, nonatomic) id<VUIPlaybackTabManagerDelegate> delegate;
@property (retain, nonatomic) VUIPlaybackTabInfo *tabsInfo;
@property (nonatomic) long long playbackTabError;
@property (retain, nonatomic) VUIPlaybackTabInfo *tabInfo;
@property (readonly, nonatomic) double playbackFromBeginningTimeOffset;
@property (readonly, nonatomic) NSString *moreInfoTitle;
@property (readonly, nonatomic) BOOL isCurrentMediaMovie;
@property (readonly, nonatomic) BOOL isCurrentMediaTVShow;
@property (readonly, nonatomic) NSString *playTitleForFromBeginningAction;
@property (readonly, nonatomic) UIImage *playImageForFromBeginningAction;
@property (readonly, nonatomic) BOOL shouldShowMoreInfoButton;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)appContext;
- (void)_addMetadataInfoToEvent:(id)a0;
- (id)_createHudContentViewControllerWithTabId:(id)a0 excludingCanonicals:(id)a1 isMultiview:(BOOL)a2 locale:(id)a3 playsFromStart:(BOOL)a4;
- (id)_createPrefetchedDataForPlayerHUDWithTabId:(id)a0 excludingCanonicals:(id)a1 isMultiview:(BOOL)a2 locale:(id)a3 playsFromStart:(BOOL)a4;
- (id)_documentRefContextDataForCurrentMediaTypeWithCanonicalID:(id)a0 showCanonicalID:(id)a1;
- (void)_getTabsForCanonicalID:(id)a0 adamId:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isCurrentMediaLive;
- (BOOL)_isCurrentMediaSportingEvent;
- (void)_updateHUDsForAVPlayerViewController:(id)a0 tabInfo:(id)a1 excludingCanonicals:(id)a2;
- (id)createHUDViewControllerWithTabInfo:(id)a0 excludingCanonicals:(id)a1 isMultiview:(BOOL)a2 locale:(id)a3 playsFromStart:(BOOL)a4;
- (BOOL)isPlayerTabsEnabled;
- (id)moreInfoViewControllerWithAppContext:(id)a0;
- (void)reportMoreInfoMetrics;
- (void)reportPlayFromBeginningMetrics;
- (void)resetPlayerTabsForPlayerViewController:(id)a0;
- (BOOL)shouldShowPlayFromBeginningButtonForMediaInfo:(BOOL)a0;
- (void)updatePlayerTabsExcludingCanonicals:(id)a0 isEnteringFullScreenFromMultiview:(BOOL)a1 completion:(id /* block */)a2;
- (void)updatePrefetchedDataOnExistingHUDContentViewController:(id)a0 excludingCanonicals:(id)a1;

@end
