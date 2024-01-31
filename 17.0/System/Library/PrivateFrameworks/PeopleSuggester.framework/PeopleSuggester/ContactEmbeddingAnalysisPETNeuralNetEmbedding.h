@interface ContactEmbeddingAnalysisPETNeuralNetEmbedding : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _embeddings;
}

@property (readonly, nonatomic) unsigned long long embeddingsCount;
@property (readonly, nonatomic) float *embeddings;

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
- (void)clearEmbeddings;
- (void)addEmbeddings:(float)a0;
- (float)embeddingsAtIndex:(unsigned long long)a0;
- (void)setEmbeddings:(float *)a0 count:(unsigned long long)a1;

@end
