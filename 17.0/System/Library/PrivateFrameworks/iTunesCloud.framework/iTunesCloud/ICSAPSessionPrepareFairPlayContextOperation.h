@class ICSAPSession;

@interface ICSAPSessionPrepareFairPlayContextOperation : ICAsyncOperation

@property (retain, nonatomic) ICSAPSession *sapSession;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;
- (void)_exchangeDataWithSAPContext:(id)a0 requestContext:(id)a1 setupURL:(id)a2 responseData:(id)a3 completionHandler:(id /* block */)a4;

@end
