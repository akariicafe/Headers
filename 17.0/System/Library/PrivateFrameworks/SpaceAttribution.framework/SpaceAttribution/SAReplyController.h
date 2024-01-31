@class NSUUID;

@interface SAReplyController : NSObject <SAReplyProtocol>

@property (retain) NSUUID *controllerID;
@property (copy) id /* block */ appSizerUpdateHandler;
@property (copy) id /* block */ urlSizerUpdateHandler;

- (void).cxx_destruct;
- (void)callAppSizerHandlerWithError:(id)a0;
- (void)callAppSizerHandlerWithResults:(id)a0 error:(id)a1 withHandlerResultBlock:(id /* block */)a2;
- (void)callURLSizerHandlerWithError:(id)a0;
- (void)callURLSizerHandlerWithResults:(id)a0 error:(id)a1 withHandlerResultsBlock:(id /* block */)a2;

@end
