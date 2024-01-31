@class NSString, NSXPCConnection;
@protocol LNMetadataProviderInterface;

@interface LNMetadataProvider : NSObject <LNMetadataProviderInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _options;
    id<LNMetadataProviderInterface> _xpcProvider;
    id<LNMetadataProviderInterface> _directProvider;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scanBundlesWithReply:(id /* block */)a0;
- (id)queriesForBundleIdentifier:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)init;
- (id)actionForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (id)actionsWithError:(id *)a0;
- (void)dealloc;
- (long long)metadataVersionForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)entitiesForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsConformingToSystemProtocols:(id)a0 logicalType:(unsigned long long)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (void)registerBundleWithIdentifier:(id)a0 force:(BOOL)a1 reply:(id /* block */)a2;
- (id)enumsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)queriesWithError:(id *)a0;
- (id)actionsForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (id)bundlesWithError:(id *)a0;
- (id)actionsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)enumsWithError:(id *)a0;
- (id)actionsConformingToSystemProtocol:(id)a0 withParametersOfTypes:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)entitiesWithError:(id *)a0;
- (id)actionsWithFullyQualifiedIdentifiers:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)resetWithReply:(id /* block */)a0;
- (id)appShortcutsProviderMangledTypeNameForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsAndSystemProtocolDefaultsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)initWithOptions:(long long)a0;
- (void)unregisterBundleWithIdentifier:(id)a0 reply:(id /* block */)a1;

@end
