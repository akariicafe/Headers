@interface AWDWiFiMetricsScanObj : PBCodable <NSCopying> {
    struct { unsigned char durScans : 1; unsigned char numScans : 1; unsigned char scanType : 1; } _has;
}

@property (nonatomic) BOOL hasScanType;
@property (nonatomic) unsigned int scanType;
@property (nonatomic) BOOL hasNumScans;
@property (nonatomic) unsigned int numScans;
@property (nonatomic) BOOL hasDurScans;
@property (nonatomic) unsigned int durScans;

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
