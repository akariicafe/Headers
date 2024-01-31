@class PKPaymentSetupProductsSectionListItem;

@interface PKProductSearchResult : NSObject

@property (readonly, nonatomic) PKPaymentSetupProductsSectionListItem *listItem;
@property (readonly, nonatomic) double searchDistance;

- (void).cxx_destruct;
- (id)initWithListItem:(id)a0 searchDistance:(double)a1;

@end
