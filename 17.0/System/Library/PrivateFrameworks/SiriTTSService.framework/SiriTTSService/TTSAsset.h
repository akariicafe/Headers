@class NSString, TTSAssetQuality, TTSAssetType, TTSAssetTechnology, NSArray, TTSAssistantVoiceMaps, NSDictionary, NSBundle, TTSAssetSource, NSNumber;

@interface TTSAsset : NSObject

@property (class, nonatomic, readonly) TTSAssistantVoiceMaps *assistantVoiceMaps;
@property (class, readonly, nonatomic) NSString *NewAssetNotification;

@property (nonatomic, readonly) NSString *primaryLanguage;
@property (nonatomic, readonly) BOOL locallyAvailable;
@property (nonatomic, readonly) BOOL downloading;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) NSString *description;
@property (readonly, nonatomic) TTSAssetType *assetType;
@property (readonly, nonatomic) TTSAssetSource *assetSource;
@property (readonly, nonatomic) TTSAssetTechnology *technology;
@property (readonly, nonatomic) TTSAssetQuality *quality;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long versionNumber;
@property (readonly, nonatomic) NSString *versionDescription;
@property (readonly, nonatomic) NSArray *supportedLanguages;
@property (readonly, nonatomic) NSString *primaryLanguage;
@property (readonly, nonatomic) long long gender;
@property (readonly, nonatomic) NSNumber *age;
@property (readonly, nonatomic) NSNumber *downloadSize;
@property (readonly, nonatomic) NSNumber *diskSize;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSBundle *bundle;

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_gryphonVoiceCompatibility;
+ (BOOL)_hasTrialEntitlements;
+ (void)_postNewAssetNotification;
+ (id)bestAssetOfTypes:(id)a0 matching:(id)a1;
+ (id)describeServer:(id)a0 forType:(id)a1;
+ (id)describeServer:(id)a0 source:(id)a1;
+ (id)getServerForType:(id)a0;
+ (id)getServerForType:(id)a0 source:(id)a1;
+ (BOOL)handleProxyEvent:(id)a0 reply:(id)a1 connection:(id)a2;
+ (id)listAssetsOfTypes:(id)a0 matching:(id)a1;
+ (BOOL)setServer:(id)a0 forType:(id)a1;
+ (BOOL)setServer:(id)a0 forType:(id)a1 source:(id)a2;
+ (void)waitForCatalogUpdates;

- (void)purge;
- (id)init;
- (void)downloadWithReservation:(id)a0 useBattery:(BOOL)a1 progress:(id /* block */)a2 then:(id /* block */)a3;
- (void)cancelDownloadingThen:(id /* block */)a0;
- (void).cxx_destruct;
- (id)relatedAssetsWithOnlyAvailable:(BOOL)a0;
- (BOOL)isNewer:(id)a0;
- (BOOL)isOlder:(id)a0;
- (id)legacyAssetWithBundle:(id)a0;
- (void)purgeImmediately:(BOOL)a0;

@end
