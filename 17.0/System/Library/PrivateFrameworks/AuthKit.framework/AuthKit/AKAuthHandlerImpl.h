@class NSString;

@interface AKAuthHandlerImpl : NSObject <AKAuthHandler>

@property (nonatomic) BOOL forceSilentAuth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildReauthenticationContextFromContext:(id)a0 error:(id *)a1;
- (void)reauthenticateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)reauthenticateWithContext:(id)a0 completionWithResults:(id /* block */)a1;

@end
