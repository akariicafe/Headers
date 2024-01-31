@class NSURLRequest, NSData, NSString;

@interface MGRemoteQueryServerHandlerPing : NSObject <MGRemoteQueryServerHandlerProtocol>

@property (readonly, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSData *responsePayload;
@property (nonatomic) BOOL replied;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)urlPath;
+ (id)handlerForRequest:(id)a0;

- (void).cxx_destruct;
- (id)_initWithRequest:(id)a0;
- (BOOL)validateRequest;
- (int)prepareResponse:(id)a0;
- (void)provideResponseData:(id /* block */)a0;

@end
