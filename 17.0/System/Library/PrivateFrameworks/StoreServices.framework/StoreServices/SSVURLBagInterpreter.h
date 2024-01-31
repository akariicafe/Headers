@class NSArray, NSDictionary, NSURL, NSString, NSMutableDictionary, SSVSAPSignaturePolicy;

@interface SSVURLBagInterpreter : NSObject <NSCopying> {
    NSMutableDictionary *_cachedBagValues;
    NSArray *_subscriptionSignedActions;
    SSVSAPSignaturePolicy *_subscriptionSignaturePolicy;
}

@property (readonly, copy, nonatomic) NSArray *AMDDomains;
@property (readonly, copy, nonatomic) NSURL *mescalCertificateURL;
@property (readonly, copy, nonatomic) NSURL *mescalSetupURL;
@property (readonly, copy, nonatomic) NSURL *mescalPrimingURL;
@property (readonly, copy, nonatomic) NSDictionary *mescalSignedActions;
@property (readonly, copy, nonatomic) NSDictionary *mescalSignedRequests;
@property (readonly, copy, nonatomic) NSDictionary *mescalSignedResponses;
@property (readonly, copy, nonatomic) NSURL *pastisCertificateURL;
@property (readonly, copy, nonatomic) NSURL *pastisKeyServerURL;
@property (readonly, copy, nonatomic) NSString *storeFrontSuffix;

- (id)initWithURLBagDictionary:(id)a0;
- (BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)a0;
- (id)mescalSignaturePolicyForRequestURL:(id)a0;
- (id)valueForURLBagKey:(id)a0;
- (id)initWithSSBag:(id)a0;
- (id)mescalSignaturePolicyForResponseURL:(id)a0;
- (id)cachedValueFromBag:(id)a0 key:(id)a1 withType:(unsigned long long)a2 updateCache:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithURLBag:(id)a0;
- (id)URLForURLBagKey:(id)a0;
- (id)_valueForKey:(id)a0 withClass:(Class)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
