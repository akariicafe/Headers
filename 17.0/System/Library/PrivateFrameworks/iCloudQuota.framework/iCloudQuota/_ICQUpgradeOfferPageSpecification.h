@class NSString, NSDictionary, NSArray, ICQLink;

@interface _ICQUpgradeOfferPageSpecification : _ICQPageSpecification

@property (readonly, nonatomic) NSDictionary *serverDict;
@property (retain, nonatomic) NSString *iconBundleIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSArray *messageLinks;
@property (retain, nonatomic) NSString *altMessage;
@property (retain, nonatomic) NSArray *altMessageLinks;
@property (retain, nonatomic) ICQLink *purchaseLink;
@property (retain, nonatomic) ICQLink *purchase2Link;
@property (retain, nonatomic) ICQLink *bottomLink;
@property (retain, nonatomic) NSString *fineprintFormat;
@property (retain, nonatomic) NSArray *fineprintLinks;
@property (retain, nonatomic) NSString *purchase2LinkVisibleKey;
@property (retain, nonatomic) NSString *bottomLinkVisibleKey;

+ (id)upgradeOfferPageSpecificationSampleForLevel:(long long)a0;

- (id)copy;
- (id)initWithServerDictionary:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithBindings:(id)a0;
- (id)initWithServerDictionary:(id)a0 pageIdentifier:(id)a1;

@end
