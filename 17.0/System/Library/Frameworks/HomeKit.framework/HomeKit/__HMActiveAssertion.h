@class HMHomeManager;

@interface __HMActiveAssertion : HMFAssertion

@property (readonly, weak) HMHomeManager *manager;

- (void)dealloc;
- (void)invalidate;
- (id)initWithName:(id)a0;
- (id)initWithHomeManager:(id)a0 reason:(id)a1;
- (void).cxx_destruct;

@end
