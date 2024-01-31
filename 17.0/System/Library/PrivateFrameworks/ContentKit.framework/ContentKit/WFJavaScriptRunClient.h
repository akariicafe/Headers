@class NSXPCListenerEndpoint;

@interface WFJavaScriptRunClient : NSObject

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;

- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)runJavaScript:(id)a0 completionHandler:(id /* block */)a1;

@end
