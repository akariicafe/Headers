@interface OTSponsorToApplicantRound1M2 : PBCodable <NSCopying> {
    struct { unsigned char epoch : 1; } _has;
}

@property (nonatomic) BOOL hasEpoch;
@property (nonatomic) unsigned long long epoch;

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
