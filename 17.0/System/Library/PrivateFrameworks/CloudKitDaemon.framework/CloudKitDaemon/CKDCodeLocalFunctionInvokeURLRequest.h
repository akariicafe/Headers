@class NSString, NSData, NSURL;

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSData *serializedParameters;
@property (copy, nonatomic) NSURL *resolvedBaseURL;
@property (copy, nonatomic) id /* block */ serializedResultsCallback;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (long long)databaseScope;
- (long long)partitionType;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (long long)serverType;
- (BOOL)requestGETPreAuth;
- (id)url;
- (BOOL)parsingStandaloneMessage;
- (Class)expectedResponseClass;
- (id)initWithOperation:(id)a0 serviceName:(id)a1 functionName:(id)a2 serializedParameters:(id)a3 resolvedBaseURL:(id)a4;
- (void)prepareRequestOperationsForRequest:(id)a0;
- (id)requestBodyStream;
- (Class)requestMessageClass;
- (BOOL)shouldCompressBody;

@end
