@class WFRemoteWidgetConnection;

@interface WFRemoteWidgetDataProvider : NSObject <WFRemoteWidgetConnectionListenerDelegate>

@property (retain, nonatomic) WFRemoteWidgetConnection *remoteWidgetConnection;

+ (id)enumerationParameterWithKey:(id)a0 action:(id)a1;
+ (void)handleReceivedData:(id)a0 responseHandler:(id /* block */)a1;
+ (id)linkActionFromRequest:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)remoteWidgetConnection:(id)a0 didReceiveData:(id)a1 responseHandler:(id /* block */)a2;
- (void)remoteWidgetConnectionConnectionLost:(id)a0;

@end
