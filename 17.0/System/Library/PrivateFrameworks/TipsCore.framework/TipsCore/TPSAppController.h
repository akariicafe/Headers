@class NSHashTable, NSError, NSArray, TPSFullTipContentManager, NSDictionary, TPSAssetSizes, NSMutableArray, NSUserDefaults, TPSCollection;

@interface TPSAppController : NSObject

@property (retain, nonatomic) NSError *lastFetchError;
@property (retain, nonatomic) TPSCollection *checklistCollection;
@property (retain, nonatomic) TPSCollection *featuredCollection;
@property (retain, nonatomic) TPSCollection *savedTipsCollection;
@property (retain, nonatomic) NSArray *collections;
@property (retain, nonatomic) NSArray *collectionSections;
@property (retain, nonatomic) NSArray *userGuides;
@property (retain, nonatomic) NSDictionary *collectionMap;
@property (retain, nonatomic) NSDictionary *collectionSectionMap;
@property (retain, nonatomic) NSDictionary *tipMap;
@property (retain, nonatomic) TPSFullTipContentManager *fullTipContentManager;
@property (retain, nonatomic) TPSAssetSizes *assetSizes;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSUserDefaults *appGroupDefaults;
@property (retain, nonatomic) NSMutableArray *savedTipIdentifiers;
@property (nonatomic) BOOL alwaysShowIntro;
@property (nonatomic) BOOL contentHasLoaded;
@property (nonatomic) BOOL updatingContent;
@property (nonatomic) BOOL appInBackground;
@property (readonly, nonatomic) NSArray *tips;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)removeDelegate:(id)a0;
- (void)updateContent;
- (void)addDelegate:(id)a0;
- (void)toggleTipSavedForIdentifier:(id)a0;
- (void)networkStateDidChange:(BOOL)a0;
- (BOOL)isTipSavedForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)reloadAppGroupDefaults;
- (id)collectionStatusForCollection:(id)a0;
- (void)tipViewed:(id)a0 collectionIdentifier:(id)a1;
- (id)collectionSectionForIdentifier:(id)a0;
- (id)assetConfigurationForAssets:(id)a0 language:(id)a1 userInterfaceStyle:(long long)a2 assetFileInfoManager:(id)a3;
- (id)collectionForIdentifier:(id)a0;
- (id)collectionIdentifierForTipIdentifier:(id)a0;
- (void)collectionIdentifierViewed:(id)a0;
- (void)contentWillUpdate;
- (id)createSavedTipsCollection:(id)a0;
- (id)delegateEnumerator;
- (void)fetchAssetsWithAssetsConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isAccessoriesSection:(id)a0;
- (BOOL)isAppleWatchSection:(id)a0;
- (BOOL)isExploreHardwareSection:(id)a0;
- (id)mainUserGuide;
- (void)removeNotificationForIdentifier:(id)a0;
- (id)tipForIdentifier:(id)a0;
- (id)tipsForCollection:(id)a0;
- (id)tipsForCollectionIdentifier:(id)a0;
- (void)updateSavedTipsContent;
- (id)userGuideWithIdentifier:(id)a0;

@end
