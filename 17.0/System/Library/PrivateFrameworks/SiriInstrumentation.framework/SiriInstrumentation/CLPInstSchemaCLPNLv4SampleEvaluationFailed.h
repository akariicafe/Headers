@class NSData;

@interface CLPInstSchemaCLPNLv4SampleEvaluationFailed : SISchemaInstrumentationMessage {
    struct { unsigned char userProfileSandboxFailure : 1; unsigned char xpcClientDisconnected : 1; unsigned char xpcClientNLURequestTimeout : 1; } _has;
}

@property (nonatomic) BOOL userProfileSandboxFailure;
@property (nonatomic) BOOL hasUserProfileSandboxFailure;
@property (nonatomic) BOOL xpcClientDisconnected;
@property (nonatomic) BOOL hasXpcClientDisconnected;
@property (nonatomic) BOOL xpcClientNLURequestTimeout;
@property (nonatomic) BOOL hasXpcClientNLURequestTimeout;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUserProfileSandboxFailure;
- (void)deleteXpcClientDisconnected;
- (void)deleteXpcClientNLURequestTimeout;

@end
