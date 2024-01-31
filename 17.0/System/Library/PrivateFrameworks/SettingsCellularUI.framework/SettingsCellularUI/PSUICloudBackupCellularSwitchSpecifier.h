@class ACAccountStore, MBManager;

@interface PSUICloudBackupCellularSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    ACAccountStore *_accountStore;
    MBManager *_backupManager;
}

+ (id)accountStore;

- (id)init;
- (id)getLogger;
- (id)appleAccount;
- (void).cxx_destruct;
- (id)cellularUsagePolicy;
- (id)cloudBackupGroupSpecifier;
- (id)initWithAppleAccountStore:(id)a0;
- (void)setCellularUsagePolicy:(id)a0;
- (BOOL)shouldShowCloudBackupCarrier;

@end
