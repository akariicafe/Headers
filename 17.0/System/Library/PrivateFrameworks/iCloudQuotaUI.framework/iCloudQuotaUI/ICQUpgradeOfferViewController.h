@class _ICQUpgradeOfferPageSpecification;

@interface ICQUpgradeOfferViewController : ICQViewController

@property (readonly, nonatomic) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;
@property (nonatomic, getter=isCancelEnabled) BOOL cancelEnabled;

+ (BOOL)supportsPageClassIdentifier:(id)a0;

- (void)loadView;
- (void)cancel:(id)a0;
- (id)initWithPageSpecification:(id)a0;
- (id)initWithUpgradeOfferPageSpecification:(id)a0;

@end
