@class NSData, POWSchemaProvisionalPOWProcessUsage;

@interface POWSchemaProvisionalPOWUsage : SISchemaInstrumentationMessage {
    struct { unsigned char process : 1; unsigned char context : 1; } _has;
}

@property (nonatomic) int process;
@property (nonatomic) BOOL hasProcess;
@property (retain, nonatomic) POWSchemaProvisionalPOWProcessUsage *processUsage;
@property (nonatomic) BOOL hasProcessUsage;
@property (nonatomic) int context;
@property (nonatomic) BOOL hasContext;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)deleteProcess;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)deleteProcessUsage;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)deleteContext;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;

@end
