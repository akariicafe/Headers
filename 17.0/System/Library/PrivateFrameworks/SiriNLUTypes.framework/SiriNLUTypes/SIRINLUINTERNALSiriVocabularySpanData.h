@interface SIRINLUINTERNALSiriVocabularySpanData : PBCodable <NSCopying> {
    struct { unsigned char matchScore : 1; unsigned char priorScore : 1; unsigned char priorOrdinality : 1; } _has;
}

@property (nonatomic) BOOL hasPriorOrdinality;
@property (nonatomic) unsigned int priorOrdinality;
@property (nonatomic) BOOL hasPriorScore;
@property (nonatomic) double priorScore;
@property (nonatomic) BOOL hasMatchScore;
@property (nonatomic) double matchScore;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
