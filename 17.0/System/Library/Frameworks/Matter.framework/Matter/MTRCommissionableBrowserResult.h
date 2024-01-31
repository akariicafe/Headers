@class NSString, NSNumber, NSMutableDictionary;

@interface MTRCommissionableBrowserResult : NSObject

@property (retain, nonatomic) NSString *instanceName;
@property (retain, nonatomic) NSNumber *vendorID;
@property (retain, nonatomic) NSNumber *productID;
@property (retain, nonatomic) NSNumber *discriminator;
@property (nonatomic) BOOL commissioningMode;
@property (retain, nonatomic) NSMutableDictionary *interfaces;
@property (nonatomic) struct Optional<chip::Controller::SetUpCodePairerParameters> { BOOL mHasValue; union Value { struct SetUpCodePairerParameters { struct PeerAddress { struct IPAddress { unsigned int Addr[4]; } mIPAddress; unsigned char mTransportType; unsigned short mPort; struct InterfaceId { unsigned int mPlatformInterface; } mInterface; } mPeerAddress; unsigned int mSetupPINCode; unsigned short mDiscriminator; struct Spake2pVerifier { unsigned char mW0[32]; unsigned char mL[65]; } mPASEVerifier; BOOL mHasPASEVerifier; struct Optional<chip::ReliableMessageProtocolConfig> { BOOL mHasValue; union Value { struct ReliableMessageProtocolConfig { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mIdleRetransTimeout; struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mActiveRetransTimeout; } mData; } mValue; } mMRPConfig; struct BleLayer *mBleLayer; void *mConnectionObject; void *mDiscoveredObject; char mHostName[17]; struct InterfaceId { unsigned int mPlatformInterface; } mInterfaceId; } mData; } mValue; } params;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
