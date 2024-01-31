@class NSMutableDictionary;

@interface INExecutionFrameworkMapper : NSObject

@property (readonly, copy, nonatomic) NSMutableDictionary *_appToExtensionIdentifiers;
@property (readonly, nonatomic) BOOL _filled;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;

+ (void)initialize;

- (id)init;
- (void)reset;
- (void)_addExtensionBundleIdentifier:(id)a0 forAppBundleIdentifier:(id)a1;
- (void)dealloc;
- (id)extensionBundleIdentifiersForSystemAppIdentifier:(id)a0;
- (void)loadSystemExtensionInformation;
- (id)displayableAppBundleIdentifierForSystemExtensionBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)appBundleIdentifierForSystemExtensionBundleIdentifier:(id)a0;
- (void)installedApplicationsDidChange:(id)a0;
- (id)launchableAppBundleIdentifierForSystemExtensionBundleIdentifier:(id)a0;

@end
