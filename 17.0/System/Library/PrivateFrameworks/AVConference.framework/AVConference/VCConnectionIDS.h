@class NSString, NSUUID, NSData, VCDatagramChannelIDS, IDSDataChannelLinkContext;

@interface VCConnectionIDS : VCConnection <VCConnectionProtocol> {
    IDSDataChannelLinkContext *_linkContext;
    int _localCellTech;
    int _remoteCellTech;
    int _connectionMTU;
}

@property (readonly) unsigned int datagramChannelToken;
@property (readonly) VCDatagramChannelIDS *datagramChannel;
@property (readonly) NSString *relaySessionToken;
@property (readonly) NSData *sharedDigestKey;
@property BOOL isQUICPod;
@property (copy) NSString *relayProtocolStackDescription;
@property (copy) NSString *channelDataBaseProtocolStackDescription;
@property (readonly) long long linkConnectionType;
@property (readonly) BOOL isLocalOn5G;
@property (readonly) BOOL isRemoteOn5G;
@property (readonly) BOOL isLocalDelegated;
@property (readonly) BOOL isRemoteDelegated;
@property (readonly) BOOL isVirtualRelayLink;
@property (readonly) BOOL isWifiToWifi;
@property (readonly) NSString *localInterfaceName;
@property int connectionMTU;
@property int maxConnectionMTU;
@property (readonly) BOOL isVPN;
@property (readonly) BOOL serverIsDegraded;
@property (readonly) NSUUID *connectionUUID;
@property (readonly) int localConnectionType;
@property (readonly) int remoteConnectionType;
@property (readonly) unsigned int type;
@property (readonly) NSString *localInterfaceTypeString;
@property (readonly) NSString *remoteInterfaceTypeString;
@property unsigned int uplinkAudioBitrateCapOneToOne;
@property unsigned int uplinkBitrateCapOneToOne;
@property unsigned int uplinkBitrateCap;
@property unsigned int downlinkBitrateCap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)VCConnectionIDS_CDBPS:(id)a0;
+ (id)VCConnectionIDS_RPS:(id)a0;
+ (unsigned int)worstCaseNetworkOverheadInBytesWithNumOfStreamId:(int)a0 isPriorityIncluded:(BOOL)a1;

- (void)dealloc;
- (void)setCellularMTU:(int)a0;
- (int)cellTechForSoMask:(unsigned int)a0 fallbackTo:(int)a1;
- (id)connectionQRSessionID;
- (id)initWithLinkContext:(id)a0 dataChannelToken:(unsigned int)a1;
- (BOOL)isOnSameInterfacesAndQRSessionWithConnection:(id)a0;
- (BOOL)isOnSameQRSessionWithConnection:(id)a0;
- (void)setUpVTable;
- (unsigned short)updateMaxConnectionMTU:(unsigned short)a0;

@end
