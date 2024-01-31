@class NSString, NSMutableArray;

@interface SBHCompoundAssertion : NSObject <BSDescriptionStreamable, BSInvalidatable> {
    NSMutableArray *_assertions;
}

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReason:(id)a0;
- (void)addAssertion:(id)a0;
- (id)init;
- (void)invalidate;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)addAssertions:(id)a0;
- (id)initWithReason:(id)a0 assertions:(id)a1;

@end
