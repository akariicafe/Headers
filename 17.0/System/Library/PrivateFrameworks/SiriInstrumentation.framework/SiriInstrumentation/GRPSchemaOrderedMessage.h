@class NSData, GRPSchemaSiriEventTypeUnion;

@interface GRPSchemaOrderedMessage : SISchemaInstrumentationMessage {
    struct { unsigned char logicalEventTimestampInNs : 1; } _has;
}

@property (nonatomic) long long logicalEventTimestampInNs;
@property (nonatomic) BOOL hasLogicalEventTimestampInNs;
@property (retain, nonatomic) GRPSchemaSiriEventTypeUnion *siriEventTypeUnion;
@property (nonatomic) BOOL hasSiriEventTypeUnion;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

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
- (void)deleteLogicalEventTimestampInNs;
- (void)deleteSiriEventTypeUnion;

@end
