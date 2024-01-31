@class BKSProcessAssertion, NSObject;
@protocol OS_dispatch_source;

@interface MFTaskAssertion : NSObject {
    BKSProcessAssertion *_assertion;
    NSObject<OS_dispatch_source> *_timer;
}

- (void)cancelTimer;
- (void)dealloc;
- (void)invalidate;
- (id)initWithName:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 expiration:(double)a1 preventIdleSleep:(BOOL)a2;
- (id)initWithName:(id)a0 preventIdleSleep:(BOOL)a1;

@end
