@interface AWDLibnetcoreTCPECNStatsReport : PBCodable <NSCopying> {
    struct { unsigned char tcpECNClientSetup : 1; unsigned char tcpECNClientSuccess : 1; unsigned char tcpECNConnNoPacketLossCE : 1; unsigned char tcpECNConnPacketLossCE : 1; unsigned char tcpECNConnPacketLossNoCE : 1; unsigned char tcpECNConnRecvCE : 1; unsigned char tcpECNConnRecvECE : 1; unsigned char tcpECNFallbackCE : 1; unsigned char tcpECNFallbackReorder : 1; unsigned char tcpECNFallbackSynLoss : 1; unsigned char tcpECNNotSupportedPeer : 1; unsigned char tcpECNRecvCE : 1; unsigned char tcpECNRecvECE : 1; unsigned char tcpECNSentECE : 1; unsigned char tcpECNServerSetup : 1; unsigned char tcpECNServerSuccess : 1; unsigned char tcpECNSynAckLost : 1; unsigned char tcpECNSynLost : 1; unsigned char tcpECNClientNegotiationEnabled : 1; unsigned char tcpECNServerNegotiationEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasTcpECNClientNegotiationEnabled;
@property (nonatomic) BOOL tcpECNClientNegotiationEnabled;
@property (nonatomic) BOOL hasTcpECNServerNegotiationEnabled;
@property (nonatomic) BOOL tcpECNServerNegotiationEnabled;
@property (nonatomic) BOOL hasTcpECNClientSetup;
@property (nonatomic) unsigned long long tcpECNClientSetup;
@property (nonatomic) BOOL hasTcpECNServerSetup;
@property (nonatomic) unsigned long long tcpECNServerSetup;
@property (nonatomic) BOOL hasTcpECNClientSuccess;
@property (nonatomic) unsigned long long tcpECNClientSuccess;
@property (nonatomic) BOOL hasTcpECNServerSuccess;
@property (nonatomic) unsigned long long tcpECNServerSuccess;
@property (nonatomic) BOOL hasTcpECNNotSupportedPeer;
@property (nonatomic) unsigned long long tcpECNNotSupportedPeer;
@property (nonatomic) BOOL hasTcpECNSynLost;
@property (nonatomic) unsigned long long tcpECNSynLost;
@property (nonatomic) BOOL hasTcpECNSynAckLost;
@property (nonatomic) unsigned long long tcpECNSynAckLost;
@property (nonatomic) BOOL hasTcpECNRecvCE;
@property (nonatomic) unsigned long long tcpECNRecvCE;
@property (nonatomic) BOOL hasTcpECNRecvECE;
@property (nonatomic) unsigned long long tcpECNRecvECE;
@property (nonatomic) BOOL hasTcpECNSentECE;
@property (nonatomic) unsigned long long tcpECNSentECE;
@property (nonatomic) BOOL hasTcpECNConnRecvCE;
@property (nonatomic) unsigned long long tcpECNConnRecvCE;
@property (nonatomic) BOOL hasTcpECNConnRecvECE;
@property (nonatomic) unsigned long long tcpECNConnRecvECE;
@property (nonatomic) BOOL hasTcpECNConnPacketLossNoCE;
@property (nonatomic) unsigned long long tcpECNConnPacketLossNoCE;
@property (nonatomic) BOOL hasTcpECNConnPacketLossCE;
@property (nonatomic) unsigned long long tcpECNConnPacketLossCE;
@property (nonatomic) BOOL hasTcpECNConnNoPacketLossCE;
@property (nonatomic) unsigned long long tcpECNConnNoPacketLossCE;
@property (nonatomic) BOOL hasTcpECNFallbackSynLoss;
@property (nonatomic) unsigned long long tcpECNFallbackSynLoss;
@property (nonatomic) BOOL hasTcpECNFallbackReorder;
@property (nonatomic) unsigned long long tcpECNFallbackReorder;
@property (nonatomic) BOOL hasTcpECNFallbackCE;
@property (nonatomic) unsigned long long tcpECNFallbackCE;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
