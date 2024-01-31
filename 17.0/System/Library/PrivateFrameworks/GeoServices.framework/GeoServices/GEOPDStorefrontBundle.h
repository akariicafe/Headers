@class PBDataReader, NSMutableArray, GEOPDStorefrontPresentation;

@interface GEOPDStorefrontBundle : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_faces;
    unsigned long long _identifier;
    unsigned long long _matchedMuid;
    GEOPDStorefrontPresentation *_presentation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_identifier : 1; unsigned char has_matchedMuid : 1; unsigned char read_faces : 1; unsigned char read_presentation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) BOOL hasPresentation;
@property (retain, nonatomic) GEOPDStorefrontPresentation *presentation;
@property (retain, nonatomic) NSMutableArray *faces;
@property (nonatomic) BOOL hasMatchedMuid;
@property (nonatomic) unsigned long long matchedMuid;

+ (BOOL)isValid:(id)a0;
+ (Class)faceType;

- (id)faceAtIndex:(unsigned long long)a0;
- (void)addFace:(id)a0;
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
- (void)clearFaces;
- (unsigned long long)facesCount;

@end
