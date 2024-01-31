@class NSData;

@interface HALSchemaHALCrossDeviceCommandExecutionFailed : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; unsigned char action : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int action;
@property (nonatomic) BOOL hasAction;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)deleteAction;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;

@end
