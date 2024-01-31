@class PKPayLaterPayment, NSString, PKPayLaterFinancingPlan, PKPayLaterInstallment;

@interface PKAccountWebServicePayLaterReportIssueContentRequest : PKAccountWebServicePayLaterContentRequest {
    NSString *_contextString;
}

@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan;
@property (retain, nonatomic) PKPayLaterPayment *payment;
@property (retain, nonatomic) PKPayLaterInstallment *installment;

- (void).cxx_destruct;
- (id)contextString;
- (id)initWithTopic:(id)a0;
- (id)bodyDictionary;

@end
