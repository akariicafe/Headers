@class NSData, NSDictionary;

@interface HMFMutableHTTPRequest : HMFHTTPRequest

@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) NSData *body;
@property (copy, nonatomic) NSDictionary *headerFields;

- (void)setBody:(id)a0;
- (id)initWithInternalRequest:(id)a0;
- (id)initWithURL:(id)a0 method:(id)a1 body:(id)a2 timeoutInterval:(double)a3;
- (id)responseWithStatusCode:(long long)a0;
- (void)setHeaderValue:(id)a0 forHeaderKey:(id)a1;

@end
