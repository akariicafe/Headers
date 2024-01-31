@class GEOVLFCorrection, PBDataReader;

@interface GEOVLFSuccessDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _inlierSuccessIndices;
    GEOVLFCorrection *_correction;
    double _poseConfidence;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_poseConfidence : 1; unsigned char read_inlierSuccessIndices : 1; unsigned char read_correction : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCorrection;
@property (retain, nonatomic) GEOVLFCorrection *correction;
@property (nonatomic) BOOL hasPoseConfidence;
@property (nonatomic) double poseConfidence;
@property (readonly, nonatomic) unsigned long long inlierSuccessIndicesCount;
@property (readonly, nonatomic) unsigned int *inlierSuccessIndices;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
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
- (void)addInlierSuccessIndices:(unsigned int)a0;
- (void)clearInlierSuccessIndices;
- (unsigned int)inlierSuccessIndicesAtIndex:(unsigned long long)a0;
- (void)setInlierSuccessIndices:(unsigned int *)a0 count:(unsigned long long)a1;

@end
