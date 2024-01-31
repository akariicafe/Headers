@class NSString, AMSBagKeySet, ACAccount, AMSProcessInfo, AMSURLRequestEncoder;
@protocol AMSBagProtocol, AMSMediaTokenServiceProtocol, AMSResponseDecoding;

@interface AMSMediaRequestEncoder : NSObject <AMSBagConsumer, AMSRequestEncoding>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly, nonatomic) AMSURLRequestEncoder *requestEncoder;
@property (nonatomic) BOOL disableAccountMediaTypeComponent;
@property (nonatomic) BOOL URLKnownToBeTrusted;
@property (retain, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) BOOL disableResponseDecoding;
@property (retain, nonatomic) NSString *gsTokenIdentifier;
@property (retain, nonatomic) NSString *logKey;
@property long long requestEncoding;
@property (retain, nonatomic) id<AMSResponseDecoding> responseDecoder;
@property (readonly, nonatomic) id<AMSMediaTokenServiceProtocol> tokenService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestByEncodingRequest:(id)a0 parameters:(id)a1;
- (void).cxx_destruct;
- (id)requestWithURL:(id)a0;
- (id)initWithTokenService:(id)a0 bag:(id)a1;
- (id)requestWithComponents:(id)a0;

@end
