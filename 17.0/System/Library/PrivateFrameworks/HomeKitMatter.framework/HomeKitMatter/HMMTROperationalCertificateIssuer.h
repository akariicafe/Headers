@class HMMTRAccessoryServerBrowser, NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTROperationalCertificateIssuer : NSObject <HMFObject, MTROperationalCertificateIssuer>

@property (readonly, weak, nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL shouldSkipAttestationCertificateValidation;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)issueOperationalCertificateForRequest:(id)a0 attestationInfo:(id)a1 controller:(id)a2 completion:(id /* block */)a3;
- (id)initWithQueue:(id)a0 browser:(id)a1;

@end
