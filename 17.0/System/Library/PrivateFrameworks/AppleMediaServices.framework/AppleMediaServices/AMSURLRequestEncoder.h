@class NSString, NSArray, AMSKeychainOptions, NSDictionary, AMSBagKeySet, ACAccount, AMSURLRequestProperties, NSObject, AMSSigningSecurityService, AMSProcessInfo;
@protocol AMSBagProtocol, AMSResponseDecoding, AMSURLBagContract, OS_dispatch_queue;

@interface AMSURLRequestEncoder : NSObject <AMSBagConsumer, AMSRequestEncoding>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } propertiesLock;
@property (nonatomic) long long encodeCount;
@property (readonly, nonatomic) AMSSigningSecurityService *signingService;
@property (copy, nonatomic) AMSURLRequestProperties *parentProperties;
@property (nonatomic) BOOL preserveQueryParameterEncoding;
@property (nonatomic) BOOL shouldSetStorefrontHeader;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *additionalMetrics;
@property long long anisetteType;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property BOOL compressRequestBody;
@property BOOL disableResponseDecoding;
@property long long dialogOptions;
@property BOOL enableRemoteSecuritySigning;
@property (retain, nonatomic) NSArray *groupRequestAccounts;
@property (retain, nonatomic) NSString *gsTokenIdentifier;
@property BOOL includeClientVersions;
@property (retain, nonatomic) AMSKeychainOptions *keychainOptions;
@property (retain, nonatomic) NSString *logUUID;
@property long long mescalType;
@property long long requestEncoding;
@property (retain, nonatomic) id<AMSResponseDecoding> responseDecoder;
@property BOOL shouldSetCookiesFromResponse;
@property BOOL shouldSetStorefrontFromResponse;
@property BOOL urlKnownToBeTrusted;
@property (retain, nonatomic) id<AMSURLBagContract> bagContract;
@property (nonatomic) long long dataEncoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (id)requestWithMethod:(long long)a0 URL:(id)a1 headers:(id)a2 parameters:(id)a3;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 error:(id *)a2;
- (id)requestWithMethod:(long long)a0 URLString:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)requestByEncodingRequest:(id)a0 parameters:(id)a1 error:(id *)a2;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 parameters:(id)a2;
- (id)init;
- (id)requestByEncodingRequest:(id)a0 parameters:(id)a1;
- (id)requestWithMethod:(long long)a0 URLString:(id)a1 error:(id *)a2;
- (id)initWithBag:(id)a0;
- (id)_methodStringFromMethod:(long long)a0;
- (id)requestWithMethod:(long long)a0 URL:(id)a1 error:(id *)a2;
- (void)_personalizeKeychainOptionsForAccount:(id)a0;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 headers:(id)a2 parameters:(id)a3;
- (id)requestWithMethod:(long long)a0 URL:(id)a1 parameters:(id)a2;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 parameters:(id)a2 error:(id *)a3;
- (void)_addSecuritySigningHeadersToRequest:(id)a0 buyParams:(id)a1 bag:(id)a2;
- (id)requestWithMethod:(long long)a0 URL:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)initWithBagContract:(id)a0;
- (void).cxx_destruct;

@end
