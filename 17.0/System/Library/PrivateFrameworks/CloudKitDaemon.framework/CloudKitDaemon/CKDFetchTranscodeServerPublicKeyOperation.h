@class NSString, NSURL, CKPublicKey;

@interface CKDFetchTranscodeServerPublicKeyOperation : CKDOperation

@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *transcodeServerHostname;
@property (retain, nonatomic) NSURL *transcodeServerPublicKeyURL;
@property (retain) CKPublicKey *transcodeServerPublicKey;
@property (nonatomic) long long type;

+ (id)nameForState:(unsigned long long)a0;
+ (struct __SecPolicy { } *)createTranscodeServerTrustPolicy;

- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (void)main;
- (void).cxx_destruct;
- (void)determineTranscodeServerPublicKeyURL;
- (void)fetchCachedTranscodePublicKey;
- (void)fetchRemoteTranscodePublicKey;

@end
