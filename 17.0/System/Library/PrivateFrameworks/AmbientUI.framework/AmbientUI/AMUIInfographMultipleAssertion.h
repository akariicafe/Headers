@class NSArray, NSString;

@interface AMUIInfographMultipleAssertion : NSObject <BSInvalidatable>

@property (readonly, copy, nonatomic) NSArray *assertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id)initWithAssertions:(id)a0;
- (void).cxx_destruct;

@end
