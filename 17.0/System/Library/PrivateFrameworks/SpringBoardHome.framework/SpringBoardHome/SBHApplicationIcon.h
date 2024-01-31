@class NSString;

@interface SBHApplicationIcon : SBLeafIcon

@property (nonatomic, getter=isUninstalledByUser) BOOL uninstalledByUser;
@property (readonly, copy, nonatomic) NSString *applicationDisplayName;

- (id)copyWithLeafIdentifier:(id)a0;
- (id)automationID;
- (void)replaceIconDataSourcesWithApplicationPlaceholder:(id)a0;
- (BOOL)prioritizeDownload;
- (void)removeApplicationDataSources;
- (void)possibleUserTapDidCancel;
- (BOOL)resumeDownload;
- (id)initWithLeafIdentifier:(id)a0 applicationPlaceholder:(id)a1;
- (id)initWithLeafIdentifier:(id)a0 application:(id)a1;
- (BOOL)pauseDownload;
- (BOOL)isApplicationIcon;
- (void)removeApplicationPlaceholderDataSources;
- (BOOL)cancelDownload;
- (id)initWithApplication:(id)a0;
- (void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)a0 andContinuousTime:(unsigned long long)a1;
- (id)application;
- (id)applicationPlaceholder;
- (void)replaceIconDataSourcesWithApplication:(id)a0;
- (id)initWithApplicationPlaceholder:(id)a0;
- (void)addApplicationDataSource:(id)a0;
- (id)iconImageCacheIdentifier;
- (void)noteExternalApplicationPlaceholderStateChange;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithApplicationWithBundleIdentifier:(id)a0;
- (void)setBadge:(id)a0;

@end
