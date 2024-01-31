@class SetupSchemaProvisionalSiriSetupEnded, NSData, SetupSchemaProvisionalSiriSetupStep, SetupSchemaProvisionalSiriSetupStarted;

@interface SetupSchemaProvisionalSiriSetupContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupStarted *started;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupStep *step;
@property (nonatomic) BOOL hasStep;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEnded;
- (void)deleteStarted;
- (void)deleteStep;

@end
