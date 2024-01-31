@class NSString;

@interface SIRINLUINTERNALITFMITFMHypothesis : PBCodable <NSCopying> {
    struct { unsigned char label : 1; unsigned char probability : 1; } _has;
}

@property (nonatomic) BOOL hasLabel;
@property (nonatomic) int label;
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) float probability;
@property (readonly, nonatomic) BOOL hasStringLabel;
@property (retain, nonatomic) NSString *stringLabel;

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
