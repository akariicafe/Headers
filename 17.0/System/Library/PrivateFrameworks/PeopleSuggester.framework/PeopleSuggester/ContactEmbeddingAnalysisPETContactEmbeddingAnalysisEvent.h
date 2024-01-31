@class NSString, ContactEmbeddingAnalysisPETNeuralNetEmbedding;

@interface ContactEmbeddingAnalysisPETContactEmbeddingAnalysisEvent : PBCodable <NSCopying>

@property (retain, nonatomic) ContactEmbeddingAnalysisPETNeuralNetEmbedding *embeddingsBeforeActivation;
@property (retain, nonatomic) ContactEmbeddingAnalysisPETNeuralNetEmbedding *embeddingsAfterActivation;
@property (retain, nonatomic) NSString *contactId;

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
