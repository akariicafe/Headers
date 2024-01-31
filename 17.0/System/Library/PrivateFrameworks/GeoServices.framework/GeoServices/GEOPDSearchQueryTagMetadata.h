@class NSMutableArray, PBDataReader;

@interface GEOPDSearchQueryTagMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_modelVersions;
    double _normalizedScore;
    double _score;
    double _sigmoidScore;
    NSMutableArray *_spanScores;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _rank;
    struct { unsigned char has_normalizedScore : 1; unsigned char has_score : 1; unsigned char has_sigmoidScore : 1; unsigned char has_rank : 1; unsigned char read_modelVersions : 1; unsigned char read_spanScores : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
