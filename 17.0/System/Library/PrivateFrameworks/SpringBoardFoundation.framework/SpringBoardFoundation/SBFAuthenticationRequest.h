@class NSString;

@interface SBFAuthenticationRequest : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long source;
@property (readonly, copy, nonatomic) NSString *passcode;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) BOOL skipSEKeepUserDataOperation;

- (id)succinctDescriptionBuilder;
- (id)publicDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initForPasscode:(id)a0 source:(long long)a1 handler:(id /* block */)a2;
- (id)_initWithType:(unsigned long long)a0 source:(long long)a1 passcode:(id)a2 skipSEKeepUserDataOperation:(BOOL)a3 handler:(id /* block */)a4;
- (id)initForBiometricAuthenticationWithSource:(long long)a0;
- (id)initForBiometricAuthenticationWithSource:(long long)a0 handler:(id /* block */)a1;
- (id)initForPasscode:(id)a0 source:(long long)a1;
- (id)initForPasscode:(id)a0 source:(long long)a1 skipSEKeepUserDataOperation:(BOOL)a2 handler:(id /* block */)a3;

@end
