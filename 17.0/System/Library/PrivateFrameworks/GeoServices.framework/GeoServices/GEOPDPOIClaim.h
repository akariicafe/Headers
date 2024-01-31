@class NSString, PBUnknownFields;

@interface GEOPDPOIClaim : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_claimUrl;
    BOOL _isClaimable;
    BOOL _isClaimed;
    struct { unsigned char has_isClaimable : 1; unsigned char has_isClaimed : 1; } _flags;
}

+ (id)poiClaimForPlaceData:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
