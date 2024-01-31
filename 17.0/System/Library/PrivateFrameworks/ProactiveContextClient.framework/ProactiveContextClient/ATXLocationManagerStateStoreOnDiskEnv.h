@interface ATXLocationManagerStateStoreOnDiskEnv : NSObject <ATXLocationManagerStateStoreOnDiskEnv> {
    id _stateChangeRegistration;
}

- (void)dealloc;
- (void)callOnNextUnlock:(id /* block */)a0;
- (void).cxx_destruct;
- (int)openFileAtPath:(id)a0 dataProtectionClass:(int)a1;
- (BOOL)isLocked;

@end
