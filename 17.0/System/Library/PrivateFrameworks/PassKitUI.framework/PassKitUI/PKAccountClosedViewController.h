@class PKFamilyMemberCollection, PKAccount, PKAccountUserCollection;

@interface PKAccountClosedViewController : PKExplanationViewController {
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKFamilyMemberCollection *_familyMemberCollection;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)explanationViewDidSelectBodyButton:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithAccount:(id)a0 accountUserCollection:(id)a1 familyMemberCollection:(id)a2 context:(long long)a3;

@end
