@class AKAppleIDPasskeyCredentialRequestContext;

@interface _AKAppleIDPasskeyRequestState : NSObject

@property (retain, nonatomic) AKAppleIDPasskeyCredentialRequestContext *context;
@property (copy, nonatomic) id /* block */ completion;

+ (id)stateWithContext:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;

@end
