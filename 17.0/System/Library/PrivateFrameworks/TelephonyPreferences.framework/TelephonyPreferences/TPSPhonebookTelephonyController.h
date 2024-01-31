@class NSString, CTPhoneNumberInfo, CTXPCServiceSubscriptionContext;

@interface TPSPhonebookTelephonyController : TPSTelephonyController <CoreTelephonyClientSuppServicesDelegate>

@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic) long long phoneBookEntryCount;
@property (retain, nonatomic) CTPhoneNumberInfo *phoneNumberInfo;
@property (copy, nonatomic) NSString *updatePhoneNumber;
@property (copy, nonatomic) id /* block */ updatePhoneNumberInfoCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)phoneNumberChanged:(id)a0;
- (void).cxx_destruct;
- (void)phoneBookSelected:(id)a0;
- (void)fetchPhoneNumberInfo;
- (void)fetchPhoneNumberInfoWithCompletion:(id /* block */)a0;
- (id)getPhoneNumberInfo;
- (id)getPhoneNumberInfoWithError:(id *)a0;
- (id)initWithSubscriptionContext:(id)a0;
- (void)savePhoneBookEntryAtIndex:(int)a0 withContactName:(id)a1 contactNumber:(id)a2;
- (void)savePhoneBookEntryAtIndex:(int)a0 withContactName:(id)a1 contactNumber:(id)a2 completion:(id /* block */)a3;
- (void)selectPhoneBookWithName:(int)a0 password:(id)a1 completion:(id /* block */)a2;
- (void)updatePhoneNumberInfo:(id)a0 label:(id)a1 number:(id)a2 completion:(id /* block */)a3;

@end
