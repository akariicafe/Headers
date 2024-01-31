@class NSString;

@interface IMPowerWifiUsageCollector : NSObject <CUTPowerMonitorDelegate, CUTWiFiManagerDelegate>

@property (readonly, nonatomic) BOOL shouldCollectInternalStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (double)_getExternalTotalDuration;
- (void)_setExternalTotalDuration:(id)a0;
- (id)todaysKey;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (void)updateConnectedToPowerWifiIntervalIfConnected;
- (BOOL)_isOnPower;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)a0;
- (BOOL)_shouldWriteDownPowerWifiChanges;
- (void)clearConnectedToPowerWifiOver20Hours;
- (BOOL)_isWifiUsable;
- (void)_noteWifiLinkDidChangeForInternalCollection:(BOOL)a0 isOnPower:(BOOL)a1;
- (id)_getExternalLastConnectedDate;
- (void)_notePowerDidChangeForInternalCollection:(BOOL)a0 isOnWifi:(BOOL)a1;
- (BOOL)connectedToPowerAndWifiForOver20Hours;
- (void)disconnectedFromAResource_ExternalCollection;
- (void)disconnectFromResourceForTotalDurationKey:(id)a0 dateKey:(id)a1 powerWifiDict:(id)a2;
- (void)reconnectedToBothResources_ExternalCollection;
- (void)reconnectToResourceForTotalDurationKey:(id)a0 dateKey:(id)a1 powerWifiDict:(id)a2;
- (void)_setExternalLastConnectedDate:(id)a0;
- (void)cutWiFiManagerLinkDidChange:(id)a0 context:(id)a1;
- (id)_getPowerAndWifiDictionaryForKey:(id)a0;

@end
