@class NSString, NSDictionary, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface WLKAppLibrary : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSDictionary *_appProxies;
    NSArray *_allAppBundleIdentifiers;
    NSArray *_installedAppBundleIdentifiers;
    NSArray *_subscribedAppBundleIdentifiers;
    NSArray *_testAppBundleIdentifiers;
    NSArray *_nonConformingAppBundleIdentifiers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    BOOL _appLibraryNeedsRefresh;
    long long _ignoreAppLibraryChangesCount;
    int _didChangeNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAppLibrary;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (id)init;
- (id)installedAppBundleIdentifiers;
- (void)dealloc;
- (void)endIgnoringAppLibraryChanges;
- (id)testAppProxies;
- (id)refresh;
- (id)subscribedAppBundleIdentifiers;
- (id)_subscriptionInfosForProxies:(id)a0;
- (void)beginIgnoringAppLibraryChanges;
- (BOOL)isTVAppInstalled;
- (id)_refreshAppLibrary;
- (void).cxx_destruct;
- (id)installedAppProxies;
- (id)allAppProxies;
- (id)subscriptionInfoForBundle:(id)a0;
- (id)testAppBundleIdentifiers;
- (id)dictionaryRepresentation;
- (id)allAppBundleIdentifiers;
- (id)subscribedAppProxies;
- (id)localizedNameForBundle:(id)a0;
- (id)_bundleIdentifiersfromProxies:(id)a0;
- (id)_nonConformingAppProxies;
- (id)_nonConformingAppBundleIdentifiers;
- (void)_handleInvalidationWithReason:(id)a0;
- (void)_subscriptionsDidChangeNotification:(id)a0;

@end
