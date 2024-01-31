@class TPSTipStatusController, NSString, NSMutableDictionary, NSMutableArray, NSDate, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface TPSCommonDefines : NSObject {
    NSMutableArray *_cloudDevices;
    NSString *_userLanguage;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *collectionStatusMap;
@property (nonatomic) int maxVersion;
@property (nonatomic) BOOL supportsUIApplication;
@property (readonly, nonatomic) BOOL tipsAccessAllowed;
@property (readonly, nonatomic, getter=isPhoneUI) BOOL phoneUI;
@property (readonly, nonatomic, getter=isPadUI) BOOL padUI;
@property (readonly, nonatomic, getter=isMacUI) BOOL macUI;
@property (readonly, nonatomic) long long daysSinceLastMajorVersionUpdate;
@property (retain, nonatomic) NSString *majorVersion;
@property (retain, nonatomic) NSDate *lastMajorVersionUpdateDate;
@property (retain, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *userLanguage;
@property (readonly, nonatomic) NSUserDefaults *appGroupDefaults;
@property (retain, nonatomic) NSMutableDictionary *appBundleIDMap;
@property (readonly, nonatomic) long long assetRatioType;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;

+ (int)buttonType;
+ (id)sharedInstance;
+ (BOOL)isInternalDevice;
+ (id)osBuild;
+ (id)appGroupIdentifier;
+ (id)productVersion;
+ (id)deviceFamily;
+ (id)deviceName;
+ (id)clientBundleIdentifier;
+ (id)softwareWelcomeCollectionIdentifier;
+ (id)deviceClass;
+ (id)notificationBundleIdentifier;
+ (BOOL)hardwareChanged;
+ (BOOL)isGreenTeaDevice;
+ (id)hardwareWelcomeCollectionIdentifier;
+ (BOOL)callerIsTipsdWithSource:(id)a0;
+ (int)maxRequestVersion;
+ (id)tipsCoreFrameworkBundle;
+ (BOOL)supportsFaceID;
+ (BOOL)isSeniorUser;
+ (BOOL)isInternalBuild;
+ (id)mainBundleIdentifier;
+ (id)_tipStatusArchivalURL;
+ (id)checklistCollectionIdentifier;

- (id)init;
- (id)archivedTipStatuses;
- (void)clearDataCache;
- (void)activatedCollection:(id)a0;
- (long long)userType;
- (BOOL)hasLocaleChanged;
- (id)dateForCollectionIdentifier:(id)a0 dateType:(unsigned long long)a1;
- (void)activatedCollections:(id)a0;
- (void)syncCollectionStatusMap;
- (void)viewedCollection:(id)a0;
- (id)collectionStatusForCollectionIdentifier:(id)a0;
- (id)appBundleIDForInstalledAppWithIdentifier:(id)a0;
- (void)setLastMajorVersionUpdateDate:(id)a0;
- (void)setUserLanguage:(id)a0;
- (id)userLanguage;
- (void)deleteTipStatusArchivalDirectory;
- (void).cxx_destruct;
- (id)activateDateForCollectionIdentifier:(id)a0;
- (void)notifiedCollection:(id)a0;
- (id)collectionIdentifierToUseForCollectionIdentifiers:(id)a0;
- (long long)daysSinceLastMajorVersionUpdate;
- (id)lastMajorVersionUpdateDate;
- (id)reloadAppGroupDefaults;
- (void)updateCollectionStatus:(unsigned long long)a0 collections:(id)a1;
- (void)resetCollectionStatusMap;
- (void)featuredCollection:(id)a0;
- (void)reloadModelInformation;

@end
