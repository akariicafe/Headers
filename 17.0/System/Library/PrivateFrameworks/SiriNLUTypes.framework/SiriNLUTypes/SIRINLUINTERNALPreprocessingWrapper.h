@class SIRINLUINTERNALSPANMATCHSpanMatchResponse, SIRINLUINTERNALEMBEDDINGEmbeddingResponse, SIRINLUINTERNALTOKENIZERTokenizerResponse, SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse;

@interface SIRINLUINTERNALPreprocessingWrapper : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTokenizerResponse;
@property (retain, nonatomic) SIRINLUINTERNALTOKENIZERTokenizerResponse *tokenizerResponse;
@property (readonly, nonatomic) BOOL hasSpanMatchResponse;
@property (retain, nonatomic) SIRINLUINTERNALSPANMATCHSpanMatchResponse *spanMatchResponse;
@property (readonly, nonatomic) BOOL hasEmbeddingResponse;
@property (retain, nonatomic) SIRINLUINTERNALEMBEDDINGEmbeddingResponse *embeddingResponse;
@property (readonly, nonatomic) BOOL hasMentionResolverResponse;
@property (retain, nonatomic) SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse *mentionResolverResponse;

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
