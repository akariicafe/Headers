@class PBDataReader, NSUUID, NSString, PBUnknownFields;

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _eventDate;
    NSString *_eventName;
    NSString *_loiIdentifierString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _loiType;
    BOOL _isEventAllDay;
    struct { unsigned char has_eventDate : 1; unsigned char has_loiType : 1; unsigned char has_isEventAllDay : 1; unsigned char read_unknownFields : 1; unsigned char read_eventName : 1; unsigned char read_loiIdentifierString : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSUUID *loiIdentifier;
@property (nonatomic) BOOL hasLoiType;
@property (nonatomic) int loiType;
@property (readonly, nonatomic) BOOL hasEventName;
@property (retain, nonatomic) NSString *eventName;
@property (nonatomic) BOOL hasEventDate;
@property (nonatomic) double eventDate;
@property (nonatomic) BOOL hasIsEventAllDay;
@property (nonatomic) BOOL isEventAllDay;
@property (readonly, nonatomic) BOOL hasLoiIdentifierString;
@property (retain, nonatomic) NSString *loiIdentifierString;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsLoiType:(id)a0;
- (id)loiTypeAsString:(int)a0;

@end
