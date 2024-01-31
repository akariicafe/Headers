@class NSData;

@interface NTPBTocExposure : PBCodable <NSCopying> {
    struct { unsigned char precedingLocation : 1; } _has;
}

@property (nonatomic) BOOL hasPrecedingLocation;
@property (nonatomic) int precedingLocation;
@property (readonly, nonatomic) BOOL hasTocExposureId;
@property (retain, nonatomic) NSData *tocExposureId;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsPrecedingLocation:(id)a0;
- (id)precedingLocationAsString:(int)a0;

@end
