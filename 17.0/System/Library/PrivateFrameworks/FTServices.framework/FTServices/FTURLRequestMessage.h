@class NSDictionary, NSURL, NSData, NSNumber;

@interface FTURLRequestMessage : FTIDSMessage <NSCopying>

@property (nonatomic) unsigned long long requestType;
@property (copy, nonatomic) NSURL *requestURL;
@property (copy, nonatomic) NSDictionary *requestHeaders;
@property (copy, nonatomic) NSDictionary *requestStringParams;
@property (copy, nonatomic) NSData *requestBody;
@property (copy, nonatomic) NSDictionary *responseHeaders;
@property (copy, nonatomic) NSData *responseBody;
@property (copy, nonatomic) NSNumber *responseStatusCode;
@property (copy, nonatomic) NSDictionary *timingData;

- (void).cxx_destruct;
- (BOOL)isIDSMessage;
- (void)handleResponseHeaders:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURL:(id)a0 type:(unsigned long long)a1 headers:(id)a2 stringParams:(id)a3 body:(id)a4;
- (id)additionalQueryStringParameters;
- (id)additionalMessageHeaders;
- (BOOL)allowDualDelivery;
- (void)handleResponseBody:(id)a0;
- (void)handleResponseStatus:(unsigned long long)a0;
- (id)messageBodyDataOverride;
- (BOOL)wantsBodySignature;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsIDSServer;
- (BOOL)wantsIDSSignatures;
- (BOOL)wantsManagedRetries;

@end
