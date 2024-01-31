@class NSArray;

@interface CKSettingsiMessageAppManager : NSObject

@property (readonly, nonatomic) NSArray *payloadProviderExtensions;
@property (readonly, nonatomic) NSArray *highMemoryPayloadProviderExtensions;
@property (retain, nonatomic) id payloadProviderExtensionsMonitoringContext;
@property (retain, nonatomic) id highMemoryPayloadProviderExtensionsMonitoringContext;
@property (readonly, nonatomic) NSArray *alliMessageApps;
@property (readonly, nonatomic) NSArray *deletableiMessageOnlyApps;
@property (readonly, nonatomic) NSArray *deletableAppsWithiMessageApp;
@property (readonly) BOOL haveDeletableApps;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)appWithBundleID:(id)a0;
- (id)_beginMonitoringExtensionPoint:(id)a0;
- (void)_clearCacheForDerivableiMessageAppLists;
- (void)_endMonitoringExtensionInstallation;
- (id)_loadiMessageAppsSyncronouslyForExtensionPoint:(id)a0;
- (void)_notifyForInstalledAppChange;
- (id)extensionAttributesForExtensionPoint:(id)a0;

@end
