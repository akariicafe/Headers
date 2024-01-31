@class NSData;

@interface NLXSchemaCDMSingleServiceSetupAttemptFailed : SISchemaInstrumentationMessage {
    struct { unsigned char serviceType : 1; unsigned char retryNumber : 1; unsigned char reason : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) int serviceType;
@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) unsigned int retryNumber;
@property (nonatomic) BOOL hasRetryNumber;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) unsigned int errorCode;
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
- (void)deleteReason;
- (void)deleteErrorCode;
- (void)deleteRetryNumber;
- (void)deleteServiceType;

@end
