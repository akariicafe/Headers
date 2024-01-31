@class NSString, SIRICOMMONInt32Value, SIRICOMMONStringValue, SIRICOMMONFloatValue;

@interface SIRINLUEXTERNALSpanProperty : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasValueString;
@property (retain, nonatomic) SIRICOMMONStringValue *valueString;
@property (readonly, nonatomic) BOOL hasValueInt;
@property (retain, nonatomic) SIRICOMMONInt32Value *valueInt;
@property (readonly, nonatomic) BOOL hasValueFloat;
@property (retain, nonatomic) SIRICOMMONFloatValue *valueFloat;

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
