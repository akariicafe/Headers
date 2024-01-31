@class NSString, NSData;

@interface USPSchemaUSPMeasurementContext : SISchemaInstrumentationMessage {
    struct { unsigned char environment : 1; } _has;
}

@property (copy, nonatomic) NSString *contextName;
@property (nonatomic) BOOL hasContextName;
@property (nonatomic) int environment;
@property (nonatomic) BOOL hasEnvironment;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteEnvironment;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteContextName;

@end
