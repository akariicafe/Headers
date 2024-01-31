@class GEONameInfo, PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEORouteName : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEONameInfo *_nameInfo;
    NSMutableArray *_nameRanges;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _lastZilchStitchedIndex;
    struct { unsigned char has_lastZilchStitchedIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_nameInfo : 1; unsigned char read_nameRanges : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasNameInfo;
@property (retain, nonatomic) GEONameInfo *nameInfo;
@property (nonatomic) BOOL hasLastZilchStitchedIndex;
@property (nonatomic) int lastZilchStitchedIndex;
@property (retain, nonatomic) NSMutableArray *nameRanges;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)nameRangeType;

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
- (unsigned long long)nameRangesCount;
- (void)clearNameRanges;
- (void)addNameRange:(id)a0;
- (id)nameRangeAtIndex:(unsigned long long)a0;

@end
