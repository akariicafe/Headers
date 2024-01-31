@class NSString, HMFTimer, HAP2AccessoryServerController;
@protocol HAP2AccessoryServerTransportRequestEndpoint, HAP2AccessoryServerTransportCommon, HAP2EncodedRequest, HAP2EncodedResponse, HAP2AccessoryServerEncoding;

@interface HAP2AccessoryServerControllerOperation : HAP2AsynchronousOperation <HMFTimerDelegate> {
    BOOL _attemptedSessionRefresh;
    HMFTimer *_timer;
    HAP2AccessoryServerController *_controller;
    id<HAP2AccessoryServerEncoding> _encoding;
    id<HAP2AccessoryServerTransportCommon> _transport;
    id<HAP2AccessoryServerTransportRequestEndpoint> _endpoint;
    NSString *_mimeType;
    double _timeout;
    unsigned long long _options;
    id<HAP2EncodedRequest> _request;
    id<HAP2EncodedResponse> _response;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timerDidFire:(id)a0;
- (void)finish;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (void)_cleanUp;
- (void)cancelWithError:(id)a0;
- (void)finishWithError:(id)a0;
- (void)_openTransport:(BOOL)a0;
- (void)_parseResponseData:(id)a0;
- (void)_sendRequest;
- (id)initWithName:(id)a0 controller:(id)a1 encoding:(id)a2 transport:(id)a3 request:(id)a4 endpoint:(id)a5 mimeType:(id)a6 timeout:(double)a7 options:(unsigned long long)a8;

@end
