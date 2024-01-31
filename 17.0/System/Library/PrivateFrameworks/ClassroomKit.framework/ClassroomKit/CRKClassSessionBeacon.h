@class WPAdvertising, NSDictionary, NSString, DMFControlSessionIdentifier;

@interface CRKClassSessionBeacon : NSObject <WPAdvertisingDelegate>

@property (readonly, nonatomic) WPAdvertising *advertiser;
@property (copy, nonatomic) NSDictionary *beaconAdvertisement;
@property (copy, nonatomic) DMFControlSessionIdentifier *advertisedIdentifier;
@property (nonatomic, getter=isAdvertising) BOOL advertising;
@property (nonatomic) unsigned short flags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopAdvertising;
- (id)init;
- (void).cxx_destruct;
- (void)advertiserPendingServiceOfType:(id)a0;
- (void)advertiserDidRegisterService;
- (void)advertiserDidUpdateState:(id)a0;
- (void)advertiserFailedToRegisterService;
- (void)startAdvertisingClassSessionWithIdentifier:(id)a0;
- (void)startAdvertisingWithUUID:(id)a0 IPAddress:(unsigned int)a1;

@end
