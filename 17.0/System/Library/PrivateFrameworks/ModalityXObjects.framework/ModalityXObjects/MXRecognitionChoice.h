@interface MXRecognitionChoice : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _alternativeIndexs;
    struct { unsigned char confidence : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long alternativeIndexsCount;
@property (readonly, nonatomic) int *alternativeIndexs;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) int confidence;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAlternativeIndex:(int)a0;
- (int)alternativeIndexAtIndex:(unsigned long long)a0;
- (void)clearAlternativeIndexs;
- (void)setAlternativeIndexs:(int *)a0 count:(unsigned long long)a1;

@end
