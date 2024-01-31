@class NSString, NSData;

@interface SISchemaRedactableString : SISchemaInstrumentationMessage

@property (nonatomic) int redactionState;
@property (nonatomic) BOOL hasRedactionState;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL hasValue;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long which_String;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRedactionState;
- (void)deleteValue;

@end
