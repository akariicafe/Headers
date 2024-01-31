@class NSString, NSData;

@interface CUBLEDevice : NSObject

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned int deviceFlags;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSData *addressData;
@property (readonly, copy, nonatomic) NSData *appleManufacturerData;
@property (readonly, copy, nonatomic) NSData *lgBTAddress;
@property (readonly, copy, nonatomic) NSData *lgDeviceID;
@property (readonly, nonatomic) unsigned int lgFlags;
@property (readonly, copy, nonatomic) NSData *manufacturerData;
@property (readonly, nonatomic) unsigned char nearbyActivityLevel;
@property (readonly, nonatomic) int nearbyActionType;
@property (readonly, copy, nonatomic) NSData *nearbyAuthTag;
@property (readonly, nonatomic) unsigned int nearbyFlags;
@property (readonly, nonatomic) unsigned char objectDiscoveryBatteryState;
@property (readonly, nonatomic) int objectDiscoveryMode;
@property (readonly, copy, nonatomic) NSData *objectDiscoveryNearOwnerID;
@property (readonly, nonatomic) unsigned short objectDiscoveryProductID;
@property (readonly, copy, nonatomic) NSData *objectDiscoveryPublicKeyData;
@property (readonly, nonatomic) int objectSetupBatteryPerformance;
@property (readonly, nonatomic) unsigned char objectSetupBatteryState;
@property (readonly, nonatomic) unsigned char objectSetupColorCode;
@property (readonly, nonatomic) unsigned int objectSetupFlags;
@property (readonly, copy, nonatomic) NSString *objectSetupFontCode;
@property (readonly, copy, nonatomic) NSString *objectSetupMessage;
@property (readonly, nonatomic) struct { unsigned char bytes[3]; } proximityPairingLastConnectedHost;
@property (readonly, nonatomic) unsigned short proximityPairingProductID;
@property (readonly, nonatomic) int proximityPairingSubType;
@property (readonly, nonatomic) unsigned char proximityPairingAudioSourceCount;
@property (readonly, nonatomic) int rawRSSI;
@property (readonly, nonatomic) unsigned int scanFlags;

- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_parseAppleNearbyActionPtr:(const char *)a0 end:(const char *)a1;
- (void)_parseAppleManufacturerPtr:(const char *)a0 end:(const char *)a1 data:(id)a2;
- (void)_parseAppleNearbyInfoPtr:(const char *)a0 end:(const char *)a1;
- (void)_parseAppleObjectDiscoveryPtr:(const char *)a0 end:(const char *)a1;
- (void)_parseAppleProximityPairingObjectSetupPtr:(const char *)a0 end:(const char *)a1;
- (void)_parseAppleProximityPairingPtr:(const char *)a0 end:(const char *)a1;
- (void)_parseAppleProximityPairingStatusPtr:(const char *)a0 end:(const char *)a1;
- (void)_parseLGManufacturerPtr:(const char *)a0 end:(const char *)a1 fields:(id)a2;
- (void)_parseManufacturerData:(id)a0 advertisementFields:(id)a1;
- (unsigned int)updateWithAdvertisementData:(id)a0 rssi:(int)a1 oldDevice:(id)a2;

@end
