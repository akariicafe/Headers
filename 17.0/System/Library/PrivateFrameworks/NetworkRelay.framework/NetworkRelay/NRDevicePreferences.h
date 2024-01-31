@class NSSet, NRCompanionLinkPreferences, NRBluetoothLinkPreferences, NRDevicePreferencesQuickRelay, NRDeviceIdentifier, NSObject;
@protocol OS_xpc_object, OS_nw_path_evaluator;

@interface NRDevicePreferences : NSObject {
    BOOL _internalDeviceSetupStarted;
    BOOL _internalDeviceSetupCompleted;
    BOOL _hasCmpnLnkPrefsForThroughputP2P;
    BOOL _hasCmpnLnkPrefsForThroughputP2PImmediate;
    BOOL _hasCmpnLnkPrefsForThroughput;
    BOOL _hasCmpnLnkPrefsForBT;
    BOOL _hasCmpnLnkPrefsForIsoch;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _preferWiFiRequestCount;
    unsigned long long _quickRelayRequestCount;
    NRDevicePreferencesQuickRelay *_quickRelayPreference;
    NSObject<OS_xpc_object> *_connection;
    NRBluetoothLinkPreferences *_internalBluetoothLinkPreferences;
    NRCompanionLinkPreferences *_internalCompanionLinkPreferences;
    NSSet *_internalPolicyTrafficClassifiers;
    unsigned long long _identifier;
    NSObject<OS_nw_path_evaluator> *_cmpnLnkPrefsEvaluator;
}

@property (retain, nonatomic) NRDeviceIdentifier *deviceIdentifier;
@property (nonatomic) BOOL isNRDTestServer;
@property (retain, nonatomic) NRCompanionLinkPreferences *companionLinkPreferences;
@property (retain, nonatomic) NRBluetoothLinkPreferences *bluetoothLinkPreferences;
@property (readonly, nonatomic) BOOL hasPreferWiFiRequest;
@property (readonly, nonatomic) BOOL hasQuickRelayRequest;
@property (retain, nonatomic) NSSet *policyTrafficClassifiers;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDeviceIdentifier:(id)a0;
- (void)addPreferWiFiRequest;
- (void)addQuickRelayRequest;
- (void)deviceSetupCompleted;
- (void)deviceSetupStarted;
- (void)removeAllQuickRelayRequests;
- (void)removePreferWiFiRequest;
- (void)removeQuickRelayRequest;

@end
