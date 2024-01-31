@class NSString, _TtC16SessionAssertion30ProminentPresentationAssertion;

@interface SNAProminentPresentationAssertion : NSObject {
    _TtC16SessionAssertion30ProminentPresentationAssertion *_assertion;
    id /* block */ _invalidationHandler;
}

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long invalidationReason;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithExplanation:(id)a0 sessionIdentifier:(id)a1 duration:(double)a2 invalidationHandler:(id /* block */)a3;
- (id)initWithExplanation:(id)a0 sessionIdentifier:(id)a1 invalidationHandler:(id /* block */)a2;

@end
