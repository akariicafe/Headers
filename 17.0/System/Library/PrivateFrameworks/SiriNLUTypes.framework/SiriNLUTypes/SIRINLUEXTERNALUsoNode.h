@class NSMutableArray, NSString, SIRICOMMONStringValue, SIRICOMMONUInt32Value, SIRICOMMONInt64Value;

@interface SIRINLUEXTERNALUsoNode : PBCodable <NSCopying> {
    struct { unsigned char usoElementId : 1; } _has;
}

@property (nonatomic) BOOL hasUsoElementId;
@property (nonatomic) unsigned int usoElementId;
@property (readonly, nonatomic) BOOL hasStringPayload;
@property (retain, nonatomic) SIRICOMMONStringValue *stringPayload;
@property (readonly, nonatomic) BOOL hasIntegerPayload;
@property (retain, nonatomic) SIRICOMMONInt64Value *integerPayload;
@property (readonly, nonatomic) BOOL hasUsoVerbElementId;
@property (retain, nonatomic) SIRICOMMONUInt32Value *usoVerbElementId;
@property (readonly, nonatomic) BOOL hasEntityLabel;
@property (retain, nonatomic) NSString *entityLabel;
@property (readonly, nonatomic) BOOL hasVerbLabel;
@property (retain, nonatomic) NSString *verbLabel;
@property (retain, nonatomic) NSMutableArray *normalizedStringPayloads;

+ (Class)normalizedStringPayloadsType;

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
- (void)addNormalizedStringPayloads:(id)a0;
- (void)clearNormalizedStringPayloads;
- (id)normalizedStringPayloadsAtIndex:(unsigned long long)a0;
- (unsigned long long)normalizedStringPayloadsCount;

@end
