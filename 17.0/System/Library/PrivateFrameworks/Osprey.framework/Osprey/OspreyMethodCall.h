@class NSString;
@protocol OspreyRPC;

@interface OspreyMethodCall : NSObject {
    NSString *_methodName;
    id<OspreyRPC> _channel;
    id /* block */ _serializeRequest;
    id /* block */ _deserializeResponse;
    id /* block */ _defaultRequestBuilder;
}

- (void).cxx_destruct;
- (id)callWithMessageReceived:(id /* block */)a0 completion:(id /* block */)a1;
- (id)callWithRequestBuilder:(id /* block */)a0 messageReceived:(id /* block */)a1 completion:(id /* block */)a2;
- (id)initWithMethodName:(id)a0 channel:(id)a1 serializeRequest:(id /* block */)a2 deserializeResponse:(id /* block */)a3 defaultRequestBuilder:(id /* block */)a4;

@end
