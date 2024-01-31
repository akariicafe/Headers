@class AMSMescalFairPlay, NSData, AMSURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface AMSMescalSession : NSObject {
    NSData *_certificateData;
    AMSURLSession *_urlSession;
    AMSMescalFairPlay *_fairPlayContext;
    long long _mescalType;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)defaultSession;
+ (id)primeSession;
+ (id)sessionWithType:(long long)a0;

- (id)_loadCertificateDataWithBag:(id)a0 error:(id *)a1;
- (BOOL)_shouldRetryFairPlayForError:(id)a0;
- (BOOL)_verifyEntitlements;
- (id)_establishContextWithBag:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)signData:(id)a0 bag:(id)a1 error:(id *)a2;
- (BOOL)verifyData:(id)a0 withSignature:(id)a1 bag:(id)a2 error:(id *)a3;
- (id)_cachedCertData;
- (id)primeSignatureForData:(id)a0 bag:(id)a1 error:(id *)a2;
- (void)_resetSession;
- (BOOL)verifyPrimeSignature:(id)a0 error:(id *)a1;
- (id)_cachedCertPath;
- (id)_postExchangeData:(id)a0 bag:(id)a1 error:(id *)a2;
- (BOOL)_cacheCertData:(id)a0 expiration:(double)a1;

@end
