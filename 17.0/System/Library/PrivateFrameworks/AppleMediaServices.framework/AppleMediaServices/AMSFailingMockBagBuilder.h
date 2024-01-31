@class NSError;

@interface AMSFailingMockBagBuilder : AMSMockBagBuilder

@property (nonatomic) double delay;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)createMockBag;

@end
