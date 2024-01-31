@class NSString, NSData, SISchemaUUID;

@interface HomeKitSchemaHKAccessoryOperationReported : SISchemaInstrumentationMessage {
    struct { unsigned char communicationProtocol : 1; unsigned char transportType : 1; unsigned char operationType : 1; unsigned char wasCached : 1; unsigned char wasLocal : 1; unsigned char wasRemoteAccessAllowed : 1; unsigned char wasResidentFirstEnabled : 1; unsigned char wasRapportSlow : 1; unsigned char residentFirstDuration : 1; unsigned char residentFirstErrorCode : 1; unsigned char totalDuration : 1; unsigned char finalErrorCode : 1; unsigned char consecutiveFailureCount : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sharedMetricsId;
@property (nonatomic) BOOL hasSharedMetricsId;
@property (copy, nonatomic) NSString *accessoryCategory;
@property (nonatomic) BOOL hasAccessoryCategory;
@property (nonatomic) int communicationProtocol;
@property (nonatomic) BOOL hasCommunicationProtocol;
@property (nonatomic) int transportType;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int operationType;
@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) BOOL wasCached;
@property (nonatomic) BOOL hasWasCached;
@property (nonatomic) BOOL wasLocal;
@property (nonatomic) BOOL hasWasLocal;
@property (nonatomic) BOOL wasRemoteAccessAllowed;
@property (nonatomic) BOOL hasWasRemoteAccessAllowed;
@property (nonatomic) BOOL wasResidentFirstEnabled;
@property (nonatomic) BOOL hasWasResidentFirstEnabled;
@property (nonatomic) BOOL wasRapportSlow;
@property (nonatomic) BOOL hasWasRapportSlow;
@property (nonatomic) unsigned int residentFirstDuration;
@property (nonatomic) BOOL hasResidentFirstDuration;
@property (copy, nonatomic) NSString *residentFirstErrorDomain;
@property (nonatomic) BOOL hasResidentFirstErrorDomain;
@property (nonatomic) unsigned int residentFirstErrorCode;
@property (nonatomic) BOOL hasResidentFirstErrorCode;
@property (nonatomic) unsigned int totalDuration;
@property (nonatomic) BOOL hasTotalDuration;
@property (copy, nonatomic) NSString *finalErrorDomain;
@property (nonatomic) BOOL hasFinalErrorDomain;
@property (nonatomic) unsigned int finalErrorCode;
@property (nonatomic) BOOL hasFinalErrorCode;
@property (nonatomic) unsigned int consecutiveFailureCount;
@property (nonatomic) BOOL hasConsecutiveFailureCount;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteWasCached;
- (void)deleteAccessoryCategory;
- (void)deleteCommunicationProtocol;
- (void)deleteConsecutiveFailureCount;
- (void)deleteFinalErrorCode;
- (void)deleteFinalErrorDomain;
- (void)deleteOperationType;
- (void)deleteResidentFirstDuration;
- (void)deleteResidentFirstErrorCode;
- (void)deleteResidentFirstErrorDomain;
- (void)deleteSharedMetricsId;
- (void)deleteTotalDuration;
- (void)deleteTransportType;
- (void)deleteWasLocal;
- (void)deleteWasRapportSlow;
- (void)deleteWasRemoteAccessAllowed;
- (void)deleteWasResidentFirstEnabled;

@end
