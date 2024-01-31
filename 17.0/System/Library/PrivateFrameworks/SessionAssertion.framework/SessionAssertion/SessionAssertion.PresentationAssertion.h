@class NSString;

@interface SessionAssertion.PresentationAssertion : NSObject {
    void /* unknown type, empty encoding */ attributeAssertion;
    void /* unknown type, empty encoding */ invalidationHandler;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *activityIdentifier;
@property (nonatomic, readonly) NSString *explanation;
@property (nonatomic, readonly) unsigned long long snaInvalidationReason;
@property (nonatomic, readonly) unsigned long long snaState;
@property (nonatomic, readonly) NSString *snaSessionIdentifier;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithExplanation:(id)a0 activityIdentifier:(id)a1 presentationState:(unsigned long long)a2 invalidationHandler:(id /* block */)a3;

@end
