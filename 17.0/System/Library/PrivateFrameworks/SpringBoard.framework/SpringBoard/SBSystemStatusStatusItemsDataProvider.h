@class SBDisplayReferenceModeMonitor, SBTelephonyManager, NSString, NSDictionary, STWifiStatusDomain, STTelephonyStatusDomain, STStatusItemsStatusDomainPublisher, STActivityAttribution, SBWindowScene;

@interface SBSystemStatusStatusItemsDataProvider : NSObject <SBDisplayReferenceModeStatusObserver, BSInvalidatable> {
    STActivityAttribution *_attribution;
}

@property (readonly, nonatomic) STStatusItemsStatusDomainPublisher *statusItemsPublisher;
@property (readonly, nonatomic) NSDictionary *statusItemAttributionsByIdentifier;
@property (readonly, nonatomic) SBDisplayReferenceModeMonitor *displayReferenceModeMonitor;
@property (readonly, nonatomic) SBTelephonyManager *telephonyManager;
@property (readonly, nonatomic) STTelephonyStatusDomain *telephonyStatusDomain;
@property (readonly, nonatomic) STWifiStatusDomain *wifiStatusDomain;
@property (weak, nonatomic) SBWindowScene *mainDisplayWindowScene;
@property (nonatomic, getter=isAlarmEnabled) BOOL alarmEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_registerForNotifications;
- (void)dealloc;
- (void)displayReferenceModeStatusDidChangeForDisplayWithConfiguration:(id)a0 newStatus:(long long)a1;
- (id)initWithMainDisplayWindowScene:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_hasAttributionForStatusItemWithIdentifier:(id)a0;
- (id)_identifiersForSupportedStatusItems;
- (BOOL)_isDisplayWarningItemEnabled;
- (BOOL)_isVPNItemEnabled;
- (void)_updateAllData;
- (void)_updateDataForAirPlay;
- (void)_updateDataForAirplaneMode;
- (void)_updateDataForAlarm;
- (void)_updateDataForCarPlay;
- (void)_updateDataForDisplayWarning;
- (void)_updateDataForLiquidDetection;
- (void)_updateDataForRotationLock;
- (void)_updateDataForStatusItemsWithIdentifiers:(id)a0;
- (void)_updateDataForTTY;
- (void)_updateDataForVPN;
- (BOOL)_wantsAttributionForStatusItemWithIdentifier:(id)a0;

@end
