@class NSString, NSData;

@interface EXPSchemaEXPTrialRolloutNamespace : SISchemaInstrumentationMessage {
    struct { unsigned char compatibilityVersion : 1; } _has;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) unsigned int compatibilityVersion;
@property (nonatomic) BOOL hasCompatibilityVersion;
@property (copy, nonatomic) NSString *factorPackId;
@property (nonatomic) BOOL hasFactorPackId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCompatibilityVersion;
- (void)deleteFactorPackId;
- (void)deleteName;

@end
