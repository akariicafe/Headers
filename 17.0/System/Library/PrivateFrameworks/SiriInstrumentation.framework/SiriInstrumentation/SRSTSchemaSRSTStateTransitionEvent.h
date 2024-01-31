@class NSData;

@interface SRSTSchemaSRSTStateTransitionEvent : SISchemaInstrumentationMessage {
    struct { unsigned char currentState : 1; unsigned char previousState : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) int currentState;
@property (nonatomic) BOOL hasCurrentState;
@property (nonatomic) int previousState;
@property (nonatomic) BOOL hasPreviousState;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (void)deleteCurrentState;
- (void)deletePreviousState;

@end
