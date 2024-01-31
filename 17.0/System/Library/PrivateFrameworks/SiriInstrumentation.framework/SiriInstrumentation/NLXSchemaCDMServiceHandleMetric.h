@class NSData;

@interface NLXSchemaCDMServiceHandleMetric : SISchemaInstrumentationMessage {
    struct { unsigned char serviceName : 1; unsigned char startLogicalTimestampInNs : 1; unsigned char endLogicalTimestampInNs : 1; unsigned char failureReason : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) int serviceName;
@property (nonatomic) BOOL hasServiceName;
@property (nonatomic) long long startLogicalTimestampInNs;
@property (nonatomic) BOOL hasStartLogicalTimestampInNs;
@property (nonatomic) long long endLogicalTimestampInNs;
@property (nonatomic) BOOL hasEndLogicalTimestampInNs;
@property (nonatomic) int failureReason;
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (void)deleteStartLogicalTimestampInNs;
- (void)deleteEndLogicalTimestampInNs;
- (void)deleteFailureReason;
- (void)deleteServiceName;

@end
