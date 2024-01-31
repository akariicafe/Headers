@class NSString, NSData;

@interface DIMSchemaDIMSiriAccountInformation : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *siriDeviceId;
@property (nonatomic) BOOL hasSiriDeviceId;
@property (copy, nonatomic) NSString *siriSpeechId;
@property (nonatomic) BOOL hasSiriSpeechId;
@property (copy, nonatomic) NSString *siriUserId;
@property (nonatomic) BOOL hasSiriUserId;
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
- (void)deleteSiriDeviceId;
- (void)deleteSiriSpeechId;
- (void)deleteSiriUserId;

@end
