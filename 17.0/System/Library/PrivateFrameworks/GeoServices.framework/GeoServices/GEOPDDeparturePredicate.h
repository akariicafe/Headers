@class PBUnknownFields;

@interface GEOPDDeparturePredicate : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct GEOPDTimeRange { unsigned int _duration; unsigned int _startTime; struct { unsigned char duration : 1; unsigned char startTime : 1; } _has; } _timeRange;
    unsigned int _numAdditionalDepartures;
    struct { unsigned char has_timeRange : 1; unsigned char has_numAdditionalDepartures : 1; } _flags;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithTraitsTransitModeFilter:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
