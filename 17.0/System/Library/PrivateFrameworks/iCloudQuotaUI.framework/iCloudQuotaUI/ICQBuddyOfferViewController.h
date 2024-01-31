@class OBBoldTrayButton, NSString, _ICQPageSpecification, _ICQUpgradeOfferPageSpecification;
@protocol ICQPageDelegate;

@interface ICQBuddyOfferViewController : OBWelcomeController <ICQPageDelegate> {
    OBBoldTrayButton *_purchaseButton;
    OBBoldTrayButton *_purchase2Button;
}

@property (readonly, nonatomic) _ICQPageSpecification *pageSpecification;
@property (readonly, nonatomic) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;
@property (weak, nonatomic) id<ICQPageDelegate> pageDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsPageClassIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)hideSpinner;
- (void)bottomButtonTapped:(id)a0;
- (id)initWithPageSpecification:(id)a0;
- (void)purchase2ButtonTapped:(id)a0;
- (void)purchaseButtonTapped:(id)a0;
- (void)sender:(id)a0 action:(long long)a1 parameters:(id)a2;

@end
