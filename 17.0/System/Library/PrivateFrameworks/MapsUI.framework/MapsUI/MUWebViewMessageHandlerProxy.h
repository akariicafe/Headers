@class NSString;
@protocol WKScriptMessageHandler;

@interface MUWebViewMessageHandlerProxy : NSObject <WKScriptMessageHandler>

@property (weak, nonatomic) id<WKScriptMessageHandler> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
