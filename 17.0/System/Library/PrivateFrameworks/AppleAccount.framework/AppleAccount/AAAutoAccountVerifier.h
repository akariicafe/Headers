@class NSString, MSSearch, ACAccount, NSOperationQueue;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {
    MSSearch *_search;
    NSOperationQueue *_requesterQueue;
    id /* block */ _handler;
    int _attempts;
    BOOL _canceled;
}

@property (retain, nonatomic) ACAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)_verify;
- (void)_validateToken:(id)a0;
- (void)_resendVerificationEmailForAccount:(id)a0 completion:(id /* block */)a1;
- (BOOL)search:(id)a0 didFindResults:(id)a1;
- (void)search:(id)a0 didFinishWithError:(id)a1;
- (void)sendVerificationEmail;
- (void)verifyWithHandler:(id /* block */)a0;

@end
