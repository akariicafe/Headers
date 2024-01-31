@class NSData, NSString, NSError, NSDate, NSUUID, ASDProgress, NSDictionary, NSProgress, NSNumber, ASDUnfairLock;

@interface ASDApp : NSObject <NSCopying, NSSecureCoding> {
    BOOL _hasFetchedUpdateMetadata;
    ASDUnfairLock *_propertyLock;
    unsigned char _openableStatus;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *artistName;
@property (nonatomic) BOOL autoUpdateEnabled;
@property (retain) NSString *bundlePath;
@property (retain) NSString *bundleShortVersion;
@property (retain) NSString *bundleVersion;
@property (retain) NSString *executablePath;
@property (retain) NSError *installError;
@property (retain) NSString *localizedName;
@property long long softwarePlatform;
@property long long storeExternalVersionID;
@property long long storeItemID;
@property (retain) NSString *storeCohort;
@property (retain) NSNumber *storeFront;
@property long long downloaderDSID;
@property long long familyID;
@property long long purchaserDSID;
@property long long extensions;
@property long long status;
@property long long essentialBackgroundAssetDownloadEstimate;
@property BOOL hasPostProcessing;
@property (retain) NSProgress *progress;
@property (retain) NSProgress *downloadProgress;
@property (retain) NSProgress *installProgress;
@property (retain) NSProgress *postProcessProgress;
@property long long progressPhase;
@property (retain) ASDProgress *remoteProgress;
@property (retain) NSData *rawUpdateData;
@property (retain) NSString *updateBuyParams;
@property (retain) NSDate *updateInstallDate;
@property (retain) NSDictionary *updateMetadata;
@property long long watchApplicationMode;
@property (readonly) NSString *bundleID;
@property (readonly, getter=hasMessagesExtension) BOOL messasgesExtension;
@property (readonly, getter=isAppClip) BOOL appClip;
@property (readonly, getter=isArcadeOpenable) BOOL arcadeOpenable;
@property (readonly, getter=isBetaApp) BOOL betaApp;
@property (readonly, getter=isFamilyShared) BOOL familyShared;
@property (readonly, getter=isInstalled) BOOL installed;
@property (readonly, getter=isLaunchProhibited) BOOL launchProhibited;
@property (readonly, getter=isOcelot) BOOL ocelot;
@property (readonly, getter=isOpenable) BOOL openable;
@property (readonly, getter=isPlaceholder) BOOL placeholder;
@property (readonly, getter=isStoreApp) BOOL storeApp;
@property (readonly, getter=isSystemApp) BOOL systemApp;
@property (readonly, getter=isWrapped) BOOL wrapped;
@property (readonly) NSUUID *installID;
@property (readonly, getter=isUpdateAvailable) BOOL updateAvailable;

- (unsigned long long)hash;
- (id)initWithBundleID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToApp:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)loadUpdateMetadataIfNecessary;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
