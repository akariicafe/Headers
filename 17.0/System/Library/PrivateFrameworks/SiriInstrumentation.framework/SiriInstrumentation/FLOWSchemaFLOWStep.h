@class NSArray, FLOWSchemaFLOWPlatformContext, FLOWSchemaFLOWState, NSData, FLOWSchemaFLOWAppContext;

@interface FLOWSchemaFLOWStep : SISchemaInstrumentationMessage {
    struct { unsigned char sequenceNum : 1; unsigned char timestampMs : 1; } _has;
}

@property (nonatomic) unsigned int sequenceNum;
@property (nonatomic) BOOL hasSequenceNum;
@property (nonatomic) long long timestampMs;
@property (nonatomic) BOOL hasTimestampMs;
@property (retain, nonatomic) FLOWSchemaFLOWState *flowState;
@property (nonatomic) BOOL hasFlowState;
@property (retain, nonatomic) FLOWSchemaFLOWAppContext *appContext;
@property (nonatomic) BOOL hasAppContext;
@property (copy, nonatomic) NSArray *domainContexts;
@property (copy, nonatomic) NSArray *platformContexts;
@property (retain, nonatomic) FLOWSchemaFLOWPlatformContext *platformRelatedContext;
@property (nonatomic) BOOL hasPlatformRelatedContext;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteFlowState;
- (void)addDomainContext:(id)a0;
- (void)addPlatformContext:(id)a0;
- (void)clearDomainContext;
- (void)clearPlatformContext;
- (void)deleteAppContext;
- (void)deleteDomainContext;
- (void)deletePlatformContext;
- (void)deletePlatformRelatedContext;
- (void)deleteSequenceNum;
- (void)deleteTimestampMs;
- (id)domainContextAtIndex:(unsigned long long)a0;
- (unsigned long long)domainContextCount;
- (id)platformContextAtIndex:(unsigned long long)a0;
- (unsigned long long)platformContextCount;

@end
