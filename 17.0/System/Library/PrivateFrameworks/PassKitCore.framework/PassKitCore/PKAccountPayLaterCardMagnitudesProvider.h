@class NSString, PKPayLaterCardMagnitudes, PKAccountService;

@interface PKAccountPayLaterCardMagnitudesProvider : NSObject <PKAccountServiceObserver, PKPayLaterCardMagnitudesProvider> {
    NSString *_accountIdentifier;
    PKAccountService *_accountService;
    PKPayLaterCardMagnitudes *_magnitudes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ updateHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleMagnitudesUpdate:(id)a0;
- (id)initWithAccountIdentifier:(id)a0 accountService:(id)a1;
- (void)payLaterCardMagnitudesChanged:(id)a0 forAccountIdentifier:(id)a1;
- (void)refreshMagnitudes;

@end
