@class NSString, BSServiceManager, NSArray, RBSTarget, RBSAssertion;

@interface BSServiceConnectionEndpointInjector : NSObject <BSServiceConnectionEndpointInjectorConfiguring, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSServiceManager *_manager;
    RBSTarget *_target;
    NSArray *_additionalAttributes;
    NSString *_domain;
    NSString *_service;
    NSString *_instance;
    NSString *_inheritingEnvironment;
    RBSAssertion *_assertion;
    BOOL _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)injectorWithConfigurator:(id /* block */)a0;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)setService:(id)a0;
- (void)setAdditionalAttributes:(id)a0;
- (void)setInstance:(id)a0;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (void)setInheritingEnvironment:(id)a0;
- (void)setDomain:(id)a0;

@end
