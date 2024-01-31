@class NSString, NSData, POMMESSchemaPOMMESRequestResult;

@interface POMMESSchemaPOMMESRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isHandledByPreflight : 1; unsigned char pommesSearchReason : 1; } _has;
}

@property (nonatomic) BOOL isHandledByPreflight;
@property (nonatomic) BOOL hasIsHandledByPreflight;
@property (retain, nonatomic) POMMESSchemaPOMMESRequestResult *result;
@property (nonatomic) BOOL hasResult;
@property (copy, nonatomic) NSString *preflightClientHandlerIdentifier;
@property (nonatomic) BOOL hasPreflightClientHandlerIdentifier;
@property (nonatomic) unsigned int pommesSearchReason;
@property (nonatomic) BOOL hasPommesSearchReason;
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
- (void)deleteIsHandledByPreflight;
- (void)deletePommesSearchReason;
- (void)deletePreflightClientHandlerIdentifier;
- (void)deleteResult;

@end
