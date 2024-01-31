@interface MCSSyncResumer : NSObject <IMUnlockMonitorListener> {
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)attemptToResumeSyncIfAppropriate;

@end
