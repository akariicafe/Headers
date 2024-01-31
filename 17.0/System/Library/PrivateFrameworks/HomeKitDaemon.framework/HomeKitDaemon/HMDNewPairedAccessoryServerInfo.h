@class NSUUID, NSString, HMDAccessoryNetworkCredential, HMDAccessoryPairingEvent, HAPAccessoryServer;
@protocol MKFAccessory;

@interface HMDNewPairedAccessoryServerInfo : NSObject

@property (readonly) HAPAccessoryServer *server;
@property (readonly) NSUUID *primaryAccessoryUUID;
@property (readonly) id<MKFAccessory> hostAccessory;
@property (readonly) long long certificationStatus;
@property (readonly) NSString *configurationAppIdentifier;
@property (readonly) HMDAccessoryNetworkCredential *networkCredential;
@property (readonly) HMDAccessoryPairingEvent *pairingEvent;

- (id)description;
- (void).cxx_destruct;
- (id)initWithServer:(id)a0 primaryAccessoryUUID:(id)a1 certificationStatus:(long long)a2 configurationAppIdentifier:(id)a3 hostAccessory:(id)a4 networkCredential:(id)a5 pairingEvent:(id)a6;

@end
