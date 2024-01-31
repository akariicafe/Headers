@class NSString, NSData;

@interface ORCHSchemaORCHAceCommandStarted : SISchemaInstrumentationMessage {
    struct { unsigned char aceCommandType : 1; } _has;
}

@property (copy, nonatomic) NSString *aceCommandName;
@property (nonatomic) BOOL hasAceCommandName;
@property (nonatomic) int aceCommandType;
@property (nonatomic) BOOL hasAceCommandType;
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
- (void)deleteAceCommandName;
- (void)deleteAceCommandType;

@end
