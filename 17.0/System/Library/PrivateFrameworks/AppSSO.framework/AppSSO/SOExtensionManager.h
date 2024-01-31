@class NSArray, SOExtensionFinder, NSObject;
@protocol OS_dispatch_queue;

@interface SOExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    SOExtensionFinder *_extensionFinder;
}

@property (readonly, nonatomic) NSArray *loadedExtensions;

+ (id)sharedInstance;
+ (BOOL)isInternalExtensionBundleIdentifier:(id)a0;
+ (id)internalExtensionBundleIdentifier;
+ (void)_sendNotificationsLoadedExtensions:(id)a0 new:(id)a1 removed:(id)a2;
+ (BOOL)_isMatchedExtension:(id)a0 forBundleIdentifier:(id)a1;
+ (id)internalExtensionsBundleIdentifiers;
+ (BOOL)isTiburonExtensionBundleIdentifier:(id)a0;
+ (BOOL)isAppleConnectExtensionBundleIdentifier:(id)a0;

- (void)beginMatchingExtensions;
- (id)init;
- (void)dealloc;
- (id)loadExtensionWithBundleIdentifier:(id)a0;
- (BOOL)isLoadedExtensionWithBundleIdentifer:(id)a0;
- (void)endMatchingExtensions;
- (void)loadExtensions;
- (id)loadInternalExtension;
- (id)_doLoadExtensions;
- (void).cxx_destruct;
- (void)unloadExtensions;
- (id)loadedInternalExtension;
- (void)loadExtensionWithBundleIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)_doEndMatchingExtensions;
- (void)_doBeginMatchingExtensions;
- (id)loadedExtensionWithBundleIdentifer:(id)a0;

@end
