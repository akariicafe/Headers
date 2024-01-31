@class NSString, FAAppleCashPresentationHandler, RUIObjectModel, RUIServerHookResponse;
@protocol RUIServerHookDelegate;

@interface FAPeerPaymentHook : NSObject <AAUIServerHook>

@property (retain, nonatomic) FAAppleCashPresentationHandler *appleCashPresentationHandler;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<RUIServerHookDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;
- (void)_handlePeerPaymentActionWithAttributes:(id)a0 completion:(id /* block */)a1;

@end
