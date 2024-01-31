@class NSData;

@interface NLXSchemaCDMXPCEventProcessingStarted : SISchemaInstrumentationMessage {
    struct { unsigned char processingType : 1; unsigned char xpcType : 1; unsigned char xpcSystemEventType : 1; unsigned char serviceName : 1; } _has;
}

@property (nonatomic) int processingType;
@property (nonatomic) BOOL hasProcessingType;
@property (nonatomic) int xpcType;
@property (nonatomic) BOOL hasXpcType;
@property (nonatomic) int xpcSystemEventType;
@property (nonatomic) BOOL hasXpcSystemEventType;
@property (nonatomic) int serviceName;
@property (nonatomic) BOOL hasServiceName;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteProcessingType;
- (void)deleteServiceName;
- (void)deleteXpcSystemEventType;
- (void)deleteXpcType;

@end
