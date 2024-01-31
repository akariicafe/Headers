@class ORCHSchemaORCHPowerContextPolicies, ORCHSchemaORCHVisionPowerState, NSData;

@interface ORCHSchemaORCHPowerContextPolicyReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHPowerContextPolicies *powerContextPolicies;
@property (nonatomic) BOOL hasPowerContextPolicies;
@property (retain, nonatomic) ORCHSchemaORCHVisionPowerState *visionPowerState;
@property (nonatomic) BOOL hasVisionPowerState;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPlatformspecificpowerstates;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePowerContextPolicies;
- (void)deleteVisionPowerState;

@end
