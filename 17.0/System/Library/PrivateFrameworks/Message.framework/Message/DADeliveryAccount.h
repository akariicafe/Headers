@class DAMailAccount;

@interface DADeliveryAccount : DeliveryAccount {
    DAMailAccount *_DAMailAccount;
}

+ (id)accountTypeIdentifier;

- (void).cxx_destruct;
- (Class)deliveryClass;
- (id)initWithDAMailAccount:(id)a0;
- (id)mailAccountIfAvailable;
- (id)newDeliveryWithHeaders:(id)a0 HTML:(id)a1 plainTextAlternative:(id)a2 other:(id)a3;
- (id)newDeliveryWithHeaders:(id)a0 mixedContent:(id)a1 textPartsAreHTML:(BOOL)a2;
- (id)newDeliveryWithMessage:(id)a0;

@end
