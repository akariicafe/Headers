@class NWNetworkOfInterest, NWNetworkOfInterestManager;

@interface RTNetworkOfInterestManager : RTService <NWNetworkOfInterestManagerDelegate>

@property (retain, nonatomic) NWNetworkOfInterestManager *noiManager;
@property (retain, nonatomic) NWNetworkOfInterest *cellNoi;
@property (retain, nonatomic) NWNetworkOfInterest *wifiNoi;
@property (nonatomic) unsigned long long cellLinkQuality;
@property (nonatomic) unsigned long long wifiLinkQuality;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_setup;
- (void)didStopTrackingNOI:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)didStartTrackingNOI:(id)a0;
- (void)_didStartTrackingCellNOI:(id)a0;
- (void)_didStartTrackingWifiNOI:(id)a0;
- (void)_didStopTrackingCellNOI:(id)a0;
- (void)_didStopTrackingWifiNOI:(id)a0;
- (void)_processCellNetworkOfInterestChange:(long long)a0;
- (void)_processWifiNetworkOfInterestChange:(long long)a0;
- (unsigned long long)convertLinkQuality:(long long)a0;
- (id)getCellLinkQualityNotification;
- (id)getWifiLinkQualityNotification;
- (id)initWithNoiManager:(id)a0;

@end
