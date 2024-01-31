@class NSData;

@interface HOMESchemaHOMEAssistantDeviceBirthday : SISchemaInstrumentationMessage {
    struct { unsigned char year : 1; unsigned char month : 1; } _has;
}

@property (nonatomic) unsigned int year;
@property (nonatomic) BOOL hasYear;
@property (nonatomic) unsigned int month;
@property (nonatomic) BOOL hasMonth;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMonth;
- (void)deleteYear;

@end
