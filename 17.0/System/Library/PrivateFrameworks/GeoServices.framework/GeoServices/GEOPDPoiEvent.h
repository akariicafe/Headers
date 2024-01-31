@class PBDataReader, GEOPDMapsIdentifier, GEOLocalizedString, GEOTimezone, NSMutableArray, PBUnknownFields;

@interface GEOPDPoiEvent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_eventCategorys;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    GEOLocalizedString *_name;
    NSMutableArray *_performers;
    NSMutableArray *_poiIds;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _expectedAttendance;
    struct { unsigned char has_expectedAttendance : 1; unsigned char read_unknownFields : 1; unsigned char read_eventCategorys : 1; unsigned char read_eventDateTimes : 1; unsigned char read_eventId : 1; unsigned char read_name : 1; unsigned char read_performers : 1; unsigned char read_poiIds : 1; unsigned char read_timezone : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
