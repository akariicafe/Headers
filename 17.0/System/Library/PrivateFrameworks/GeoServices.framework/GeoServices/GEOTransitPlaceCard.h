@class NSString, PBDataReader, GEOTransitDepartureSequenceUsage;

@interface GEOTransitPlaceCard : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_incidentType;
    GEOTransitDepartureSequenceUsage *_transitDepartureSequenceUsage;
    NSString *_transitSystemName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _transitCategory;
    struct { unsigned char has_transitCategory : 1; unsigned char read_incidentType : 1; unsigned char read_transitDepartureSequenceUsage : 1; unsigned char read_transitSystemName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasTransitCategory;
@property (nonatomic) int transitCategory;
@property (readonly, nonatomic) BOOL hasTransitSystemName;
@property (retain, nonatomic) NSString *transitSystemName;
@property (readonly, nonatomic) BOOL hasTransitDepartureSequenceUsage;
@property (retain, nonatomic) GEOTransitDepartureSequenceUsage *transitDepartureSequenceUsage;
@property (readonly, nonatomic) BOOL hasIncidentType;
@property (retain, nonatomic) NSString *incidentType;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsTransitCategory:(id)a0;
- (id)transitCategoryAsString:(int)a0;

@end
