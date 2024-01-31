@class NSMutableArray, PBUnknownFields;

@interface GEOPDTransitTripStopTime : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_departureSequences;
}

+ (id)transitTripStopTimeForPlaceData:(id)a0;

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
