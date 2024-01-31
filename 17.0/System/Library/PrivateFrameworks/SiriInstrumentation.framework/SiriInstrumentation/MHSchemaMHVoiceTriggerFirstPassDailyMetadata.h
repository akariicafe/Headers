@class NSString, NSData;

@interface MHSchemaMHVoiceTriggerFirstPassDailyMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char hardwareSampleRate : 1; } _has;
}

@property (copy, nonatomic) NSString *configVersion;
@property (nonatomic) BOOL hasConfigVersion;
@property (nonatomic) int hardwareSampleRate;
@property (nonatomic) BOOL hasHardwareSampleRate;
@property (copy, nonatomic) NSString *mitigationAssetVersion;
@property (nonatomic) BOOL hasMitigationAssetVersion;
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
- (void)deleteConfigVersion;
- (void)deleteHardwareSampleRate;
- (void)deleteMitigationAssetVersion;

@end
