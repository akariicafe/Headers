@class NSString, _TtC16SessionAssertion21PresentationAssertion;

@interface SNAPresentationAssertion : NSObject {
    _TtC16SessionAssertion21PresentationAssertion *_assertion;
    id /* block */ _invalidationHandler;
}

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long invalidationReason;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithExplanation:(id)a0 sessionIdentifier:(id)a1 presentationState:(unsigned long long)a2 invalidationHandler:(id /* block */)a3;

@end
