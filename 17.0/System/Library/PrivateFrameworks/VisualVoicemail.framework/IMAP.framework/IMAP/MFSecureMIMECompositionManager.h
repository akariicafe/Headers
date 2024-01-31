@class NSError, NSString, NSLock, NSSet, MailAccount, NSMutableDictionary, NSMutableSet, NSObject;
@protocol MFSecureMIMECompositionManagerDelegate, OS_dispatch_queue;

@interface MFSecureMIMECompositionManager : NSObject {
    id<MFSecureMIMECompositionManagerDelegate> _delegate;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    MailAccount *_sendingAccount;
    NSString *_sendingAddress;
    struct __SecIdentity { } *_signingIdentity;
    NSError *_signingIdentityError;
    struct __SecIdentity { } *_encryptionIdentity;
    NSError *_encryptionIdentityError;
    NSMutableSet *_recipients;
    NSMutableDictionary *_errorsByRecipient;
    NSMutableDictionary *_certificatesByRecipient;
    int _signingPolicy;
    int _encryptionPolicy;
    int _signingStatus;
    int _encryptionStatus;
    unsigned long long _encryptionStatusSemaphore;
    unsigned long long _signingStatusSemaphore;
    BOOL _invalidated;
}

@property id<MFSecureMIMECompositionManagerDelegate> delegate;
@property (copy) NSString *sendingAddress;
@property (readonly) MailAccount *sendingAccount;
@property (readonly) int signingPolicy;
@property (readonly) int encryptionPolicy;
@property (readonly) int signingStatus;
@property (readonly) int encryptionStatus;
@property (readonly) NSSet *recipients;

+ (struct __SecIdentity { } *)copyEncryptionIdentityForAccount:(id)a0 sendingAddress:(id)a1 error:(id *)a2;
+ (struct __SecIdentity { } *)copySigningIdentityForAccount:(id)a0 sendingAddress:(id)a1 error:(id *)a2;
+ (id)copyEncryptionCertificatesForAccount:(id)a0 recipientAddress:(id)a1 error:(id *)a2;
+ (BOOL)isRevokedCertificate:(struct __SecCertificate { } *)a0 sendingAddress:(id)a1;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addRecipients:(id)a0;
- (BOOL)shouldAllowSend;
- (id)compositionSpecification;
- (id)initWithSendingAccount:(id)a0 signingPolicy:(int)a1 encryptionPolicy:(int)a2;
- (id)initWithSigningPolicy:(int)a0 encryptionPolicy:(int)a1;
- (void)removeRecipients:(id)a0;
- (BOOL)_nts_copySigningIdentity:(struct __SecIdentity **)a0 error:(id *)a1;
- (BOOL)_shouldSign_nts;
- (void)_determineEncryptionStatusWithNewRecipients:(id)a0;
- (void)_determineEncryptionStatusWithSendingAddress:(id)a0;
- (void)_determineIdentitiesWithSendingAddress:(id)a0 forSigning:(BOOL)a1 encryption:(BOOL)a2;
- (void)_determineRevocationStatusWithIdentity:(struct __SecIdentity { } *)a0 sendingAddress:(id)a1;
- (void)_determineSigningStatusWithSendingAddress:(id)a0;
- (void)_notifyDelegateEncryptionStatusDidChange:(int)a0 certsByRecipient:(id)a1 errorsByRecipient:(id)a2 identity:(struct __SecIdentity { } *)a3 error:(id)a4;
- (void)_notifyDelegateSigningStatusDidChange:(int)a0 identity:(struct __SecIdentity { } *)a1 error:(id)a2;
- (BOOL)_nts_copyEncryptionIdentity:(struct __SecIdentity **)a0 error:(id *)a1 certificatesByRecipient:(id *)a2 errorsByRecipient:(id *)a3;
- (void)_nts_setEncryptionIdentity:(struct __SecIdentity { } *)a0 error:(id)a1;
- (void)_nts_setSigningIdentity:(struct __SecIdentity { } *)a0 error:(id)a1;
- (BOOL)_shouldAllowSend_nts;
- (BOOL)_shouldEncrypt_nts;
- (BOOL)_updateEncryptionStatus_nts;
- (BOOL)_updateSigningStatus_nts;

@end
