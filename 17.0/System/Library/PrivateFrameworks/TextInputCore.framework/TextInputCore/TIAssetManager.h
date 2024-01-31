@class NSMutableArray, NSArray, NSTimer, NSMutableSet, TIRequestedInputModes, NSObject, NSString;
@protocol OS_dispatch_queue, TIInputModePreferenceProvider;

@interface TIAssetManager : NSObject <DDSAssetCenterDelegate, TIAssetManaging> {
    NSMutableArray *_notificationTokens;
    NSMutableSet *_languagesWithWarmedAssets;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSArray *requestedInputModes_mainThreadCache;
@property (readonly, nonatomic) id<TIInputModePreferenceProvider> inputModePreferenceProvider;
@property (retain, nonatomic) NSArray *currentActiveRegions;
@property (retain, nonatomic) NSArray *currentNormalizedActiveRegions;
@property (readonly, nonatomic) double requestExpirationInterval;
@property (retain, nonatomic) NSTimer *didUpdateAssetsTimer;
@property (readonly, nonatomic) NSMutableSet *languagesWithWarmedAssets;
@property (readonly, nonatomic) TIRequestedInputModes *requestedInputModes;
@property (copy, nonatomic) id /* block */ enabledInputModeIdentifiersProviderBlock;
@property (copy, nonatomic) id /* block */ preferencesProviderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)assetUpdateStatusforDDSAssetUpdateStatus:(long long)a0;
+ (id)_regionFromAddress:(id)a0;
+ (id)sharedAssetManagerWithEnabledInputModesProvider:(id /* block */)a0;
+ (id)sharedAssetManager;
+ (id)_addressFromRegion:(id)a0;
+ (void)setSharedAssetManager:(id)a0;
+ (id)singletonInstanceWithEnabledInputModesProvider:(id /* block */)a0;

- (id)ddsLanguageIdentifierFromInputMode:(id)a0;
- (id)initForTestingWithRequestedInputModes:(id)a0 inputModePreferenceProvider:(id)a1 enabledInputModesProvider:(id /* block */)a2;
- (id)init;
- (id)topActiveRegions;
- (void)dealloc;
- (id)initWithRequestedInputModes:(id)a0 inputModePreferenceProvider:(id)a1 enabledInputModesProvider:(id /* block */)a2;
- (id)_ddsAssetsForLanguageIdentifier:(id)a0 cachedOnly:(BOOL)a1;
- (void)getActiveRegionsWithCompletion:(id /* block */)a0;
- (void)didUpdateAssetsWithType:(id)a0;
- (void)requestAssetDownloadForLanguage:(id)a0 completion:(id /* block */)a1;
- (id)ddsLinguisticAssetQueryForInputModeIdentifier:(id)a0 withRegions:(id)a1;
- (BOOL)requireMecabraDictionaryRapidUpdatesAssetsForLanguageIdentifier:(id)a0;
- (void)addAssertionWithInputMode:(id)a0 assertionID:(id)a1 potentialRegions:(id)a2;
- (void)scheduleAssetsDidChangeNotificationWithDelay:(double)a0;
- (void)unregisterForNotifications;
- (void)ddsAssetsForInputMode:(id)a0 cachedOnly:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateAssertionsForInputModes:(id)a0;
- (BOOL)inputModeHasRegions:(id)a0;
- (id)ddsAssetContentItemsWithContentType:(id)a0 inputMode:(id)a1 filteredWithRegion:(BOOL)a2;
- (id)updatedActiveRegions;
- (id)levelsForInputMode:(id)a0;
- (id)ddsAssertionIDsFromInputMode:(id)a0 withPotentialRegions:(id)a1;
- (void)didUpdateAssets;
- (long long)tryToPurgeAssetAmount:(long long)a0 urgency:(int)a1;
- (long long)amountOfPurgeableAssetsWithUrgency:(int)a0;
- (void)registerCacheDeleteCallbacks;
- (id)assetTypeForAssertionId:(id)a0;
- (void)_warmAssetQueryForLanguage:(id)a0;
- (void)appleKeyboardsPreferencesChanged:(id)a0;
- (id)enabledInputModes;
- (void).cxx_destruct;
- (void)fetchAssetUpdateStatusForInputModeIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)registerForNotifications;
- (void)normalizedRegionsForGeoCodedAddresses:(id)a0 withCompletion:(id /* block */)a1;
- (id)activeInputModes;
- (id)_ddsAssetsForAssetType:(id)a0 languageIdentifier:(id)a1 cachedOnly:(BOOL)a2;
- (id)activeInputModeLevels;
- (id)_ddsContentItemsFromAssets:(id)a0 contentType:(id)a1 filteredWithRegion:(BOOL)a2;
- (void)updatedActiveRegionsWithCompletionWithCompletion:(id /* block */)a0;
- (void)_warmAssetQueriesForInputModes:(id)a0;
- (id)defaultEnabledInputModes;
- (void)addLinguisticAssetsAssertionForLanguage:(id)a0 assertionID:(id)a1 region:(id)a2 clientID:(id)a3 withHandler:(id /* block */)a4;
- (void)ddsAssetContentItemsWithContentType:(id)a0 inputMode:(id)a1 filteredWithRegion:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateAssetForInputModeIdentifier:(id)a0 callback:(id /* block */)a1;
- (id)ddsLinguisticAssetQueryWithAssetType:(id)a0 inputModeIdentifier:(id)a1 withRegions:(id)a2;
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)a0 forClientID:(id)a1 withHandler:(id /* block */)a2;

@end
