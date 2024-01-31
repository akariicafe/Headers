@class NSUUID, LSPlugInKitProxy, NSExtension, NSNumber;
@protocol PKPlugIn;

@interface IMBalloonAppExtension : IMBalloonPlugin

@property (retain, nonatomic) LSPlugInKitProxy *proxy;
@property (retain) NSUUID *requestIdentifier;
@property (nonatomic) BOOL canSendDataPayloads;
@property (readonly, retain, nonatomic) NSExtension *extension;
@property (readonly, retain, nonatomic) NSNumber *itemID;
@property (readonly, retain, nonatomic) id<PKPlugIn> plugin;
@property (readonly, nonatomic) BOOL shouldBalloonHideAppIcon;
@property (readonly, nonatomic) BOOL isLaunchProhibited;

- (id)version;
- (void).cxx_destruct;
- (id)initWithPluginBundle:(id)a0 pluginKitProxy:(id)a1 extension:(id)a2;
- (BOOL)isBetaPlugin;
- (BOOL)shouldBreadcrumbHideAppIcon;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1;
- (id)initWithPluginBundle:(id)a0 appBundle:(id)a1;
- (id)_initWithPluginBundle:(id)a0 extension:(id)a1 pluginKitProxyClass:(Class)a2;

@end
