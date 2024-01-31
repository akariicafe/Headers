@class NSString;

@interface _SBUIBiometricMatchingAssertion : _SBUIBiometricOperationAssertion <BSDescriptionProviding>

@property (readonly, nonatomic) unsigned long long matchMode;
@property (nonatomic) long long restartCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithMatchMode:(unsigned long long)a0 reason:(id)a1 invalidationBlock:(id /* block */)a2;
- (id)succinctDescription;
- (id)initWithIdentifier:(id)a0 forReason:(id)a1 queue:(id)a2 invalidationBlock:(id /* block */)a3;

@end
