@class NSDictionary;

@interface FTEntitlementSupport : NSObject {
    struct __CTServerConnection { } *_ctServerConnection;
    struct __CFString { } *_entitlementStatus;
}

@property (readonly, nonatomic) BOOL faceTimeNonWiFiEntitled;
@property (readonly, nonatomic) NSDictionary *registrationState;

+ (id)sharedInstance;

- (id)init;
- (void)_unregisterForCTEntitlementNotifications;
- (void)_cleanupMachInfo;
- (id)_rawEntitlementValue;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (BOOL)_disconnectCTServerConnection;
- (void)_handleCTServiceRequestName:(struct __CFString { } *)a0 userInfo:(struct __CFDictionary { } *)a1 contextInfo:(void *)a2;
- (BOOL)_registerForCTEntitlementNotifications;
- (BOOL)_setupCTServerConnection;
- (void)_entitlementStatusChanged;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary { } *)a0;

@end
