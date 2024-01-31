@class PBUnknownFields, NSString, PBDataReader, GEOLatLng, NSMutableArray, GEOStyleAttributes;

@interface GEOPBTransitStop : PBCodable <GEOTransitNamedItem, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_latLng;
    unsigned long long _muid;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    NSString *_timezone;
    NSMutableArray *_zoomNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _hallIndex;
    unsigned int _stopIndex;
    struct { unsigned char has_muid : 1; unsigned char has_hallIndex : 1; unsigned char has_stopIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_latLng : 1; unsigned char read_nameDisplayString : 1; unsigned char read_styleAttributes : 1; unsigned char read_timezone : 1; unsigned char read_zoomNames : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasStopIndex;
@property (nonatomic) unsigned int stopIndex;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (retain, nonatomic) NSString *timezone;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (nonatomic) BOOL hasHallIndex;
@property (nonatomic) unsigned int hallIndex;
@property (retain, nonatomic) NSMutableArray *zoomNames;
@property (readonly, nonatomic) BOOL hasNameDisplayString;
@property (retain, nonatomic) NSString *nameDisplayString;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)zoomNameType;

- (id)init;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)identifier;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)bestName;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addZoomName:(id)a0;
- (id)bestNameWithLocale:(out id *)a0;
- (void)clearZoomNames;
- (id)zoomNameAtIndex:(unsigned long long)a0;
- (unsigned long long)zoomNamesCount;

@end
