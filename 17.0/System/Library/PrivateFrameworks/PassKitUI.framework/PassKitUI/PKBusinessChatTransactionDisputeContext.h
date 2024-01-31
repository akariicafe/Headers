@class PKAccountSupportTopic, NSString, NSSet, PKPaymentTransaction, PKAccountUser, PKFamilyMember, PKPaymentPass, PKAccount;

@interface PKBusinessChatTransactionDisputeContext : NSObject <PKBusinessChatContext> {
    PKPaymentPass *_paymentPass;
    PKPaymentTransaction *_transaction;
    PKAccount *_account;
    PKAccountUser *_accountUser;
    PKFamilyMember *_familyMember;
    NSSet *_physicalCards;
    long long _intent;
    PKAccountSupportTopic *_topic;
    BOOL _disputingAccountUserTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresAuthorization;
- (id)bodyText;
- (void).cxx_destruct;
- (id)groupParameters;
- (id)_formattedBodyTextForTopicBodyText:(id)a0;
- (id)_formattedTransactionDate;
- (id)_replacePlaceholder:(id)a0 withValue:(id)a1 inBodyText:(id)a2;
- (id)businessIdentifier;
- (id)initWithPaymentPass:(id)a0 transaction:(id)a1 account:(id)a2 accountUser:(id)a3 familyMember:(id)a4 physicalCards:(id)a5 intent:(long long)a6;
- (id)initWithPaymentPass:(id)a0 transaction:(id)a1 account:(id)a2 accountUser:(id)a3 familyMember:(id)a4 physicalCards:(id)a5 topic:(id)a6;
- (id)intentParameters;

@end
