@class NSOrderedSet, NSString, PKPaymentSetupProduct;

@interface PKPaymentSetupProductsSectionListItem : PKPaymentSetupListItem <NSCopying>

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (copy, nonatomic) NSOrderedSet *searchTerms;
@property (nonatomic) unsigned long long isLoadingIcon;
@property (retain, nonatomic) NSString *sectionIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
