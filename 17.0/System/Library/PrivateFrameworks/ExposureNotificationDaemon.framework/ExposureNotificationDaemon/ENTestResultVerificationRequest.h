@class NSString, NSSet, NSDictionary;

@interface ENTestResultVerificationRequest : ENTestResultNetworkRequest

@property (readonly, copy, nonatomic) NSString *verificationCode;
@property (readonly, copy, nonatomic) NSSet *acceptedTestTypes;
@property (readonly, copy, nonatomic) NSString *nonce;
@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, copy, nonatomic) NSDictionary *metadata;

+ (id)_metadataFromVerificationResponseDictionary:(id)a0 error:(id *)a1;
+ (id)verificationRequestWithCode:(id)a0 acceptedReportTypes:(id)a1 APIKey:(id)a2 nonce:(id)a3 requestURL:(id)a4 URLSession:(id)a5 queue:(id)a6 error:(id *)a7;

- (void).cxx_destruct;
- (id)_testVerificationErrorForErrorCodeString:(id)a0;
- (id)bodyJSON;
- (id)errorForUnsuccessfulResponse:(id)a0 body:(id)a1;
- (id)handleResponse:(id)a0 body:(id)a1;

@end
