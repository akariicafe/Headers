@class GEOPDOrientedBoundingBox, NSMutableArray, PBDataReader;

@interface GEOPDStorefrontFace : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_features;
    GEOPDOrientedBoundingBox *_geometry;
    unsigned long long _groupId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_groupId : 1; unsigned char read_features : 1; unsigned char read_geometry : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasGeometry;
@property (retain, nonatomic) GEOPDOrientedBoundingBox *geometry;
@property (retain, nonatomic) NSMutableArray *features;
@property (nonatomic) BOOL hasGroupId;
@property (nonatomic) unsigned long long groupId;

+ (BOOL)isValid:(id)a0;
+ (Class)featureType;

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
- (id)featureAtIndex:(unsigned long long)a0;
- (void)addFeature:(id)a0;
- (void)clearFeatures;
- (unsigned long long)featuresCount;

@end
