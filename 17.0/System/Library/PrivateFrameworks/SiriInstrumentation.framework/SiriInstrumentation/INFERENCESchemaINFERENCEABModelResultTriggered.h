@class NSData;

@interface INFERENCESchemaINFERENCEABModelResultTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char triggerReason : 1; unsigned char projectIntent : 1; } _has;
}

@property (nonatomic) int triggerReason;
@property (nonatomic) BOOL hasTriggerReason;
@property (nonatomic) int projectIntent;
@property (nonatomic) BOOL hasProjectIntent;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteProjectIntent;
- (void)deleteTriggerReason;

@end
