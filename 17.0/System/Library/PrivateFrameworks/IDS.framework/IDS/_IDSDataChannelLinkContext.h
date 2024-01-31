@class NSUUID, NSString, NSData, NSDictionary, _IDSDataChannelLinkConnections;

@interface _IDSDataChannelLinkContext : NSObject {
    char _linkID;
    unsigned char _networkType;
    long long _connectionType;
    unsigned int _RATType;
    unsigned short _maxMTU;
    unsigned char _remoteNetworkType;
    long long _remoteConnectionType;
    unsigned int _remoteRATType;
    unsigned int _maxBitrate;
    NSUUID *_linkUUID;
    NSUUID *_QRSessionID;
    long long _relayServerProvider;
    NSData *_relaySessionToken;
    NSData *_relaySessionKey;
    BOOL _serverIsDegraded;
    unsigned short _localLinkFlags;
    unsigned short _remoteLinkFlags;
    unsigned int _localDataSoMask;
    unsigned int _remoteDataSoMask;
    BOOL _isVirtualRelayLink;
    NSString *_localInterfaceName;
    NSString *_relayProtocolStackDescription;
    _IDSDataChannelLinkConnections *_connections;
    NSDictionary *_qrExperiments;
    unsigned short _channelNumber;
    NSData *_hbhEncryptionkey;
    NSData *_hbhDecryptionkey;
    unsigned long long _parentUniquePID;
    char _delegatedLinkID;
    unsigned short _localRelayLinkID;
    unsigned short _remoteRelayLinkID;
    BOOL _directConnectionIsReady;
    unsigned short _estimatedPerPacketConstantOverhead;
}

- (id)description;
- (void).cxx_destruct;

@end
