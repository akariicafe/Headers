@class NSData, NSString, NSArray, NSUUID, IDSEndpointCapabilities, NSDate, NSDictionary, CUTWeakReference;

@interface _IDSDevice : NSObject {
    NSDictionary *_info;
    CUTWeakReference *_account;
    CUTWeakReference *_serviceReference;
    int _nearbyToken;
    BOOL _nearby;
    BOOL _connected;
    BOOL _immutableCloudConnected;
    BOOL _cloudConnected;
}

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic, getter=isNearby) BOOL nearby;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic, getter=isCloudConnected) BOOL cloudConnected;
@property (readonly, nonatomic) BOOL locallyPresent;
@property (readonly, nonatomic) BOOL isDefaultPairedDevice;
@property (readonly, nonatomic) BOOL isLocallyPaired;
@property (readonly, nonatomic) unsigned long long pairingProtocolVersion;
@property (readonly, nonatomic) unsigned long long minCompatibilityVersion;
@property (readonly, nonatomic) unsigned long long maxCompatibilityVersion;
@property (readonly, nonatomic) unsigned long long serviceMinCompatibilityVersion;
@property (readonly, nonatomic) BOOL supportsiCloudPairing;
@property (readonly, nonatomic) BOOL supportsTethering;
@property (readonly, nonatomic) BOOL supportsHandoff;
@property (readonly, nonatomic) BOOL supportsApplePay;
@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) NSArray *identities;
@property (retain, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property (readonly, nonatomic) NSUUID *stableBluetoothIdentifier;
@property (readonly, nonatomic) BOOL supportsSMSRelay;
@property (readonly, nonatomic) BOOL supportsMMSRelay;
@property (readonly, nonatomic) BOOL supportsPhoneCalls;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) NSString *deviceColor;
@property (readonly, nonatomic) NSString *enclosureColor;
@property (readonly, nonatomic) NSArray *linkedUserURIs;
@property (readonly, nonatomic) BOOL isHSATrusted;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) long long relationship;
@property (readonly, nonatomic) IDSEndpointCapabilities *capabilities;
@property (readonly, nonatomic) NSDate *lastActivityDate;
@property (readonly, nonatomic) NSString *uniqueIDOverride;

- (id)fullDescription;
- (id)compactDescription;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_setAccount:(id)a0;
- (BOOL)isTinker;
- (void)_addIdentity:(id)a0;
- (void)_cloudConnectedStateChanged;
- (void)_connectedStateChanged;
- (void)_nearbyStateChanged;
- (void)_setService:(id)a0;
- (void)_stateChanged;

@end
