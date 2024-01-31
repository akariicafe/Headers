@class NSString;

@interface NPKProtoStandalonePaymentSetupField : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int fieldType;
@property (readonly, nonatomic) BOOL hasCurrentValue;
@property (retain, nonatomic) NSString *currentValue;

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
- (int)StringAsFieldType:(id)a0;
- (id)fieldTypeAsString:(int)a0;

@end
