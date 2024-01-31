@class RRSchemaProvisionalPullerStarted, NSData, RRSchemaProvisionalPullerEnded, RRSchemaProvisionalPullerFailed;

@interface RRSchemaProvisionalPullerContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) RRSchemaProvisionalPullerStarted *started;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) RRSchemaProvisionalPullerEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) RRSchemaProvisionalPullerFailed *failed;
@property (nonatomic) BOOL hasFailed;
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

@end
