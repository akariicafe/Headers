@class NSData, NSDictionary;

@interface NRDevicePairingProperties : NRDeviceProperties

@property (retain, nonatomic) NSData *outOfBandKey;
@property (nonatomic) BOOL wasInitiallySetupUsingIDSPairing;
@property (nonatomic) BOOL pairWithSPPLink;
@property (nonatomic) BOOL isAltAccountPairing;
@property (retain, nonatomic) NSData *bluetoothMACAddress;
@property (retain, nonatomic) NSData *awdlAddressData;
@property (retain, nonatomic) NSDictionary *peerEndpointDictionary;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
