@class PBUnknownFields, PBDataReader, GEOPDMapsIdentifier;

@interface GEORPPoiActivityFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _representativeHours;
    GEOPDMapsIdentifier *_mapsId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isDataCorrect;
    BOOL _isDataUseful;
    BOOL _isVisualRepresentationValid;
    struct { unsigned char has_isDataCorrect : 1; unsigned char has_isDataUseful : 1; unsigned char has_isVisualRepresentationValid : 1; unsigned char read_unknownFields : 1; unsigned char read_representativeHours : 1; unsigned char read_mapsId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (readonly, nonatomic) unsigned long long representativeHoursCount;
@property (readonly, nonatomic) unsigned int *representativeHours;
@property (nonatomic) BOOL hasIsDataUseful;
@property (nonatomic) BOOL isDataUseful;
@property (nonatomic) BOOL hasIsDataCorrect;
@property (nonatomic) BOOL isDataCorrect;
@property (nonatomic) BOOL hasIsVisualRepresentationValid;
@property (nonatomic) BOOL isVisualRepresentationValid;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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
- (void)addRepresentativeHours:(unsigned int)a0;
- (void)clearRepresentativeHours;
- (unsigned int)representativeHoursAtIndex:(unsigned long long)a0;
- (void)setRepresentativeHours:(unsigned int *)a0 count:(unsigned long long)a1;

@end
