@class NSString, NSArray, WiFiMACAddress, WiFiChannel;

@interface WiFiP2PAWDLState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) BOOL supportsSoloMode;
@property (readonly, nonatomic) BOOL supportsDataTransfer;
@property (readonly, nonatomic) NSArray *channelSequence;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) unsigned int substate;
@property (readonly, nonatomic) WiFiMACAddress *macAddress;
@property (readonly, nonatomic) WiFiChannel *peerMasterChannel;
@property (readonly, nonatomic) WiFiChannel *peerPrimaryPreferredChannel;
@property (readonly, nonatomic) WiFiChannel *peerSecondaryPreferredChannel;

+ (id)currentState;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0 supportsSoloMode:(BOOL)a1 supportsDataTransfer:(BOOL)a2 channelSequence:(id)a3 isEnabled:(BOOL)a4 substate:(unsigned int)a5 macAddress:(id)a6 peerMasterChannel:(id)a7 peerPrimaryPreferredChannel:(id)a8 peerSecondaryPreferredChannel:(id)a9;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
