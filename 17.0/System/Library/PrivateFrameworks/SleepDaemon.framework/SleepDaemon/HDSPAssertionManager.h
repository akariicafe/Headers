@class NSString, NSMutableDictionary;

@interface HDSPAssertionManager : NSObject <BSDescriptionProviding, HDSPDiagnosticsProvider>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } assertionsLock;
@property (retain, nonatomic) NSMutableDictionary *assertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)assertionClassForType:(unsigned long long)a0;

- (void)takeAssertion:(id)a0;
- (id)init;
- (void)takeAssertionWithIdentifier:(id)a0 type:(unsigned long long)a1 timeout:(double)a2;
- (id)diagnosticDescription;
- (id)succinctDescriptionBuilder;
- (void)takeIndefiniteAssertionWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)takeAssertionWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)_assertionsOfType:(unsigned long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)activeAssertionIdentifiersOfType:(unsigned long long)a0;
- (id)succinctDescription;
- (void)releaseAssertionWithIdentifier:(id)a0;
- (id)diagnosticInfo;
- (void)_withLock:(id /* block */)a0;

@end
