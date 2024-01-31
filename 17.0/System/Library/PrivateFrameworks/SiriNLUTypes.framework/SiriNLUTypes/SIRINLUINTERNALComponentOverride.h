@class NSString, NSData, NSMutableArray, SIRINLUINTERNALOverrideValue;

@interface SIRINLUINTERNALComponentOverride : PBCodable <NSCopying> {
    struct { unsigned char creationTimestampMsSinceUnixEpoch : 1; unsigned char overrideNamespace : 1; unsigned char enabled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdA;
@property (retain, nonatomic) NSString *idA;
@property (nonatomic) BOOL hasOverrideNamespace;
@property (nonatomic) int overrideNamespace;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasCreationTimestampMsSinceUnixEpoch;
@property (nonatomic) unsigned long long creationTimestampMsSinceUnixEpoch;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) SIRINLUINTERNALOverrideValue *value;
@property (retain, nonatomic) NSMutableArray *nluRequestRules;
@property (readonly, nonatomic) BOOL hasSerializedValue;
@property (retain, nonatomic) NSData *serializedValue;

+ (Class)nluRequestRulesType;

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
- (int)StringAsOverrideNamespace:(id)a0;
- (void)addNluRequestRules:(id)a0;
- (void)clearNluRequestRules;
- (id)nluRequestRulesAtIndex:(unsigned long long)a0;
- (unsigned long long)nluRequestRulesCount;
- (id)overrideNamespaceAsString:(int)a0;

@end
