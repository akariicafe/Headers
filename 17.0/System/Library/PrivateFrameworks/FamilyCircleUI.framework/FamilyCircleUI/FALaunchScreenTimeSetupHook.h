@class NSString, NSDictionary, RUIObjectModel, RUIServerHookResponse;
@protocol FASTChildSetupControllerProviderProtocol, FAScreenTimeRequestProviderProtocol, FAACAccountStoreProtocol, RUIServerHookDelegate;

@interface FALaunchScreenTimeSetupHook : NSObject <RUIServerHook>

@property (retain, nonatomic) id<FASTChildSetupControllerProviderProtocol> childSetupControllerProvider;
@property (retain, nonatomic) id<FAScreenTimeRequestProviderProtocol> screenTimeRequestProvider;
@property (retain, nonatomic) id<FAACAccountStoreProtocol> accountStore;
@property (nonatomic) BOOL isChildDevice;
@property (copy, nonatomic) NSDictionary *ephemeralAuthResults;
@property (copy, nonatomic) id /* block */ completionAction;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<RUIServerHookDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;
- (void)_enableScreentimeWithIntroductionModel:(id)a0 account:(id)a1 dsidNum:(id)a2 completion:(id /* block */)a3;
- (id)_extractAgeFromObjectModel:(id)a0;
- (id)_extractNameFromObjectModel:(id)a0;
- (void)_launchScreenTimeSettings;
- (void)_launchScreenTimeSetupForUser:(id)a0 inObjectModel:(id)a1 withCompletion:(id /* block */)a2;
- (id)initWithAccountStore:(id)a0 screenTimeRequestProvider:(id)a1 childSetupControllerProvider:(id)a2;

@end
