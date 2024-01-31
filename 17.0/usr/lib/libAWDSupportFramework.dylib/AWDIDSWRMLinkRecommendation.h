@interface AWDIDSWRMLinkRecommendation : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char infraWiFiState : 1; unsigned char magnetState : 1; unsigned char primaryLinkType : 1; unsigned char recommendedLinkType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasRecommendedLinkType;
@property (nonatomic) unsigned int recommendedLinkType;
@property (nonatomic) BOOL hasPrimaryLinkType;
@property (nonatomic) unsigned int primaryLinkType;
@property (nonatomic) BOOL hasMagnetState;
@property (nonatomic) unsigned int magnetState;
@property (nonatomic) BOOL hasInfraWiFiState;
@property (nonatomic) unsigned int infraWiFiState;

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
