@class PKAccountService, PKAccount, PKPaymentPass, PKPayLaterFinancingPlan, PKPayLaterInstallment, PKPayLaterPayment, PKPaymentWebService;

@interface PKPayLaterBusinessChatTopicComposer : NSObject {
    PKAccountService *_accountService;
    PKPaymentWebService *_paymentWebService;
    PKPayLaterFinancingPlan *_financingPlan;
    PKAccount *_payLaterAccount;
    PKPaymentPass *_payLaterPass;
    PKPayLaterInstallment *_installment;
    PKPayLaterPayment *_payment;
}

- (void).cxx_destruct;
- (void)_allBusinessChatTopicsForContext:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_dynamicBusinessChatTopicsForContext:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_releventTopicsForPassContextWithCompletion:(id /* block */)a0;
- (id)_staticBusinessChatTopicsForContext:(unsigned long long)a0;
- (id)_staticFinancingPlanContextBusinessChatTopics;
- (id)_staticFinancingPlanPaymentContextBusinessChatTopics;
- (id)_staticPassContextBusinessChatTopics;
- (id)initWithPayLaterAccount:(id)a0 payLaterPass:(id)a1 financingPlan:(id)a2 installment:(id)a3 payment:(id)a4;
- (void)releventTopicsForContext:(unsigned long long)a0 completion:(id /* block */)a1;

@end
