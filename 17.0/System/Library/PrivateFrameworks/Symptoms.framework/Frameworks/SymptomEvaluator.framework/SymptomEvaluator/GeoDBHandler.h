@class NSDate, NSString, ProxyAnalytics, CellularStateRelay, NSObject, NetworkAnalyticsStateRelay;
@protocol OS_dispatch_queue;

@interface GeoDBHandler : NSObject <ProxyAnalyticsDelegate, ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    unsigned int _adminState;
    CellularStateRelay *_cellRelay;
    NetworkAnalyticsStateRelay *_wifiRelay;
    NetworkAnalyticsStateRelay *_wiredRelay;
    id _relayReadyObserver;
    id _cellEpochObserver;
    id _wifiEpochObserver;
    id _wiredEpochObserver;
    NSString *_cellIPPrefix;
    NSString *_wifiIPPrefix;
    NSString *_wiredIPPrefix;
    NSString *_lastDonatedCellIPPrefix;
    NSString *_lastDonatedWiFiIPPrefix;
    NSString *_lastDonatedWiredIPPrefix;
    NSDate *_lastDonatedCellIPPrefixDate;
    NSDate *_lastDonatedWiFiIPPrefixDate;
    NSDate *_lastDonatedWiredIPPrefixDate;
    BOOL _adminStateSettled;
    BOOL _observingSystemSettingsRelay;
    BOOL _cellEpochReady;
    BOOL _wifiEpochReady;
    BOOL _wiredEpochReady;
    BOOL _isDnUOptedIn;
}

@property (retain, nonatomic) ProxyAnalytics *proxyAnalytics;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (void)_administrativeDisable;
- (id)init;
- (void)_administrativeEnable;
- (void)processSymptomForInterfaceType:(long long)a0;
- (void)dealloc;
- (BOOL)noteSymptom:(id)a0;
- (void)donateBiomeEventForEdgeSelectionWithPrefixComplete:(id)a0 error:(id)a1;
- (int)configureInstance:(id)a0;
- (long long)nwInterfaceTypeFromAPSDInterface:(unsigned long long)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void)completeInitialization;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)processSymptom:(id)a0;
- (id)fetchEstimatedISOCountryCode;
- (void)donateBiomeEventForEdgeSelectionWithPrefix:(id)a0 interfaceType:(id)a1 radioType:(id)a2 radioBand:(id)a3 reply:(id /* block */)a4;

@end
