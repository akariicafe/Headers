@class NSString;

@interface SBInAppStatusBarHiddenAssertion : NSObject <BSInvalidatable> {
    NSString *_identifier;
    NSString *_reason;
    id /* block */ _invalidationBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateWithAnimation:(BOOL)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 forReason:(id)a1 invalidationBlock:(id /* block */)a2;

@end
