@class NSArray, NSDictionary, NSCondition, NSString, _EXQueryController;

@interface FSModuleHost : NSObject <_EXQueryControllerDelegate>

@property (readonly, copy) NSArray *extensions;
@property (readonly, copy) NSDictionary *extensionsByBundle;
@property (retain) NSCondition *queryLock;
@property (retain) _EXQueryController *queryController;
@property BOOL queryReceivedFirstDelegateCall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultHost;
+ (id)defaultInstanceUUID;
+ (id)installedExtensionPropertiesSync;
+ (id)installedExtensionsSync;

- (void)setExtensions:(id)a0;
- (void).cxx_destruct;
- (void)queryControllerDidUpdate:(id)a0 resultDifference:(id)a1;
- (id)configurationForDefaultInstanceOf:(id)a0;
- (id)configurationForDefaultInstanceOfBundle:(id)a0;
- (id)configurationForInstance:(id)a0 ofBundle:(id)a1;
- (id)currentExtensions;
- (id)extensionForBundleID:(id)a0;
- (void)setExtensionsLocked:(id)a0;
- (void)setupForAsync;
- (void)setupSyncronously;

@end
