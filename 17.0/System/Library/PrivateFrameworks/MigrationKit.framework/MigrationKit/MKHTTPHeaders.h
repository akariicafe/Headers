@class MKHTTPContentDisposition, NSString, NSDictionary, MKHTTPProxyAuthorization, MKHTTPContentPayload, MKHTTPContentRange;

@interface MKHTTPHeaders : NSObject

@property (copy, nonatomic) NSString *statusText;
@property (nonatomic) BOOL isClosed;
@property (nonatomic) unsigned long long statusCode;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned long long transferEncoding;
@property (nonatomic) unsigned int contentLength;
@property (copy, nonatomic) NSString *accept;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSString *authorization;
@property (copy, nonatomic) NSString *connection;
@property (copy, nonatomic) NSString *boundary;
@property (copy, nonatomic) NSDictionary *query;
@property (retain, nonatomic) MKHTTPContentRange *contentRange;
@property (retain, nonatomic) MKHTTPContentDisposition *contentDisposition;
@property (retain, nonatomic) MKHTTPProxyAuthorization *proxyAuthorization;
@property (retain, nonatomic) MKHTTPContentPayload *contentPayload;

- (void)close:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (id)initWithMultipartHeaderArray:(id)a0;
- (id)pairsFromArray:(id)a0 byKey:(id)a1 atIndex:(long long)a2;
- (id)responseHeadersData;

@end
