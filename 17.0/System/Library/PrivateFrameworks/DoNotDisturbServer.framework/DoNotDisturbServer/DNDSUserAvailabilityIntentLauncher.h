@class LSApplicationRecord, INCExtensionConnection;

@interface DNDSUserAvailabilityIntentLauncher : NSObject {
    INCExtensionConnection *_connection;
    LSApplicationRecord *_applicationRecord;
    BOOL _available;
    struct atomic_flag { _Atomic BOOL _Value; } _completionFiredFlag;
}

- (void).cxx_destruct;
- (void)_cleanupWithError:(id)a0 completion:(id /* block */)a1;
- (id)initWithApplicationRecord:(id)a0 available:(BOOL)a1;
- (void)launchIntentExtensionWithCompletion:(id /* block */)a0;

@end
