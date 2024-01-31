@class LSPlugInKitProxy, NSExtension;

@interface _IMBalloonExtensionApp : IMBalloonApp

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) LSPlugInKitProxy *proxy;

- (id)itemID;
- (void)setIsEnabled:(BOOL)a0;
- (id)applicationType;
- (id)version;
- (BOOL)isLaunchProhibited;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)plugin;
- (id)appStoreGenre;
- (id)initWithPluginBundle:(id)a0 pluginKitProxy:(id)a1 extension:(id)a2;
- (BOOL)isBetaPlugin;
- (BOOL)linkedBeforeDawn;
- (BOOL)linkedBeforeSDKVersion:(id)a0;
- (BOOL)showInBrowser;
- (BOOL)showInSendMenu;
- (BOOL)showableInBrowser;
- (id)appStoreGenreID;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1;
- (id)_bundleIDsForDawnSendMenuTemporaryDisplayOverride;
- (id)appStoreSubgenres;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1 pluginKitProxyClass:(Class)a2 proxy:(id)a3;
- (BOOL)isPreDawnAndAppStoreStickerGenre;
- (BOOL)isStickerPackOnly;
- (BOOL)shouldForceIntoSendMenu;

@end
