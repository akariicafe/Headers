@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats : PBCodable <NSCopying> {
    struct { unsigned char conversions : 1; unsigned char impressions : 1; } _has;
}

@property (nonatomic) BOOL hasConversions;
@property (nonatomic) double conversions;
@property (nonatomic) BOOL hasImpressions;
@property (nonatomic) double impressions;

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
