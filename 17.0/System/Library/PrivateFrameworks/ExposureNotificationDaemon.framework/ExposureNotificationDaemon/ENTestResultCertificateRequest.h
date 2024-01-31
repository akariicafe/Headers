@class NSString, NSData;

@interface ENTestResultCertificateRequest : ENTestResultNetworkRequest

@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, copy, nonatomic) NSData *symmetricKey;
@property (readonly, copy, nonatomic) NSData *HMAC;
@property (readonly, copy, nonatomic) NSString *certificate;

+ (id)certificateRequestWithToken:(id)a0 temporaryExposureKeys:(id)a1 APIKey:(id)a2 requestURL:(id)a3 URLSession:(id)a4 queue:(id)a5 error:(id *)a6;
+ (id)deriveHMACForTemporaryExposureKeys:(id)a0 symmetricKey:(id)a1;

- (void).cxx_destruct;
- (id)bodyJSON;
- (id)handleResponse:(id)a0 body:(id)a1;

@end
