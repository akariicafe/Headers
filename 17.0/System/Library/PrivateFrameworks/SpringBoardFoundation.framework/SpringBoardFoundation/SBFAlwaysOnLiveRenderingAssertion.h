@class NSString, NSDate;

@interface SBFAlwaysOnLiveRenderingAssertion : NSObject <BSInvalidatable> {
    id /* block */ _invalidationHandler;
    NSString *_reason;
    NSDate *_createdAt;
    BOOL _valid;
    double _timeout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createdAt;
- (void)dealloc;
- (void)invalidate;
- (id)reason;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)_startAutoInvalidationTimer;
- (id)initWithReason:(id)a0 invalidationHandler:(id /* block */)a1;
- (id)initWithReason:(id)a0 timeout:(double)a1 invalidationHandler:(id /* block */)a2;

@end
