@class PBDataReader, NSString, GEOMiniCard, GEOLatLng, PBUnknownFields;

@interface GEOTrafficCamera : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_identifier;
    GEOMiniCard *_infoCard;
    GEOLatLng *_position;
    NSString *_speedLimitText;
    double _speedThreshold;
    GEOMiniCard *_speedingCard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _cameraPriority;
    unsigned int _countryCodeStyleId;
    unsigned int _highlightDistance;
    int _type;
    struct { unsigned char has_speedThreshold : 1; unsigned char has_cameraPriority : 1; unsigned char has_countryCodeStyleId : 1; unsigned char has_highlightDistance : 1; unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_identifier : 1; unsigned char read_infoCard : 1; unsigned char read_position : 1; unsigned char read_speedLimitText : 1; unsigned char read_speedingCard : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasPosition;
@property (retain, nonatomic) GEOLatLng *position;
@property (nonatomic) BOOL hasHighlightDistance;
@property (nonatomic) unsigned int highlightDistance;
@property (readonly, nonatomic) BOOL hasInfoCard;
@property (retain, nonatomic) GEOMiniCard *infoCard;
@property (readonly, nonatomic) BOOL hasSpeedLimitText;
@property (retain, nonatomic) NSString *speedLimitText;
@property (nonatomic) BOOL hasSpeedThreshold;
@property (nonatomic) double speedThreshold;
@property (readonly, nonatomic) BOOL hasSpeedingCard;
@property (retain, nonatomic) GEOMiniCard *speedingCard;
@property (nonatomic) BOOL hasCameraPriority;
@property (nonatomic) unsigned int cameraPriority;
@property (nonatomic) BOOL hasCountryCodeStyleId;
@property (nonatomic) unsigned int countryCodeStyleId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
