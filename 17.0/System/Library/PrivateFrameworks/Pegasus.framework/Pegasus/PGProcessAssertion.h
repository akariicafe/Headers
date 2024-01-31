@class NSString, NSError, NSObject, RBSAssertion;
@protocol OS_dispatch_queue;

@interface PGProcessAssertion : NSObject {
    BOOL _lock_invalidated;
    NSString *_explanation;
    RBSAssertion *_assertion;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_error;
    BOOL _acquired;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)assertionWithDomainAttribute:(id)a0 forProcessWithIdentifier:(int)a1 explanation:(id)a2;
+ (id)pipVisibleAssertionForProcessWithIdentifier:(int)a0 explanation:(id)a1;
+ (id)pipVisibleDomainAttribute;
+ (id)transientTaskAssertionForProcessWithIdentifier:(int)a0 explanation:(id)a1;
+ (id)transientTaskDomainAttribute;

- (void)dealloc;
- (void)invalidate;
- (id)initWithExplanation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_isInvalidated;
- (void)_setInvalidated:(BOOL)a0;
- (void)acquireWithTarget:(id)a0 domainAttribute:(id)a1;

@end
