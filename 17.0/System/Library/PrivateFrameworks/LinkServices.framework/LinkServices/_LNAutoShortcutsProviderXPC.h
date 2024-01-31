@class NSString, NSXPCConnection;

@interface _LNAutoShortcutsProviderXPC : NSObject <LNAutoShortcutsProviderInterface> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)autoShortcutsForBundleIdentifier:(id)a0 localeIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)initWithConnection:(id)a0;
- (id)autoShortcutsForLocaleIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)autoShortcutsForLocaleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)propertiesForIdentifiers:(id)a0 error:(id *)a1;

@end
