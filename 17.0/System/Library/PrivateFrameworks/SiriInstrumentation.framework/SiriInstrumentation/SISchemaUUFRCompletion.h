@class NSArray, SISchemaSiriResponseContext, NSData;

@interface SISchemaUUFRCompletion : SISchemaInstrumentationMessage {
    struct { unsigned char completionStatus : 1; } _has;
}

@property (nonatomic) int completionStatus;
@property (nonatomic) BOOL hasCompletionStatus;
@property (copy, nonatomic) NSArray *homeKitAccessoryResponses;
@property (retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext;
@property (nonatomic) BOOL hasSiriResponseContext;
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
- (void)addHomeKitAccessoryResponse:(id)a0;
- (void)clearHomeKitAccessoryResponse;
- (void)deleteCompletionStatus;
- (void)deleteHomeKitAccessoryResponse;
- (void)deleteSiriResponseContext;
- (id)homeKitAccessoryResponseAtIndex:(unsigned long long)a0;
- (unsigned long long)homeKitAccessoryResponseCount;

@end
