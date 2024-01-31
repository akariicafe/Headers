@class SIRINLUEXTERNALTurnInput, SIRINLUEXTERNALRequestID, SIRINLUINTERNALNLv4EmbeddingTensor, SIRINLUEXTERNALUUID, SIRINLUINTERNALNLV4_PARSERTokenisation, NSMutableArray;

@interface SIRINLUINTERNALNLV4_PARSERNLv4ParserRequest : PBRequest <NSCopying> {
    struct { unsigned char maxNumParses : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (readonly, nonatomic) BOOL hasTokenisedUtterance;
@property (retain, nonatomic) SIRINLUINTERNALNLV4_PARSERTokenisation *tokenisedUtterance;
@property (readonly, nonatomic) BOOL hasEmbeddings;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (readonly, nonatomic) BOOL hasTurnInput;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput;
@property (nonatomic) BOOL hasMaxNumParses;
@property (nonatomic) unsigned long long maxNumParses;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *nluRequestId;

+ (Class)matchingSpansType;

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
- (void)addMatchingSpans:(id)a0;
- (void)clearMatchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)matchingSpansCount;

@end
