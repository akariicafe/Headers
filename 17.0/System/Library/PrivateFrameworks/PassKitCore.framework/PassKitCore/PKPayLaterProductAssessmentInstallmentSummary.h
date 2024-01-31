@class NSArray;

@interface PKPayLaterProductAssessmentInstallmentSummary : NSObject

@property (copy, nonatomic) NSArray *installmentAmounts;
@property (copy, nonatomic) NSArray *installmentDates;
@property (nonatomic) long long installmentCount;

- (void).cxx_destruct;

@end
