@protocol HAP2EncodedRequest;

@interface HAP2AccessoryServerControllerTimedWriteOperation : HAP2AccessoryServerControllerOperation

@property (readonly, nonatomic) id<HAP2EncodedRequest> executeRequest;

- (void).cxx_destruct;
- (void)_cleanUp;
- (void)_parseExecuteResponseData:(id)a0;
- (void)_parsePrepareResponseData:(id)a0;
- (void)_parseResponseData:(id)a0;
- (void)_sendExecuteRequest;
- (void)_sendPrepareRequest;
- (void)_sendRequest;
- (id)initWithName:(id)a0 controller:(id)a1 encoding:(id)a2 transport:(id)a3 prepareRequest:(id)a4 executeRequest:(id)a5 endpoint:(id)a6 mimeType:(id)a7 timeout:(double)a8 options:(unsigned long long)a9;

@end
