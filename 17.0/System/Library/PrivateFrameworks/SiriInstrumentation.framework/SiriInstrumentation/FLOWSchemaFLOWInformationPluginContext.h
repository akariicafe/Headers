@class NSString, NSData;

@interface FLOWSchemaFLOWInformationPluginContext : SISchemaInstrumentationMessage {
    struct { unsigned char eventType : 1; } _has;
}

@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasEventType;
@property (copy, nonatomic) NSString *executedPegasusDomain;
@property (nonatomic) BOOL hasExecutedPegasusDomain;
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
- (void)deleteEventType;
- (void)deleteExecutedPegasusDomain;

@end
