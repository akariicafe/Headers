@class NSArray, NSData;

@interface FLOWSchemaFLOWHomeCommunicationSendOrReply : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *targetTypes;
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
- (void)clearTargetType;
- (unsigned long long)targetTypeCount;
- (void)addTargetType:(int)a0;
- (void)deleteTargetType;
- (int)targetTypeAtIndex:(unsigned long long)a0;

@end
