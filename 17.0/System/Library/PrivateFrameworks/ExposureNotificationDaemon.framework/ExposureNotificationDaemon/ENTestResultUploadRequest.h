@class NSString, NSArray, NSData, NSNumber;

@interface ENTestResultUploadRequest : ENTestResultNetworkRequest {
    NSString *_certificate;
    NSString *_healthAuthorityID;
    NSString *_requestRevisionToken;
    NSData *_symmetricKey;
    NSArray *_temporaryExposureKeys;
    NSNumber *_symptomOnsetInterval;
    BOOL _userDidTravel;
    NSNumber *_isUserVaccinated;
}

@property (readonly, copy, nonatomic) NSString *responseRevisionToken;
@property (readonly, copy, nonatomic) NSNumber *insertedExposures;

+ (id)uploadRequestWithCertificate:(id)a0 healthAuthorityID:(id)a1 revisionToken:(id)a2 symmetricKey:(id)a3 temporaryExposureKeys:(id)a4 userMetadata:(id)a5 requestURL:(id)a6 URLSession:(id)a7 queue:(id)a8 error:(id *)a9;

- (void).cxx_destruct;
- (id)bodyJSON;
- (id)handleResponse:(id)a0 body:(id)a1;

@end
