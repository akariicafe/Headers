@class NSString, NSData;

@interface FLOWSchemaFLOWVoiceShortcutAction : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *appId;
@property (nonatomic) BOOL hasAppId;
@property (copy, nonatomic) NSString *intentCategory;
@property (nonatomic) BOOL hasIntentCategory;
@property (copy, nonatomic) NSString *intentName;
@property (nonatomic) BOOL hasIntentName;
@property (copy, nonatomic) NSString *intentNLDomain;
@property (nonatomic) BOOL hasIntentNLDomain;
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
- (void)deleteAppId;
- (void)deleteIntentCategory;
- (void)deleteIntentNLDomain;
- (void)deleteIntentName;

@end
