@class NSString, ICQLink;

@interface _ICQUpgradeCompletePageSpecification : _ICQPageSpecification

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) ICQLink *doneLink;

+ (id)upgradeCompletePageSpecificationSampleForLevel:(long long)a0;

- (void).cxx_destruct;
- (id)pageIdentifier;
- (BOOL)hasCancelButtonForBack;

@end
