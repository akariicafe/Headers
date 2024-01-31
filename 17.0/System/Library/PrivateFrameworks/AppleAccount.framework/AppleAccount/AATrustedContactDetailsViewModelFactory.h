@interface AATrustedContactDetailsViewModelFactory : NSObject

- (void)prepareForCustodianForFlow:(id)a0 withContact:(id)a1;
- (void)prepareForMyBenefactorFlow:(id)a0 withContact:(id)a1;
- (void)prepareForMyBeneficiaryFlow:(id)a0 withContact:(id)a1;
- (void)prepareForMyCustodianFlow:(id)a0 withContact:(id)a1;
- (id)viewModelForFlow:(unsigned long long)a0 withContact:(id)a1;

@end
