@class NSObject;
@protocol OS_dispatch_queue;

@interface ICDeviceAccessManager : NSObject {
    struct sqlite3 { } *_externalMediaAccessDB;
}

@property NSObject<OS_dispatch_queue> *deviceAccessQueue;

+ (id)sharedAccessManager;

- (id)init;
- (void)dealloc;
- (id)allBundleIdentifiers;
- (void)addBundleIdentifier:(id)a0;
- (unsigned long long)bundleIdentifier:(id)a0 stateForAccessType:(id)a1;
- (BOOL)captureUserIntentForBundleIdentifier:(id)a0 withNotification:(id)a1;
- (void)updateBundleIdentifier:(id)a0 accessType:(id)a1 withState:(unsigned long long)a2;
- (id)bundleIdentifiersAccessingExternalCameras;
- (id)bundleIdentifiersAccessingExternalCamerasWithStatus;
- (id)bundleIdentifiersWithAccessType:(id)a0;
- (void)displayAlertForApplication:(id)a0 withNotification:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)internalBundleIdentifierHasAccess:(id)a0;
- (void)revokeBundleIdentifier:(id)a0;
- (void)updateApplicationWithBundleIdentifier:(id)a0 withStatus:(BOOL)a1;
- (BOOL)validateBundleIdentifierInstalled:(id)a0;

@end
