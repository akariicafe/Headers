@class NSString, NSArray;
@protocol FPUIActionControllerDelegate;

@interface FPUIActionController : NSObject <FPUIActionRemoteContextDelegate, FPUIActionControllerProtocol>

@property (weak, nonatomic) id<FPUIActionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSString *domainIdentifier;

+ (id)actionControllerForActionIdentifier:(id)a0 actionTitle:(id)a1 items:(id)a2 providerIdentifier:(id)a3 domainIdentifier:(id)a4;

- (void).cxx_destruct;
- (id)performActionWithCompletionHandler:(id /* block */)a0;
- (void)_delegateError:(id)a0;
- (void)_delegateDidFinishWithUserInfo:(id)a0 error:(id)a1;
- (id)_getExtensionWithError:(id *)a0;
- (void)remoteActionContext:(id)a0 didEncounterError:(id)a1 completionHandler:(id /* block */)a2;
- (void)remoteActionContextDidFinishAction:(id)a0 userInfo:(id)a1 error:(id)a2;

@end
