@class NSMutableSet, RBSAssertion;

@interface AXUIAssertionManager : NSObject

@property (retain, nonatomic) RBSAssertion *assertionUI;
@property (retain, nonatomic) RBSAssertion *assertionBackground;
@property (retain, nonatomic) NSMutableSet *clientsWithUIAssertion;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_invalidateAssertion;
- (void)acquireAssertionIfNeeded;
- (void)invalidateAssertionIfNeeded;
- (void)_invalidateAssertionUI;
- (id)_serviceClientIDForService:(id)a0 clientIdentifier:(id)a1;
- (void)acquireAssertionUIIfNeeded;
- (void)acquireAssertionUIIfNeededForService:(id)a0 clientIdentifier:(id)a1;
- (void)invalidateAssertionUIIfNeeded;
- (void)invalidateAssertionUIIfNeededForService:(id)a0 clientIdentifier:(id)a1;

@end
