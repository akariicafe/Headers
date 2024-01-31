@class NSString, SIRICOMMONFloatValue;

@interface SIRINLUEXTERNALAsrAlternative : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAlternative;
@property (retain, nonatomic) NSString *alternative;
@property (readonly, nonatomic) BOOL hasProbability;
@property (retain, nonatomic) SIRICOMMONFloatValue *probability;

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
