@class GEOLatLng, GEORPFeedbackTileFeatureInfo, PBDataReader;

@interface GEORPFeedbackCoordinateField : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEORPFeedbackTileFeatureInfo *_editedTile;
    GEOLatLng *_edited;
    GEORPFeedbackTileFeatureInfo *_originalTile;
    GEOLatLng *_original;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_editedTile : 1; unsigned char read_edited : 1; unsigned char read_originalTile : 1; unsigned char read_original : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasOriginal;
@property (retain, nonatomic) GEOLatLng *original;
@property (readonly, nonatomic) BOOL hasEdited;
@property (retain, nonatomic) GEOLatLng *edited;
@property (readonly, nonatomic) BOOL hasEditedTile;
@property (retain, nonatomic) GEORPFeedbackTileFeatureInfo *editedTile;
@property (readonly, nonatomic) BOOL hasOriginalTile;
@property (retain, nonatomic) GEORPFeedbackTileFeatureInfo *originalTile;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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

@end
