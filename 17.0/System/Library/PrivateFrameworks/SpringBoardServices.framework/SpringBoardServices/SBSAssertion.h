@class NSString, BSMachPortReceiveRight;

@interface SBSAssertion : NSObject <BSInvalidatable>

@property (readonly, copy, nonatomic) NSString *assertionName;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BSMachPortReceiveRight *receiveRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addHandler:(id /* block */)a0 forDeathOfServerPort:(id)a1;
- (void)invalidate;
- (id)initWithAssertionName:(id)a0 reason:(id)a1 port:(unsigned int)a2;
- (id)initWithAssertionName:(id)a0 reason:(id)a1 receiveRight:(id)a2;
- (void).cxx_destruct;

@end
