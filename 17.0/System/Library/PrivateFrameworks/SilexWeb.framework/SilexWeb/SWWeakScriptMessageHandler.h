@class NSString;
@protocol WKScriptMessageHandler;

@interface SWWeakScriptMessageHandler : NSObject <WKScriptMessageHandler>

@property (readonly, weak, nonatomic) id<WKScriptMessageHandler> scriptMessageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (id)initWithScriptMessageHandler:(id)a0;

@end
