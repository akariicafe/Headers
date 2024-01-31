@class NSMutableArray;

@interface SIRINLUEXTERNALUtteranceAlignment : PBCodable <NSCopying> {
    struct { unsigned char asrHypothesisIndex : 1; unsigned char nodeIndex : 1; } _has;
}

@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (nonatomic) unsigned int asrHypothesisIndex;
@property (retain, nonatomic) NSMutableArray *spans;
@property (nonatomic) BOOL hasNodeIndex;
@property (nonatomic) unsigned int nodeIndex;

+ (Class)spansType;

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
- (void)clearSpans;
- (unsigned long long)spansCount;
- (void)addSpans:(id)a0;
- (id)spansAtIndex:(unsigned long long)a0;

@end
