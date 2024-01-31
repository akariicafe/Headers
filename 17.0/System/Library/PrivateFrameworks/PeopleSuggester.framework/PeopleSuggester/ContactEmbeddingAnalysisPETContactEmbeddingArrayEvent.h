@class NSString, NSMutableArray;

@interface ContactEmbeddingAnalysisPETContactEmbeddingArrayEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sessinobd;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSMutableArray *contactEmbeddings;

+ (Class)contactEmbeddingType;

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
- (void)addContactEmbedding:(id)a0;
- (void)clearContactEmbeddings;
- (id)contactEmbeddingAtIndex:(unsigned long long)a0;
- (unsigned long long)contactEmbeddingsCount;

@end
