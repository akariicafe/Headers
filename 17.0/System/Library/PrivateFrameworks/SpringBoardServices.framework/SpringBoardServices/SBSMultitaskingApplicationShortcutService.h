@class NSCountedSet, NSString, NSMutableDictionary, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface SBSMultitaskingApplicationShortcutService : NSObject <SBSMultitaskingApplicationShortcutServiceServerToClientInterface> {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSCountedSet *_trackedBundleIdentifiers;
    NSMutableDictionary *_supportedShortcutsByBundleIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_connection;
- (void)dealloc;
- (unsigned long long)supportedShortcutActionsForBundleIdentifier:(id)a0;
- (void)startObservingSupportedShortcutsForBundleIdentifier:(id)a0;
- (void)stopObservingSupportedShortcutsForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)performMultitaskingShortcutAction:(long long)a0 forBundleIdentifier:(id)a1;
- (oneway void)updateSupportedShortcutActionsForBundleIdentifiers:(id)a0;

@end
