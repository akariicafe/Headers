@class NSString, NSData;

@interface MHSchemaMHAcousticFalseTriggerMitigationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char mitigationType : 1; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) int mitigationType;
@property (nonatomic) BOOL hasMitigationType;
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
- (void)deleteMitigationType;
- (void)deleteModelVersion;

@end
