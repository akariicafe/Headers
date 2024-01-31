@class UIColor, NSString, NSArray, UICollectionViewCellRegistration;
@protocol PKPeerPaymentRecurringPaymentDetailFundingSourceSectionControllerDelegate;

@interface PKPeerPaymentRecurringPaymentDetailFundingSourceSectionController : PKDynamicListSectionController {
    NSArray *_rowItems;
    UICollectionViewCellRegistration *cellRegistration;
}

@property (copy, nonatomic) NSString *fundingSource;
@property (nonatomic) BOOL useAppleCashBalance;
@property (readonly, weak, nonatomic) id<PKPeerPaymentRecurringPaymentDetailFundingSourceSectionControllerDelegate> delegate;
@property (nonatomic) BOOL isEditable;
@property (copy, nonatomic) UIColor *titleColor;

- (id)identifiers;
- (void).cxx_destruct;
- (id)cellRegistration;
- (void)setCellRegistration:(id)a0;
- (void)didSelectItem:(id)a0;
- (void)_decorateListCell:(id)a0 forItem:(id)a1;
- (id)initWithFundingSource:(id)a0 useAppleCashBalance:(BOOL)a1 delegate:(id)a2;
- (void)reloadItemsAnimated:(BOOL)a0;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
