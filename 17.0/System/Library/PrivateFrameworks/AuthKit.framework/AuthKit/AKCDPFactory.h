@interface AKCDPFactory : NSObject

+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (id)cdpIDMSRecordMIDKey;
+ (BOOL)cdpAccountIsHSA2EnabledForAltDSID:(id)a0;
+ (id)cdpIDMSRecordPRKKey;
+ (id)webAccessStatusLiveValue;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;
+ (BOOL)cdpAccountIsOTEnabledForAltDSID:(id)a0;
+ (id)contextForAltDSID:(id)a0;
+ (id)cdpStateUIController;
+ (id)cdpErrorDomain;
+ (id)followUpRepairContext;
+ (unsigned long long)webAccessStatus;
+ (id)webAccessChangeControllerForTargetStatus:(unsigned long long)a0;
+ (id)walrusStatusLiveValue;
+ (id)stateControllerWithContext:(id)a0;
+ (id)contextWithAuthResults:(id)a0;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;
+ (BOOL)isWebAccessEnabled;
+ (id)recoveryControllerWithContext:(id)a0;
+ (BOOL)isWalrusEnabled;
+ (BOOL)isEligibleToArmDeviceForPCSAuth;
+ (unsigned long long)walrusStatus;
+ (id)followUpController;

- (BOOL)isCDPEnabledForDSID:(id)a0;
- (BOOL)isHSA2EnabledForAltDSID:(id)a0;
- (BOOL)isManateeAvailable;
- (BOOL)isUserVisibleKeychainSyncEnabled;

@end
