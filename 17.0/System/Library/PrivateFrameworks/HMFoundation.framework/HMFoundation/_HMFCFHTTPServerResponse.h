@class _HMFCFHTTPServerRequest, _HMFCFHTTPMessage;

@interface _HMFCFHTTPServerResponse : HMFHTTPResponseInternal

@property (readonly, nonatomic) _HMFCFHTTPMessage *response;
@property (readonly, nonatomic) _HMFCFHTTPServerRequest *request;
@property (readonly, nonatomic) struct _CFHTTPServerResponse { } *responseRef;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)dealloc;
- (id)body;
- (id)headerFields;
- (void)setBody:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequest:(id)a0 statusCode:(long long)a1;
- (void)setHeaderValue:(id)a0 forHeaderKey:(id)a1;

@end
