@class NSArray, NSString, NSError, NSObject;
@protocol OS_os_log, ECAuthenticationCredentials;

@interface ECSASLClient : NSObject <EFLoggable> {
    char *_userLanguageCode;
    char *_authenticationName;
    char *_authorizationName;
    struct sasl_secret { unsigned long long x0; unsigned char x1[1]; } *_password;
    char *_authenticationPersonID;
    char *_authorizationPersonID;
    char *_appleToken;
    char *_machineID;
    char *_oneTimePassword;
    char *_clientInfo;
    char *_oauthToken;
}

@property (class, readonly, copy) NSArray *installedMechanisms;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (copy, nonatomic) NSString *selectedMechanismName;
@property (nonatomic) long long saslStatus;
@property (retain, nonatomic) NSError *saslError;
@property (nonatomic) unsigned int encryptionBufferSize;
@property (copy, nonatomic) NSArray *mechanismNames;
@property (readonly, nonatomic) struct sasl_callback { unsigned long long x0; void *x1; void *x2; } *callbacks;
@property (readonly, nonatomic) struct sasl_conn { } *saslConnection;
@property (nonatomic) BOOL mechanismUsesPlainText;
@property (nonatomic) BOOL lastResponseIncludesCredential;
@property (weak, nonatomic) id<ECAuthenticationCredentials> credentials;
@property (nonatomic) BOOL excludeAuthorizationName;
@property (nonatomic) BOOL excludeInitialResponse;
@property (readonly, nonatomic) BOOL lastResponseIncludesPlainTextCredential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)start;
- (void).cxx_destruct;
- (id)responseForServerData:(id)a0;
- (void)_clearAuthenticationCallbackBuffers;
- (void)_handleGenericError:(int)a0 description:(id)a1;
- (void)_handleNeedsUserInteraction:(struct sasl_interact { unsigned long long x0; char *x1; char *x2; char *x3; void *x4; unsigned int x5; } *)a0;
- (void)_handleStartFailure:(int)a0;
- (BOOL)_logGenericError:(int)a0 saslConnection:(struct sasl_conn { } *)a1 description:(id)a2 error:(id *)a3;
- (void)_retrieveEncryptionBufferSize;
- (id)initWithMechanismNames:(id)a0 credentials:(id)a1 externalSecurityLayer:(unsigned int)a2 allowPlainText:(BOOL)a3;
- (id)newDecryptedDataForBytes:(const char *)a0 length:(unsigned int)a1;
- (id)newEncryptedDataForBytes:(const char *)a0 length:(unsigned int)a1;

@end
