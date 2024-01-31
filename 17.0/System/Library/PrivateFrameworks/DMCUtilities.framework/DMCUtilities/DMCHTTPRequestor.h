@class NSString, NSArray;
@protocol DMCHTTPAuthenticator;

@interface DMCHTTPRequestor : NSObject <NSURLSessionDataDelegate>

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSArray *anchorCertificateRefs;
@property (retain, nonatomic) id selfReference;
@property (nonatomic) BOOL didFailDueToMissingCredentials;
@property (nonatomic) BOOL didFailDueToCertNotTrusted;
@property (retain, nonatomic) id<DMCHTTPAuthenticator> authenticator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_getServerErrorCodeFromResponseDictionary:(id)a0;
+ (id)_getServerErrorDetailsFromResponseDictionary:(id)a0;
+ (id)_getServerErrorMessageFromResponseDictionary:(id)a0;
+ (id)_jsonDictFromResponse:(id)a0;
+ (BOOL)_parsePairingTokenMissingErrorWithMessage:(id)a0 details:(id)a1 outError:(id *)a2;
+ (BOOL)_parsePredefined403ErrorWithResponseDictionary:(id)a0 outError:(id *)a1;
+ (BOOL)_parseSoftwareUpdateRequiredErrorWithMessage:(id)a0 details:(id)a1 outError:(id *)a2;
+ (BOOL)_parseUnrecognizedDeviceErrorWithMessage:(id)a0 details:(id)a1 outError:(id *)a2;

- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)startWithRequest:(id)a0 username:(id)a1 password:(id)a2 anchorCertificateRefs:(id)a3 completionBlock:(id /* block */)a4;

@end
