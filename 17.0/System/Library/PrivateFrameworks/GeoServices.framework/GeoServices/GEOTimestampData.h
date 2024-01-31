@class NSTimeZone, NSString, PBDataReader, PBUnknownFields;

@interface GEOTimestampData : PBCodable <GEOServerFormatTokenTimeStampValue, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_formatPattern;
    NSString *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _timestampVal;
    BOOL _displayTimezone;
    struct { unsigned char has_timestampVal : 1; unsigned char has_displayTimezone : 1; unsigned char read_unknownFields : 1; unsigned char read_formatPattern : 1; unsigned char read_timezone : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) double timeStamp;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSString *formatPattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasTimestampVal;
@property (nonatomic) unsigned int timestampVal;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (retain, nonatomic) NSString *timezone;
@property (nonatomic) BOOL hasDisplayTimezone;
@property (nonatomic) BOOL displayTimezone;
@property (readonly, nonatomic) BOOL hasFormatPattern;
@property (retain, nonatomic) NSString *formatPattern;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
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
- (BOOL)displayTimeZone;

@end
