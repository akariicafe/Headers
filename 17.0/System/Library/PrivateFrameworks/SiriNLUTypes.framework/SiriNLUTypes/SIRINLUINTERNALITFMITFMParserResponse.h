@class SIRINLUEXTERNALParser, NSMutableArray;

@interface SIRINLUINTERNALITFMITFMParserResponse : PBCodable <NSCopying> {
    struct { unsigned char classificationProbability : 1; unsigned char classificationLabel : 1; } _has;
}

@property (nonatomic) BOOL hasClassificationLabel;
@property (nonatomic) BOOL classificationLabel;
@property (nonatomic) BOOL hasClassificationProbability;
@property (nonatomic) float classificationProbability;
@property (readonly, nonatomic) BOOL hasParser;
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser;
@property (retain, nonatomic) NSMutableArray *hypotheses;

+ (Class)hypothesesType;

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
- (void)clearHypotheses;
- (unsigned long long)hypothesesCount;
- (void)addHypotheses:(id)a0;
- (id)hypothesesAtIndex:(unsigned long long)a0;

@end
