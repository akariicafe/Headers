@class NSString, NSArray, _TtC16SessionAssertion23SessionRequestAssertion, SNAAssertionTarget;

@interface SNAAssertion : NSObject {
    _TtC16SessionAssertion23SessionRequestAssertion *_sessionAssertion;
    id /* block */ _invalidationHandler;
}

@property (readonly, copy, nonatomic) SNAAssertionTarget *target;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long invalidationReason;
@property (readonly, copy, nonatomic) NSArray *sessionIdentifiers;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithExplanation:(id)a0 target:(id)a1 invalidateOnSessionRequest:(BOOL)a2 invalidationHandler:(id /* block */)a3;
- (id)initWithExplanation:(id)a0 target:(id)a1 invalidationHandler:(id /* block */)a2;

@end
