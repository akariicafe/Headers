@class NSString, SIRINLUINTERNALNLv4EmbeddingTensor;

@interface SIRINLUINTERNALEMBEDDINGEmbeddingTensorOutput : PBCodable <NSCopying> {
    struct { unsigned char embeddingDim : 1; unsigned char isStableEmbeddingsVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEmbeddingVersion;
@property (retain, nonatomic) NSString *embeddingVersion;
@property (readonly, nonatomic) BOOL hasEmbeddingTensor;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor;
@property (readonly, nonatomic) BOOL hasSentenceEmbeddingTensor;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *sentenceEmbeddingTensor;
@property (nonatomic) BOOL hasEmbeddingDim;
@property (nonatomic) unsigned long long embeddingDim;
@property (nonatomic) BOOL hasIsStableEmbeddingsVersion;
@property (nonatomic) BOOL isStableEmbeddingsVersion;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
