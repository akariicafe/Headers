@interface FaceTimeMessageStore.CoreDataMessageStore : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ storeType;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ accountStatus;
    void /* unknown type, empty encoding */ migrationStatus;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ contextProvider;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ voicemailController;
    void /* unknown type, empty encoding */ accountStatusProvider;
    void /* unknown type, empty encoding */ badgeManager;
    void /* unknown type, empty encoding */ deduplicationInProgress;
    void /* unknown type, empty encoding */ deviceSupport;
    void /* unknown type, empty encoding */ delegate;
}

- (void)didResetSync:(id)a0;
- (void)willResetSync:(id)a0;
- (void)storeDidSave:(id)a0;
- (void)storeMergedChanges:(id)a0;

@end
