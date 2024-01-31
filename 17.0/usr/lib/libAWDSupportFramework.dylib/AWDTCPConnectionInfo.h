@interface AWDTCPConnectionInfo : PBCodable <NSCopying> {
    struct { unsigned char dnsResolutionLatency : 1; unsigned char interfaceType : 1; unsigned char tcpHandshakeLatency : 1; unsigned char tcpRetransmissions : 1; unsigned char tcpRxBytes : 1; unsigned char tcpTxBytes : 1; unsigned char tlsLatency : 1; } _has;
}

@property (nonatomic) BOOL hasDnsResolutionLatency;
@property (nonatomic) unsigned int dnsResolutionLatency;
@property (nonatomic) BOOL hasTcpHandshakeLatency;
@property (nonatomic) unsigned int tcpHandshakeLatency;
@property (nonatomic) BOOL hasTlsLatency;
@property (nonatomic) unsigned int tlsLatency;
@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) int interfaceType;
@property (nonatomic) BOOL hasTcpRetransmissions;
@property (nonatomic) unsigned int tcpRetransmissions;
@property (nonatomic) BOOL hasTcpTxBytes;
@property (nonatomic) unsigned int tcpTxBytes;
@property (nonatomic) BOOL hasTcpRxBytes;
@property (nonatomic) unsigned int tcpRxBytes;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsInterfaceType:(id)a0;
- (id)interfaceTypeAsString:(int)a0;

@end
