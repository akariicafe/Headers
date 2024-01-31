@class FCEndpointConnection, FCAsyncSerialQueue;

@interface FCAnalyticsEndpointConnection : NSObject

@property (retain, nonatomic) FCEndpointConnection *endpointConnection;
@property (retain, nonatomic) FCAsyncSerialQueue *serialQueue;

- (id)initWithEndpointConnection:(id)a0;
- (void)uploadEnvelopeBatch:(id)a0 withURL:(id)a1 valuesByHTTPHeaderField:(id)a2 priority:(float)a3 callbackQueue:(id)a4 completion:(id /* block */)a5;
- (void)uploadEnvelopeBatch:(id)a0 withURL:(id)a1 valuesByHTTPHeaderField:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
