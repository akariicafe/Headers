@class NSString, NSBundle, NSMutableDictionary, NSArray, NSMutableArray, PROPlugInFirewall;
@protocol PROBundleHandlerDelegate, PROPluginDynamicRegCompletion, PROVersionedAPIAccess, PROPlugInRegistering, PKPlugIn;

@interface PROBundleHandler : NSObject <PROPlugInDelegate, PROPlugInFirewallErrorHandler, PROAPIAccessing> {
    NSBundle *bundle;
    NSMutableArray *plugIns;
    NSMutableDictionary *groups;
    id<PROPlugInRegistering> principalClassInstance;
    struct { unsigned char canCreateInstances : 1; unsigned char askedAboutCreatingInstances : 1; unsigned char shouldBeLoaded : 1; unsigned int  : 29; } bundleFlags;
    NSArray *requestedProtocols;
    id<PROBundleHandlerDelegate> delegate;
    id<PROVersionedAPIAccess> apiManager;
    PROPlugInFirewall *apiAccessPoint;
    id<PKPlugIn> pluginKitPlug;
    id<PROPluginDynamicRegCompletion> setupCallbackObject;
    id /* block */ deferralCompletionBlock;
    BOOL deferred;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBundle:(id)a0;
- (void)dealloc;
- (id)delegate;
- (BOOL)isDeferred;
- (void)reportError:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setDelegate:(id)a0;
- (id)apiForProtocol:(id)a0;
- (id)plugIns;
- (void)registerPlugIns;
- (BOOL)_plugInHasReservedUUID:(id)a0;
- (void)addPlugIn:(id)a0;
- (id)apiManager;
- (id)apiManagerForPlugInInstances;
- (void)completeRegistrationWithGroups:(id *)a0 plugIns:(id *)a1 requestedProtocols:(id *)a2;
- (BOOL)dynamicPluginRequestedProtocolArray:(id *)a0 groupArray:(id *)a1 plugInArray:(id *)a2 actuallyLoad:(BOOL)a3;
- (void)finishRegisteringPlugIns:(BOOL)a0;
- (id)getBundle;
- (id)groupsDictionary;
- (id)initWithBundle:(id)a0 actuallyLoad:(BOOL)a1;
- (BOOL)isEqualToBundleHandler:(id)a0;
- (BOOL)isPrincipalClassAvailable;
- (void)loadDeferredPlugins;
- (BOOL)loadingInProMSRendererTool;
- (void)notifyDeferralComplete;
- (void)plugIn:(id)a0 didError:(id)a1;
- (void)plugInCouldNotInitialize:(id)a0;
- (void)plugInFirewall:(id)a0 receivedBadMessage:(SEL)a1;
- (id)plugInGroupWithUUID:(struct __CFUUID { } *)a0;
- (BOOL)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)a0;
- (id)pluginKitPlug;
- (id)principalClassInstance;
- (void)registerAndLoadPlugIns:(BOOL)a0;
- (void)registerDynamicPlugInsAsynch:(id)a0;
- (void)setAPIManager:(id)a0;
- (void)setDeferralNotification:(id /* block */)a0;
- (void)setPluginKitPlug:(id)a0;
- (void)setRegistrationCallbackObject:(id)a0;
- (BOOL)shouldDeferLoading;

@end
