@class NSData;

@interface FLOWLINKSchemaFLOWLINKAppShortcutFirstRunConfirmationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isUserResponseAffirmative : 1; } _has;
}

@property (nonatomic) BOOL isUserResponseAffirmative;
@property (nonatomic) BOOL hasIsUserResponseAffirmative;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsUserResponseAffirmative;

@end
