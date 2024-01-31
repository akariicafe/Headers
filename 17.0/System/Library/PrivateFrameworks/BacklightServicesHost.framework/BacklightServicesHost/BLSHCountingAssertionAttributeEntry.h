@class NSString, BLSAttribute, BLSHLocalCountingAssertionAttributeHandler;
@protocol BLSAssertionServiceResponding, BLSHAssertionAttributeHandlerService;

@interface BLSHCountingAssertionAttributeEntry : NSObject <BLSHLocalAssertionAttributeHandlerEntry> {
    BLSHLocalCountingAssertionAttributeHandler *_attributeHandler;
}

@property (readonly, weak, nonatomic) BLSAttribute *attribute;
@property (readonly, weak, nonatomic) id<BLSAssertionServiceResponding> assertion;
@property (readonly, weak, nonatomic) id<BLSHAssertionAttributeHandlerService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateForAttribute:(id)a0 fromAssertion:(id)a1 forService:(id)a2 attributeHandler:(id)a3;

- (void)invalidate;
- (id)initForAttribute:(id)a0 fromAssertion:(id)a1 forService:(id)a2 attributeHandler:(id)a3;
- (void).cxx_destruct;
- (BOOL)reactivateIfPossible;

@end
