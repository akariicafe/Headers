@class PKAccountDailyCashDestinationsSummary;

@interface PKAccountWebServiceDailyCashEligibilityResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKAccountDailyCashDestinationsSummary *summary;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
