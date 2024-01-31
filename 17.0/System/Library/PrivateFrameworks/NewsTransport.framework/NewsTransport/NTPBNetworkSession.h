@interface NTPBNetworkSession : PBCodable <NSCopying> {
    struct { unsigned char sessionID : 1; unsigned char cellularRadioAccessTechnology : 1; unsigned char wifiReachable : 1; } _has;
}

@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) BOOL hasWifiReachable;
@property (nonatomic) BOOL wifiReachable;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (nonatomic) int cellularRadioAccessTechnology;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
