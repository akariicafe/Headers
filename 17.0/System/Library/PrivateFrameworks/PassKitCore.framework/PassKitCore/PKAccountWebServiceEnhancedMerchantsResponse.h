@class NSArray, NSNumber, NSDate;

@interface PKAccountWebServiceEnhancedMerchantsResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) NSArray *merchants;
@property (readonly, nonatomic) NSArray *orderings;
@property (readonly, nonatomic) NSDate *lastAddedDate;
@property (readonly, nonatomic) NSNumber *minRefreshPeriod;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
