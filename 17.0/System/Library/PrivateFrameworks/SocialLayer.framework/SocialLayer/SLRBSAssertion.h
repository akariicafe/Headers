@class RBSAssertion;

@interface SLRBSAssertion : NSObject

@property (readonly, nonatomic) RBSAssertion *assertion;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)assertionNameForType:(long long)a0;
+ (id)assertionWithType:(long long)a0 pid:(int)a1 error:(id *)a2;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 pid:(int)a1 error:(id *)a2;

@end
