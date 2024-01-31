@class ASTSession, ASTAuthInfoResult, NSDictionary, ASTProfileResult, ASTIdentity, NSString;

@interface ASTAutomatedSession : NSObject <ASTSessionSigningDelegate>

@property (retain, nonatomic) ASTIdentity *identity;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) ASTSession *session;
@property (retain, nonatomic) NSDictionary *tests;
@property (retain, nonatomic) ASTProfileResult *profile;
@property (retain, nonatomic) ASTAuthInfoResult *authInfo;
@property (copy, nonatomic) id /* block */ authInfoHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sessionExistsForIdentities:(id)a0 ticketNumber:(id)a1 completionHandler:(id /* block */)a2;
+ (void)sessionExistsForSerialNumbers:(id)a0 ticketNumber:(id)a1 completionHandler:(id /* block */)a2;
+ (id)sessionWithIdentity:(id)a0 profile:(id)a1 tests:(id)a2 authInfoHandler:(id /* block */)a3;
+ (id)sessionWithSerialNumber:(id)a0 profile:(id)a1 tests:(id)a2 authInfoHandler:(id /* block */)a3;

- (void)end;
- (void).cxx_destruct;
- (void)session:(id)a0 didEndWithError:(id)a1;
- (void)executeWithCompletion:(id /* block */)a0;
- (id)initWithIdentity:(id)a0 profile:(id)a1 tests:(id)a2 authInfoHandler:(id /* block */)a3;
- (void)session:(id)a0 cancelTest:(id)a1;
- (void)session:(id)a0 generateAuthInfoWithNonce:(id)a1;
- (void)session:(id)a0 profile:(id)a1 filteredByComponents:(id)a2;
- (void)session:(id)a0 startTest:(id)a1 parameters:(id)a2 testResult:(id)a3;

@end
