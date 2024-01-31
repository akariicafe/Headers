@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchQueryCompletionMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _completionSourceTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _tags;
    NSString *_completion;
    long long _popularity;
    NSMutableArray *_tokens;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _score;
    float _tagConfidence;
    BOOL _isCompletematch;
    struct { unsigned char has_popularity : 1; unsigned char has_score : 1; unsigned char has_tagConfidence : 1; unsigned char has_isCompletematch : 1; unsigned char read_completionSourceTypes : 1; unsigned char read_tags : 1; unsigned char read_completion : 1; unsigned char read_tokens : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
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
