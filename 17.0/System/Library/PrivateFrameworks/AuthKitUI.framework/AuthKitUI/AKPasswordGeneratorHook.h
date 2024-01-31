@class NSString, SFStrongPasswordGenerator, RUIObjectModel, RUIServerHookResponse;
@protocol RUIServerHookDelegate;

@interface AKPasswordGeneratorHook : NSObject <RUIServerHook>

@property (retain, nonatomic) SFStrongPasswordGenerator *passwordGenerator;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<RUIServerHookDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_autogeneratePasswordForObjectModel:(id)a0 completion:(id /* block */)a1;
- (id)_fetchAndPopulatePasswordRows:(id)a0 objectModel:(id)a1 password:(id)a2;
- (id)_generatePasswordForAppWithAppID:(id)a0 passwordRules:(id)a1;
- (id)_tableViewRowWithID:(id)a0 inObjectModel:(id)a1;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;

@end
