@class NSData, NSString;

@interface JXHTTPJSONBody : NSObject <JXHTTPRequestBody>

@property (retain, nonatomic) NSData *requestData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withString:(id)a0;
+ (id)withData:(id)a0;
+ (id)withJSONObject:(id)a0;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)httpInputStream;
- (id)httpContentType;
- (long long)httpContentLength;
- (void)httpOperationDidFinishLoading:(id)a0;

@end
