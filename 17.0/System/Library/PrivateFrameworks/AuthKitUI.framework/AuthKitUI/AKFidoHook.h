@class NSString, RUIObjectModel, ACAccount, RUIServerHookResponse;
@protocol RUIServerHookDelegate;

@interface AKFidoHook : NSObject <RUIServerHook>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<RUIServerHookDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isUserCancelError:(id)a0;
- (void)_startFidoRegistrationWithAttributes:(id)a0 completion:(id /* block */)a1;
- (void)_startFidoVerificationWithAttributes:(id)a0 completion:(id /* block */)a1;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;

@end
