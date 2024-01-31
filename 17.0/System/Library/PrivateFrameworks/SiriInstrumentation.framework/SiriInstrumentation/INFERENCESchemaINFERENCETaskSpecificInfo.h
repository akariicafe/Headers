@class NSData, INFERENCESchemaINFERENCELongRunningTaskInfo;

@interface INFERENCESchemaINFERENCETaskSpecificInfo : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCELongRunningTaskInfo *longRunningTaskInfo;
@property (nonatomic) BOOL hasLongRunningTaskInfo;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichTaskinfo;

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
- (void)deleteLongRunningTaskInfo;

@end
