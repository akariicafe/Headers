@class NSString, _UIAssertionController;

@interface _UIAssertionBase : NSObject <_UIAssertion>

@property (readonly, nonatomic) BOOL initialState;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *reason;
@property (weak, nonatomic) _UIAssertionController *parentController;
@property (readonly, nonatomic) BOOL invalidated;
@property (readonly, nonatomic) BOOL requiresExplicitInvalidation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)_initWithType:(unsigned long long)a0 initialState:(BOOL)a1 reason:(id)a2 requiresExplicitInvalidation:(BOOL)a3;

@end
